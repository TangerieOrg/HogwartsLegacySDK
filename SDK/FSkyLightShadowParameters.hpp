#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSkyLightShadowParameters {
    bool bCastShadows; // 0x0
    bool bCastStaticShadow; // 0x1
    bool bCastDynamicShadow; // 0x2
    bool bCastVolumetricShadow; // 0x3
    bool bCastRaytracedShadow; // 0x4
}; // Size: 0x5
#pragma pack(pop)
