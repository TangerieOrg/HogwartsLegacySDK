#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EZeroDirectionalLightMode : uint8_t {
    AllowZeroIntensity = 0,
    TurnOffLight = 1,
    ClampToMinimum = 2,
    EZeroDirectionalLightMode_MAX = 3,
};
#pragma pack(pop)
