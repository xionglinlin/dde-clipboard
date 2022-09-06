// SPDX-FileCopyrightText: 2011 - 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later
#ifdef USE_DEEPIN_KF5_WAYLAND
#ifndef COPYCLIENT_H
#define COPYCLIENT_H

#include <QMimeData>
#include <QPointer>

namespace KWayland
{
namespace Client
{
class ConnectionThread;
class EventQueue;
class Registry;
class Seat;
class DataControlDeviceManager;
class DataControlDeviceV1;
class DataControlSourceV1;
class DataControlOfferV1;
} //Client
} //KWayland

using namespace KWayland::Client;

class DMimeData : public QMimeData
{
Q_OBJECT
public:
    DMimeData();
    ~DMimeData();
    virtual QVariant retrieveData(const QString &mimeType,
                                      QVariant::Type preferredType) const;
};

class WaylandCopyClient : public QObject
{
    Q_OBJECT

public:
    explicit WaylandCopyClient(QObject *parent = nullptr);
    virtual ~WaylandCopyClient();

    void init();
    const QMimeData *mimeData();
    void setMimeData(QMimeData *mimeData);
    void sendOffer();
    static WaylandCopyClient& ref();

private:
    void setupRegistry(Registry *registry);
    QList<QString> filterMimeType(const QList<QString> &mimeTypeList);

Q_SIGNALS:
    void dataChanged();

protected slots:
    void onSendDataRequest(const QString &mimeType, qint32 fd) const;
    void onDataOffered(DataControlOfferV1 *offer);
    void onDataChanged();

private:
    QThread *m_connectionThread;
    ConnectionThread *m_connectionThreadObject;
    EventQueue *m_eventQueue;
    DataControlDeviceManager *m_dataControlDeviceManager;
    DataControlDeviceV1 *m_dataControlDevice;
    DataControlSourceV1 *m_copyControlSource;
    QPointer<QMimeData> m_mimeData;
    Seat *m_seat;
};

#endif // COPYCLIENT_H
#endif