#pragma once
#include <cstdint>
#include "EControlRigAnimEasingType.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_ChainHarmonics_Reach {
    bool bEnabled; // 0x0
    char pad_1[0x3];
    FVector ReachTarget; // 0x4
    FVector ReachAxis; // 0x10
    float ReachMinimum; // 0x1c
    float ReachMaximum; // 0x20
    EControlRigAnimEasingType ReachEase; // 0x24
    char pad_25[0x3];
}; // Size: 0x28
#pragma pack(pop)
