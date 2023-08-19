#pragma once
#include <cstdint>
#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
#pragma pack(push, 1)
class ULocalStencilEffectDelegatedActorOverrideFade : public ULocalStencilEffectDelegatedActorOverrideFiltered {
public:
    float FadeInTime; // 0x38
    float FadeOutTime; // 0x3c
    uint8_t bOverride_FadeInTime : 1; // 0x40
    uint8_t bOverride_FadeOutTime : 1; // 0x40
    uint8_t pad_bitfield_40_2 : 6;
    char pad_41[0x7];
    static ULocalStencilEffectDelegatedActorOverrideFade* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
