#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FCreatureMountSpawnLocationHandler {
    FVector MountBoxSize; // 0x0
    float FastMountBoxSizeX; // 0xc
    FVector2D MinMaxFloorOffset; // 0x10
    float RadiusBuffer; // 0x18
    float SweepStepSize; // 0x1c
    int32_t StepCountPerUpdate; // 0x20
    float StepInc; // 0x24
    float StepStart; // 0x28
    float StepEnd; // 0x2c
    bool bSpawnAtRiderZ; // 0x30
    bool bDrawDebug; // 0x31
    char pad_32[0x6e];
}; // Size: 0xa0
#pragma pack(pop)
