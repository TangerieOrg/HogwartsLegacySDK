#pragma once
#include <cstdint>
#include "FIKTaskReferenceProperty.hpp"
#pragma pack(push, 1)
struct FIKDriver_LadderContactControl {
    FIKTaskReferenceProperty Task; // 0x0
    bool Enable; // 0x4
    bool DebugDraw; // 0x5
    char pad_6[0x2];
    float OffsetZ; // 0x8
    float HandOffset; // 0xc
    float LadderUpPlaneOffset; // 0x10
    float LadderDownPlaneOffset; // 0x14
    float LockVelocityThreshold; // 0x18
    float UnlockVelocityThreshold; // 0x1c
    float UnlockMoveThreshold; // 0x20
    float JumpToNextRungThreshold; // 0x24
    float UnlockPastTopExtentThreshold; // 0x28
    float LockBlendTime; // 0x2c
    float UnlockBlendTime; // 0x30
    float InitDelay; // 0x34
    char pad_38[0x28];
}; // Size: 0x60
#pragma pack(pop)
