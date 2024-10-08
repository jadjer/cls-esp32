// Copyright 2024 Pavel Suprunov
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
// Created by jadjer on 9/25/24.
//

#pragma once

#include "NimBLECharacteristic.h"
#include "configuration/interface/Configuration.hpp"


class ConfigurationCharacteristicCallback : public NimBLECharacteristicCallbacks {
public:
  explicit ConfigurationCharacteristicCallback(ConfigurationPtr configuration);
  ~ConfigurationCharacteristicCallback() override = default;

public:
  void onRead(NimBLECharacteristic *pCharacteristic, NimBLEConnInfo &connInfo) override;
  void onWrite(NimBLECharacteristic *pCharacteristic, NimBLEConnInfo &connInfo) override;
  void onStatus(NimBLECharacteristic *pCharacteristic, int code) override;
  void onSubscribe(NimBLECharacteristic *pCharacteristic, NimBLEConnInfo &connInfo, uint16_t subValue) override;

private:
  ConfigurationPtr m_configuration = nullptr;
};
