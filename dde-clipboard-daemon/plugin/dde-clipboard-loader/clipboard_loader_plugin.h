// SPDX-FileCopyrightText: 2019 - 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef CLIPBOARD_LOADER_PLUGIN_H
#define CLIPBOARD_LOADER_PLUGIN_H

#include "clipboard_loader_plugin_global.h"

typedef void (*UnloadFun)(const char *);

extern "C"  CLIPBOARDLOADERSHARED_EXPORT bool Start();
extern "C"  CLIPBOARDLOADERSHARED_EXPORT bool Stop();
extern "C"  CLIPBOARDLOADERSHARED_EXPORT const char *Info();
extern "C"  CLIPBOARDLOADERSHARED_EXPORT void UnloadCallBack(UnloadFun fun);

#endif // CLIPBOARD_LOADER_PLUGIN_H