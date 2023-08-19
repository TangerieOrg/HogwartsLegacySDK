#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCustomBlendableGTAO {
    uint8_t bOverride_Enabled : 1; // 0x0
    uint8_t bOverride_UseNormals : 1; // 0x0
    uint8_t bOverride_FilterWidth : 1; // 0x0
    uint8_t bOverride_ThicknessBlend : 1; // 0x0
    uint8_t bOverride_FalloffEnd : 1; // 0x0
    uint8_t bOverride_FalloffStartRatio : 1; // 0x0
    uint8_t bOverride_NumAngles : 1; // 0x0
    uint8_t bOverride_PauseJitter : 1; // 0x0
    uint8_t bOverride_UpsampleDepthAware : 1; // 0x1
    uint8_t bOverride_Downsample : 1; // 0x1
    uint8_t bOverride_TemporalFilter : 1; // 0x1
    uint8_t bOverride_SpatialFilter : 1; // 0x1
    uint8_t bOverride_Combined : 1; // 0x1
    uint8_t pad_bitfield_1_5 : 3;
    bool bEnabled; // 0x2
    bool bUseNormals; // 0x3
    int32_t FilterWidth; // 0x4
    float ThicknessBlend; // 0x8
    float FalloffEnd; // 0xc
    float FalloffStartRatio; // 0x10
    int32_t NumAngles; // 0x14
    float PauseJitter; // 0x18
    bool bUpsampleDepthAware; // 0x1c
    bool bDownsample; // 0x1d
    bool bTemporalFilter; // 0x1e
    bool bSpatialFilter; // 0x1f
    bool bCombined; // 0x20
    char pad_21[0x3];
}; // Size: 0x24
#pragma pack(pop)
