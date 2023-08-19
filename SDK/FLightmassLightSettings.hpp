#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLightmassLightSettings {
    float IndirectLightingSaturation; // 0x0
    float ShadowExponent; // 0x4
    bool bUseAreaShadowsForStationaryLight; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
