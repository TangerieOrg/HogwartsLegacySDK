#pragma once
#include <cstdint>
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FRigUnit_NeckLookAt_ConeConstraint {
    float YawLimit; // 0x0
    float PitchLimit; // 0x4
    float RollLimit; // 0x8
    FRotator ConeRotation; // 0xc
    char pad_18[0x18];
}; // Size: 0x30
#pragma pack(pop)
