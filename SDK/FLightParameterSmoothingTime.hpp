#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#pragma pack(push, 1)
struct FLightParameterSmoothingTime {
    float RealTime; // 0x0
    char pad_4[0x4];
    FDateTime TimeOfDay; // 0x8
    float NormalizedTime; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
