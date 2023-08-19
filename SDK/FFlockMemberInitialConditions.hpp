#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FFlockMemberInitialConditions {
    float PositionMin; // 0x0
    float PositionMax; // 0x4
    float SpeedMin; // 0x8
    float SpeedMax; // 0xc
    FVector StartingUp; // 0x10
    float RandomRotationMin; // 0x1c
    float RandomRotationMax; // 0x20
    float Scale; // 0x24
    float RandomizeScalePercent; // 0x28
}; // Size: 0x2c
#pragma pack(pop)
