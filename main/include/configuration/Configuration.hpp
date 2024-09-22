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
// Created by jadjer on 9/20/24.
//

#pragma once

#include "configuration/IConfiguration.hpp"

class Configuration : public IConfiguration {
public:
  ~Configuration() override = default;

public:
  [[nodiscard]] uint8_t getExternalPowerPin() const override;
  [[nodiscard]] uint8_t getPumpPin() const override;
  [[nodiscard]] uint8_t getWheelSensorPin() const override;

public:
  [[nodiscard]] uint64_t getTimeForEnable() const override;
  [[nodiscard]] uint64_t getDistanceForEnable() const override;

public:
  uint64_t getDelayAfterBoot() const override;
  [[nodiscard]] uint64_t getPumpTimout() const override;

public:
  [[nodiscard]] uint64_t getWheelLength() const override;
};
