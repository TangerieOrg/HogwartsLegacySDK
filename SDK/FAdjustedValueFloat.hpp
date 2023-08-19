#pragma once
#include <cstdint>
#include "EAdjustedValueMode.hpp"
#pragma pack(push, 1)
struct FAdjustedValueFloat {
    EAdjustedValueMode Mode; // 0x0
    char pad_1[0x3];
    float Value; // 0x4
    float ClampMin; // 0x8
    bool bClampMin; // 0xc
    char pad_d[0x3];
    float ClampMax; // 0x10
    bool bClampMax; // 0x14
    char pad_15[0x3];
    float ValidateMin; // 0x18
    float ValidateMax; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
