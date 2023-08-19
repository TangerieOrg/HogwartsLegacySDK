#pragma once
#include <cstdint>
#include "FLocalStencilEffectColor.hpp"
#include "FLocalStencilEffectScalar.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
#pragma pack(push, 1)
class ULocalStencilEffectDelegatedActorExtraParameters : public ULocalStencilEffectDelegatedActorOverrideFiltered {
public:
    TArray<FLocalStencilEffectScalar> ExtraScalars; // 0x38
    TArray<FLocalStencilEffectColor> ExtraColors; // 0x48
    uint8_t bSetExtraScalars : 1; // 0x58
    uint8_t bSetExtraColors : 1; // 0x58
    uint8_t pad_bitfield_58_2 : 6;
    char pad_59[0x7];
    static ULocalStencilEffectDelegatedActorExtraParameters* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
