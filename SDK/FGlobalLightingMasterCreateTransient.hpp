#pragma once
#include <cstdint>
class UGlobalLightingDefaults;
#pragma pack(push, 1)
struct FGlobalLightingMasterCreateTransient {
    UGlobalLightingDefaults* DefaultsOverride; // 0x0
    int32_t UseExternalLightingComponents; // 0x8
    int32_t ControlLightingComponents; // 0xc
    int32_t HideExtraLightingComponents; // 0x10
    int32_t ControlFeatures; // 0x14
    bool bWantClouds; // 0x18
    char pad_19[0x3];
    float CloudsRelativeHeightMeters; // 0x1c
    bool bSetCloudsRelativeHeightMeters; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
