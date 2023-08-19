#pragma once
#include <cstdint>
#include "FLocalStencilEffectParams.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
class ULocalStencilEffectDelegatedActorOverrideParameters : public ULocalStencilEffectDelegatedActorOverrideFiltered {
public:
    UMaterialInterface* OverrideMaterial; // 0x38
    FLocalStencilEffectParams Parameters; // 0x40
    static ULocalStencilEffectDelegatedActorOverrideParameters* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
