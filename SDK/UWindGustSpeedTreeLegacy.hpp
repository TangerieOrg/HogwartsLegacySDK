#pragma once
#include <cstdint>
#include "UWindGustController.hpp"
#pragma pack(push, 1)
class UWindGustSpeedTreeLegacy : public UWindGustController {
public:
    float MinGustAmount; // 0x28
    float MaxGustAmount; // 0x2c
    static UWindGustSpeedTreeLegacy* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
