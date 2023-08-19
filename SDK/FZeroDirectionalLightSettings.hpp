#pragma once
#include <cstdint>
#include "EZeroDirectionalLightMode.hpp"
#pragma pack(push, 1)
struct FZeroDirectionalLightSettings {
    EZeroDirectionalLightMode Mode; // 0x0
    char pad_1[0x3];
    float ClampToMinimum; // 0x4
}; // Size: 0x8
#pragma pack(pop)
