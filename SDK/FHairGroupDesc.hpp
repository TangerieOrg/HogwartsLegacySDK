#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FHairGroupDesc {
    float HairLength; // 0x0
    float HairWidth; // 0x4
    bool HairWidth_Override; // 0x8
    char pad_9[0x3];
    float HairRootScale; // 0xc
    bool HairRootScale_Override; // 0x10
    char pad_11[0x3];
    float HairTipScale; // 0x14
    bool HairTipScale_Override; // 0x18
    char pad_19[0x3];
    float HairClipScale; // 0x1c
    bool HairClipScale_Override; // 0x20
    char pad_21[0x3];
    float HairShadowDensity; // 0x24
    bool HairShadowDensity_Override; // 0x28
    char pad_29[0x3];
    float HairRaytracingRadiusScale; // 0x2c
    bool HairRaytracingRadiusScale_Override; // 0x30
    bool bUseHairRaytracingGeometry; // 0x31
    bool bUseHairRaytracingGeometry_Override; // 0x32
    char pad_33[0x1];
    float LODBias; // 0x34
    bool bUseStableRasterization; // 0x38
    bool bUseStableRasterization_Override; // 0x39
    bool bScatterSceneLighting; // 0x3a
    bool bScatterSceneLighting_Override; // 0x3b
    bool bSupportVoxelization; // 0x3c
    bool bSupportVoxelization_Override; // 0x3d
    char pad_3e[0x2];
    int32_t LODForcedIndex; // 0x40
}; // Size: 0x44
#pragma pack(pop)
