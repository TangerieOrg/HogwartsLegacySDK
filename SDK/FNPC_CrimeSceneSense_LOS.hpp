#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNPC_CrimeSceneSense_LOS {
    bool bLOS; // 0x0
    char pad_1[0x3];
    float LOSInterval; // 0x4
    float LOSMinDist; // 0x8
}; // Size: 0xc
#pragma pack(pop)
