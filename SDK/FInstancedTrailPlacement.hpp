#pragma once
#include <cstdint>
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FInstancedTrailPlacement {
    FRotator InitialRotation; // 0x0
    bool bInitialRotation; // 0xc
    char pad_d[0x3];
    float RandomRotationDegrees; // 0x10
    bool bRandomRotation; // 0x14
    char pad_15[0x3];
    float UpDown; // 0x18
    bool bUpDown; // 0x1c
    char pad_1d[0x3];
    float LeftRight; // 0x20
    bool bLeftRight; // 0x24
    char pad_25[0x3];
    float ForeAft; // 0x28
    bool bForeAft; // 0x2c
    char pad_2d[0x3];
    float DirRotation; // 0x30
    bool bDirRotation; // 0x34
    bool bOnGround; // 0x35
    char pad_36[0x2];
    float OnGroundTraceDepth; // 0x38
    float OnGroundZTweak; // 0x3c
    float OnGroundZTweakRandomizePercent; // 0x40
}; // Size: 0x44
#pragma pack(pop)
