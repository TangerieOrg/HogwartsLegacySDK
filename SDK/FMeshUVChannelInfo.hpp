#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMeshUVChannelInfo {
    bool bInitialized; // 0x0
    bool bOverrideDensities; // 0x1
    char pad_2[0x2];
    float LocalUVDensities[4]; // 0x4
}; // Size: 0x14
#pragma pack(pop)
