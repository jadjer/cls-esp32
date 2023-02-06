// Copyright 2023 Pavel Suprunov
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

//
// Created by jadjer on 03.02.23.
//

#include <esp_err.h>

#include "pump.h"
#include "config.h"
#include "external_power.h"
#include "controller.h"

void app_main(void) {
    ESP_ERROR_CHECK(config_init());
    ESP_ERROR_CHECK(external_power_init());
    ESP_ERROR_CHECK(pump_init());
    ESP_ERROR_CHECK(controller_init());
}
