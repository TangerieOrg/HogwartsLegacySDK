#pragma once
#include <cstdint>
#include "FLerpVolumesInterpolantPCs.hpp"
#pragma pack(push, 1)
struct FLerpVolumesInteger : public FLerpVolumesInterpolantPCs {
    int32_t Value; // 0x20
    int32_t MinValue; // 0x24
    int32_t MaxValue; // 0x28
    uint8_t bClampMinValue : 1; // 0x2c
    uint8_t bClampMaxValue : 1; // 0x2c
    uint8_t pad_bitfield_2c_2 : 6;
    char pad_2d[0x3];
}; // Size: 0x30
#pragma pack(pop)
