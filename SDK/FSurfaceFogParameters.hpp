#pragma once
#include <cstdint>
#include "ESurfaceFogType.hpp"
#pragma pack(push, 1)
struct FSurfaceFogParameters {
    ESurfaceFogType Type; // 0x0
    char pad_1[0x3];
    float Intensity; // 0x4
}; // Size: 0x8
#pragma pack(pop)
