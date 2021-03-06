/**
 * Copyright (c) 2017-2018 Structured Data, LLC
 * 
 * This file is part of BERT.
 *
 * BERT is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * BERT is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with BERT.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define  WINVER			0x0501

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0501
#endif // #ifndef _WIN32_WINNT

#define ISOLATION_AWARE_ENABLED 1

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers

#include <windows.h>
#include <Commdlg.h>
#include <objbase.h>
#include <process.h>

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include <string>
#include <list>
#include <vector>
#include <unordered_map>
#include <regex>
#include <sstream>
#include <algorithm>

// TODO: reference additional headers your program requires here

#pragma comment(linker,"\"/manifestdependency:type='win32' \
	name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
	processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

#include "debug_functions.h"
