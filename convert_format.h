/*
 * Copyright (C) 2013 Andreas Harter - RazDroid project
 *
 * Copyright (C) 2008 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _CONVERT_FORMAT_H
#define _CONVERT_FORMAT_H

#include <stdint.h>

int32_t android_to_videocore(int32_t android_pixelformat);
int32_t videocore_to_android(int32_t videocore_format);

#endif
