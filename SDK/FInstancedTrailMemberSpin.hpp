#pragma once
#include <cstdint>
#include "EInstancedTrailMemberRotationConstraint.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FInstancedTrailMemberSpin {
    float RotationsMin; // 0x0
    float RotationsMax; // 0x4
    EInstancedTrailMemberRotationConstraint RotationConstraint; // 0x8
    char pad_9[0x3];
    float Speed; // 0xc
    float Friction; // 0x10
    bool bFlipFlopSpeed; // 0x14
    char pad_15[0x3];
    FVector Axis; // 0x18
    float RandomizeAxisConeHalfAngle; // 0x24
    float MinDelay; // 0x28
    float MaxDelay; // 0x2c
    float ChanceOfNoRotations; // 0x30
}; // Size: 0x34
#pragma pack(pop)
