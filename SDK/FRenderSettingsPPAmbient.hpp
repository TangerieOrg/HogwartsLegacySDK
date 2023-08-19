#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FRenderSettingsPPAmbientOcclusionAdvanced.hpp"
class UTextureCube;
#pragma pack(push, 1)
struct FRenderSettingsPPAmbient {
    uint8_t bOverride_AmbientOcclusionIntensity : 1; // 0x0
    uint8_t bOverride_AmbientOcclusionRadius : 1; // 0x0
    uint8_t bOverride_AmbientCubemapTint : 1; // 0x0
    uint8_t bOverride_AmbientCubemapIntensity : 1; // 0x0
    uint8_t pad_bitfield_0_4 : 4;
    char pad_1[0x3];
    FName Name; // 0x4
    float AmbientOcclusionIntensity; // 0xc
    float AmbientOcclusionRadius; // 0x10
    FRenderSettingsPPAmbientOcclusionAdvanced AdvancedAO; // 0x14
    UTextureCube* AmbientCubemap; // 0x40
    FLinearColor AmbientCubemapTint; // 0x48
    float AmbientCubemapIntensity; // 0x58
    char pad_5c[0x4];
}; // Size: 0x60
#pragma pack(pop)
