#pragma once
#include <cstdint>
#include "FLocalStencilEffectColorCurve.hpp"
#include "FLocalStencilEffectScalarCurve.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
#pragma pack(push, 1)
class ULocalStencilEffectDelegatedActorExtraCurveParameters : public ULocalStencilEffectDelegatedActorOverrideFiltered {
public:
    TArray<FLocalStencilEffectScalarCurve> ExtraScalarCurves; // 0x38
    TArray<FLocalStencilEffectColorCurve> ExtraColorCurves; // 0x48
    uint8_t bSetExtraScalarCurves : 1; // 0x58
    uint8_t bSetExtraColorCurves : 1; // 0x58
    uint8_t pad_bitfield_58_2 : 6;
    char pad_59[0x7];
    static ULocalStencilEffectDelegatedActorExtraCurveParameters* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
