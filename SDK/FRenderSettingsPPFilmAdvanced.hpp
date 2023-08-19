#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FRenderSettingsPPFilmAdvanced {
    uint8_t bOverride_FilmShadowTint : 1; // 0x0
    uint8_t bOverride_FilmShadowTintBlend : 1; // 0x0
    uint8_t bOverride_FilmShadowTintAmount : 1; // 0x0
    uint8_t bOverride_FilmChannelMixerRed : 1; // 0x0
    uint8_t bOverride_FilmChannelMixerGreen : 1; // 0x0
    uint8_t bOverride_FilmChannelMixerBlue : 1; // 0x0
    uint8_t bOverride_FilmToeAmount : 1; // 0x0
    uint8_t bOverride_FilmHealAmount : 1; // 0x0
    uint8_t bOverride_FilmDynamicRange : 1; // 0x1
    uint8_t pad_bitfield_1_1 : 7;
    char pad_2[0x2];
    FLinearColor FilmShadowTint; // 0x4
    float FilmShadowTintBlend; // 0x14
    float FilmShadowTintAmount; // 0x18
    FLinearColor FilmChannelMixerRed; // 0x1c
    FLinearColor FilmChannelMixerGreen; // 0x2c
    FLinearColor FilmChannelMixerBlue; // 0x3c
    float FilmToeAmount; // 0x4c
    float FilmHealAmount; // 0x50
    float FilmDynamicRange; // 0x54
}; // Size: 0x58
#pragma pack(pop)
