#pragma once
#include <cstdint>
#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
#pragma pack(push, 1)
class ULocalStencilEffectDelegatedActorOverrideRadiusAlpha : public ULocalStencilEffectDelegatedActorOverrideFiltered {
public:
    float OutlineRadius; // 0x38
    float OutlineColorAlpha; // 0x3c
    float OutlineColorAlphaPower; // 0x40
    float FinalIntensityMod; // 0x44
    uint8_t bSetOutlineRadius : 1; // 0x48
    uint8_t bSetOutlineAlpha : 1; // 0x48
    uint8_t bSetOutlineAlphaPower : 1; // 0x48
    uint8_t bSetFinalIntensityMod : 1; // 0x48
    uint8_t pad_bitfield_48_4 : 4;
    char pad_49[0x7];
    static ULocalStencilEffectDelegatedActorOverrideRadiusAlpha* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
