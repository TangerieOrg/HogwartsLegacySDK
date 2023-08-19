#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FEnemy_TargetSense_Remember {
    float MinTime; // 0x0
    float RememberMaxDistance; // 0x4
    float LOSTime; // 0x8
    float FOVAndHearingTime; // 0xc
}; // Size: 0x10
#pragma pack(pop)
