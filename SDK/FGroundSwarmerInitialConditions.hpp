#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FGroundSwarmerInitialConditions {
    float XYPositionMin; // 0x0
    float XYPositionMax; // 0x4
    float ZPositionMin; // 0x8
    float ZPositionMax; // 0xc
    float XYVelocityMin; // 0x10
    float XYVelocityMax; // 0x14
    float ZVelocityMin; // 0x18
    float ZVelocityMax; // 0x1c
    FVector StartingUp; // 0x20
    float RandomRotationMin; // 0x2c
    float RandomRotationMax; // 0x30
    float Scale; // 0x34
    float RandomizeScalePercent; // 0x38
}; // Size: 0x3c
#pragma pack(pop)
