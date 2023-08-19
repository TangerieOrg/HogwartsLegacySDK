#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAmbulatory_MobilityMode {
    bool bApplyMovementSpeeds; // 0x0
    char pad_1[0x3];
    float MinimumMovementSpeed; // 0x4
    float MaximumMovementSpeed; // 0x8
    float SlowWalkTargetSpeed; // 0xc
    float WalkTargetSpeed; // 0x10
    float JogTargetSpeed; // 0x14
    float SprintTargetSpeed; // 0x18
    bool UseStrafe; // 0x1c
    char pad_1d[0x3];
}; // Size: 0x20
#pragma pack(pop)
