#pragma once
#include <cstdint>
#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
class ULocalStencilEffectDelegatedActorOverrideBottomFade : public ULocalStencilEffectDelegatedActorOverrideFiltered {
public:
    UMaterialInterface* OverrideMaterial; // 0x38
    float ObjectBottomFadeStart; // 0x40
    float ObjectBottomFadeFull; // 0x44
    float ObjectBottomFadePower; // 0x48
    uint8_t bSetObjectBottomFadeStart : 1; // 0x4c
    uint8_t bSetObjectBottomFadeFull : 1; // 0x4c
    uint8_t bSetObjectBottomFadePower : 1; // 0x4c
    uint8_t pad_bitfield_4c_3 : 5;
    char pad_4d[0x3];
    static ULocalStencilEffectDelegatedActorOverrideBottomFade* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
