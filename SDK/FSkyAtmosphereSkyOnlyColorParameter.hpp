#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FSkyAtmosphereSkyOnlyColorParameter {
    FLinearColor Color; // 0x0
    float Intensity; // 0x10
    float Saturation; // 0x14
}; // Size: 0x18
#pragma pack(pop)
