#pragma once
#include <cstdint>
#include "FRenderSettingsPPChromaticAberration.hpp"
#include "FRenderSettingsPPGrain.hpp"
#pragma pack(push, 1)
struct FRenderSettingsPPLensFX {
    uint8_t bOverride_VignetteIntensity : 1; // 0x0
    uint8_t pad_bitfield_0_1 : 7;
    char pad_1[0x3];
    FName Name; // 0x4
    float VignetteIntensity; // 0xc
    FRenderSettingsPPGrain Grain; // 0x10
    FRenderSettingsPPChromaticAberration ChromaticAberration; // 0x1c
}; // Size: 0x28
#pragma pack(pop)
