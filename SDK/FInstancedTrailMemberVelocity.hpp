#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FInstancedTrailMemberVelocity {
    float Inherit; // 0x0
    float Damping; // 0x4
    float RandomInheritConeHalfAngle; // 0x8
    FVector LocalVelocity; // 0xc
    bool bLocalVelocity; // 0x18
    char pad_19[0x3];
    float LocalVelocityConeHalfAngle; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
