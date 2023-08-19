#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCameraLensSettings {
    float MinFocalLength; // 0x0
    float MaxFocalLength; // 0x4
    float MinFstop; // 0x8
    float MaxFStop; // 0xc
    float MinimumFocusDistance; // 0x10
    int32_t DiaphragmBladeCount; // 0x14
}; // Size: 0x18
#pragma pack(pop)
