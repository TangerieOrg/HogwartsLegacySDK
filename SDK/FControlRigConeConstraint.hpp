#pragma once
#include <cstdint>
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FControlRigConeConstraint {
    float YawLimit; // 0x0
    float PitchLimit; // 0x4
    float RollLimit; // 0x8
    FRotator ConeRotation; // 0xc
}; // Size: 0x18
#pragma pack(pop)
