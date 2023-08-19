#pragma once
#include <cstdint>
#include "FLerpVolumesInterpolantPCs.hpp"
#pragma pack(push, 1)
struct FLerpVolumesScalar : public FLerpVolumesInterpolantPCs {
    float Value; // 0x20
    float MinValue; // 0x24
    float MaxValue; // 0x28
    uint8_t bClampMinValue : 1; // 0x2c
    uint8_t bClampMaxValue : 1; // 0x2c
    uint8_t bNormalizeValue : 1; // 0x2c
    uint8_t pad_bitfield_2c_3 : 5;
    char pad_2d[0x3];
}; // Size: 0x30
#pragma pack(pop)
