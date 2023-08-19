#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FEnemy_ApparateData {
    float MinAngle; // 0x0
    float MaxAngle; // 0x4
    bool AngleIsABS; // 0x8
    char pad_9[0x3];
    float MinDist; // 0xc
    float Chance; // 0x10
    float SuccessCooldown; // 0x14
    float FailedCooldown; // 0x18
}; // Size: 0x1c
#pragma pack(pop)
