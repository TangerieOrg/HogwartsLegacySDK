#pragma once
#include <cstdint>
#include "EVolumeCenterlineMode.hpp"
#pragma pack(push, 1)
struct FVolumeCenterlineSettings {
    EVolumeCenterlineMode Mode; // 0x0
    char pad_1[0x3];
    float CeilingFlatness; // 0x4
    float FloorFlatness; // 0x8
}; // Size: 0xc
#pragma pack(pop)
