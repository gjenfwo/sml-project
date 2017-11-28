/*
 * This file is part of the Soletta (TM) Project
 *
 * Copyright (C) 2015 Intel Corporation. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#define SOL_PLATFORM_LINUX 1



#define SOL_FEATURE_FILESYSTEM 1


#define SOL_LOG_ENABLED 1
#define SOL_LOG_FILES 1
#define SOL_LOG_FUNCTIONS 1



#define SOL_MEMDESC_DESCRIPTION 1


#define SOL_DYNAMIC_MODULES 1


#ifdef SOL_PLATFORM_LINUX
#define SOL_MAINLOOP_FD_ENABLED 1
#define SOL_MAINLOOP_FORK_WATCH_ENABLED 1
#endif

#ifdef SOL_NO_API_VERSION
#define SOL_SET_API_VERSION(...)
#else
#define SOL_SET_API_VERSION(...) __VA_ARGS__
#endif
