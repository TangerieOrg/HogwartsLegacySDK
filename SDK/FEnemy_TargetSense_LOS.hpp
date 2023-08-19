#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FEnemy_TargetSense_LOS {
    float LOSInterval; // 0x0
    float LOSMinDist; // 0x4
    float LOSUnawareInterval; // 0x8
    float LOSAwareInterval; // 0xc
    float LOSAlertInterval; // 0x10
    float LOSAggroInterval; // 0x14
    float LOSTeammateInterval; // 0x18
}; // Size: 0x1c
#pragma pack(pop)
