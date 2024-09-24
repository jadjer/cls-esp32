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

#include <cstdint>

namespace interface {

class Configuration {
public:
  virtual ~Configuration() = default;

public:
  [[nodiscard]] virtual uint8_t getExternalPowerPin() const = 0;
  [[nodiscard]] virtual uint8_t getPumpPin() const = 0;
  [[nodiscard]] virtual uint8_t getWheelSensorPin() const = 0;

  [[nodiscard]] virtual uint64_t getPumpTimout() const = 0;
  [[nodiscard]] virtual uint64_t getWheelLength() const = 0;

  [[nodiscard]] virtual float getMinimalSpeed() const = 0;
  [[nodiscard]] virtual float getDistanceForEnable() const = 0;
  [[nodiscard]] virtual float getTotalDistance() const = 0;
  [[nodiscard]] virtual float getNextDistance() const = 0;

public:
  virtual void saveTotalDistance(float distance) = 0;
  virtual void saveNextDistance(float distance) = 0;
};

}// namespace interface

#include <memory>

using ConfigurationPtr = std::shared_ptr<interface::Configuration>;
