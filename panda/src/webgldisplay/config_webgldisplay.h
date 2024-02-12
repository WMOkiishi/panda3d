/**
 * PANDA 3D SOFTWARE
 * Copyright (c) Carnegie Mellon University.  All rights reserved.
 *
 * All use of this software is subject to the terms of the revised BSD
 * license.  You should have received a copy of this license along
 * with this source code in a file named "LICENSE."
 *
 * @file config_webgldisplay.h
 * @author rdb
 * @date 2015-04-01
 */

#ifndef CONFIG_WEBGLDISPLAY_H
#define CONFIG_WEBGLDISPLAY_H

#include "pandabase.h"
#include "notifyCategoryProxy.h"
#include "configVariableString.h"
#include "configVariableBool.h"
#include "configVariableInt.h"

NotifyCategoryDecl(webgldisplay,,);

extern "C" void init_libwebgldisplay();

#endif
