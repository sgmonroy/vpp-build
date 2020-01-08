/*
 * Copyright (c) 2018 Cisco and/or its affiliates.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef included_clib_config_h
#define included_clib_config_h

#ifndef CLIB_LOG2_CACHE_LINE_BYTES
#define CLIB_LOG2_CACHE_LINE_BYTES 6
#endif

#define USE_DLMALLOC 1

#define CLIB_TARGET_TRIPLET "x86_64-linux-gnu"
#endif
