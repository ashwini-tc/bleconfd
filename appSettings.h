//
// Copyright [2018] [jacobgladish@yahoo.com]
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#ifndef __APP_SETTINGS_H__
#define __APP_SETTINGS_H__

#include <cJSON.h>

enum appSettings_Kind
{
  appSettingsKind_Boolean = 1,
  appSettingsKind_Int32   = 2,
  appSettingsKind_Int64   = 3,
  appSettingsKind_UInt64  = 4,
  appSettingsKind_Double  = 5
};

int appSettings_init(char const* settings_file);
int appSettings_set(cJSON const* req, cJSON** res);
int appSettings_get(cJSON const* req, cJSON** res);

/**
 * get ble values
 * @param key  the key
 * @return  the value
 */
char const* appSettings_get_ble_value(char const* key);

/**
 * get wifi values
 * @param key  the key
 * @return  the value
 */
char const* appSettings_get_wifi_value(char const* key);

#endif
