#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FCharacterBoneProjectionState {
    FVector Direction; // 0x0
    FVector PerpAxis; // 0xc
    FVector InWorldPosition; // 0x18
    char pad_24[0xc];
    FQuat InWorldRotator; // 0x30
    FVector InWorldUp; // 0x40
    FName OnBone; // 0x4c
    FVector InBonePosition; // 0x54
    FQuat InBoneRotator; // 0x60
    float Age; // 0x70
    FVector Forward; // 0x74
    bool bForwardValid; // 0x80
    char pad_81[0x3];
    FVector MovementCohesionPoint; // 0x84
    bool bMovementCohesionPoint; // 0x90
    bool bProjectionDirty; // 0x91
    bool bProjectionValid; // 0x92
    bool bHidden; // 0x93
    bool bAutoShow; // 0x94
    bool bRenderedVisible; // 0x95
    bool bRenderTransformDirty; // 0x96
    char pad_97[0x9];
}; // Size: 0xa0
#pragma pack(pop)
