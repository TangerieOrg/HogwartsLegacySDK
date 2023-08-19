#pragma once
#include <cstdint>
#include "FInputRange.hpp"
#pragma pack(push, 1)
struct FInputScaleBiasClamp {
    bool bMapRange; // 0x0
    bool bClampResult; // 0x1
    bool bInterpResult; // 0x2
    char pad_3[0x1];
    FInputRange InRange; // 0x4
    FInputRange OutRange; // 0xc
    float Scale; // 0x14
    float Bias; // 0x18
    float ClampMin; // 0x1c
    float ClampMax; // 0x20
    float InterpSpeedIncreasing; // 0x24
    float InterpSpeedDecreasing; // 0x28
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
