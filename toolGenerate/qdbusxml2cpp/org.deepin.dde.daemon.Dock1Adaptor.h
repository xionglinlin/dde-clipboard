/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-clipboard/dbus/org.deepin.dde.daemon.Dock1.xml -a ./dde-clipboard/toolGenerate/qdbusxml2cpp/org.deepin.dde.daemon.Dock1Adaptor -i ./dde-clipboard/toolGenerate/qdbusxml2cpp/org.deepin.dde.daemon.Dock1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef ORG_DEEPIN_DDE_DAEMON_DOCK1ADAPTOR_H
#define ORG_DEEPIN_DDE_DAEMON_DOCK1ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-clipboard/toolGenerate/qdbusxml2cpp/org.deepin.dde.daemon.Dock1.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.deepin.dde.daemon.Dock1
 */
class Dock1Adaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.deepin.dde.daemon.Dock1")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.deepin.dde.daemon.Dock1\">\n"
"    <property access=\"readwrite\" type=\"i\" name=\"DisplayMode\"/>\n"
"    <property access=\"read\" type=\"(iiii)\" name=\"FrontendWindowRect\">\n"
"      <annotation value=\"QRect\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
"    </property>\n"
"    <property access=\"readwrite\" type=\"i\" name=\"HideMode\"/>\n"
"    <property access=\"read\" type=\"i\" name=\"HideState\"/>\n"
"    <property access=\"readwrite\" type=\"i\" name=\"Position\"/>\n"
"    <property access=\"readwrite\" type=\"u\" name=\"WindowSizeEfficient\"/>\n"
"    <property access=\"readwrite\" type=\"u\" name=\"WindowSizeFashion\"/>\n"
"    <signal name=\"DisplayModeChanged\">\n"
"      <arg direction=\"out\" type=\"i\" name=\"displaymode\"/>\n"
"    </signal>\n"
"    <signal name=\"FrontendWindowRectChanged\">\n"
"      <arg direction=\"out\" type=\"(iiii)\" name=\"FrontendWindowRect\"/>\n"
"      <annotation value=\"QRect\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n"
"    </signal>\n"
"    <signal name=\"HideModeChanged\">\n"
"      <arg direction=\"out\" type=\"i\" name=\"hideMode\"/>\n"
"    </signal>\n"
"    <signal name=\"HideStateChanged\">\n"
"      <arg direction=\"out\" type=\"i\" name=\"hideState\"/>\n"
"    </signal>\n"
"    <signal name=\"PositionChanged\">\n"
"      <arg direction=\"out\" type=\"i\" name=\"Position\"/>\n"
"    </signal>\n"
"    <signal name=\"WindowSizeEfficientChanged\">\n"
"      <arg direction=\"out\" type=\"u\" name=\"size\"/>\n"
"    </signal>\n"
"    <signal name=\"WindowSizeFashionChanged\">\n"
"      <arg direction=\"out\" type=\"u\" name=\"size\"/>\n"
"    </signal>\n"
"    <method name=\"IsDocked\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"desktopFile\"/>\n"
"    </method>\n"
"    <method name=\"RequestDock\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"desktopFile\"/>\n"
"      <arg direction=\"in\" type=\"i\" name=\"index\"/>\n"
"    </method>\n"
"    <method name=\"RequestUndock\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"desktopFile\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    Dock1Adaptor(QObject *parent);
    virtual ~Dock1Adaptor();

public: // PROPERTIES
    Q_PROPERTY(int DisplayMode READ displayMode WRITE setDisplayMode)
    int displayMode() const;
    void setDisplayMode(int value);

    Q_PROPERTY(QRect FrontendWindowRect READ frontendWindowRect)
    QRect frontendWindowRect() const;

    Q_PROPERTY(int HideMode READ hideMode WRITE setHideMode)
    int hideMode() const;
    void setHideMode(int value);

    Q_PROPERTY(int HideState READ hideState)
    int hideState() const;

    Q_PROPERTY(int Position READ position WRITE setPosition)
    int position() const;
    void setPosition(int value);

    Q_PROPERTY(uint WindowSizeEfficient READ windowSizeEfficient WRITE setWindowSizeEfficient)
    uint windowSizeEfficient() const;
    void setWindowSizeEfficient(uint value);

    Q_PROPERTY(uint WindowSizeFashion READ windowSizeFashion WRITE setWindowSizeFashion)
    uint windowSizeFashion() const;
    void setWindowSizeFashion(uint value);

public Q_SLOTS: // METHODS
    bool IsDocked(const QString &desktopFile);
    bool RequestDock(const QString &desktopFile, int index);
    bool RequestUndock(const QString &desktopFile);
Q_SIGNALS: // SIGNALS
    void DisplayModeChanged(int displaymode);
    void FrontendWindowRectChanged(const QRect &FrontendWindowRect);
    void HideModeChanged(int hideMode);
    void HideStateChanged(int hideState);
    void PositionChanged(int Position);
    void WindowSizeEfficientChanged(uint size);
    void WindowSizeFashionChanged(uint size);
};

#endif
