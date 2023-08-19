#pragma once
#include <cstdint>
#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
class UClass;
class UMaterialInterface;
#pragma pack(push, 1)
class ULocalStencilEffectDelegatedActorOverrideClassAndMaterial : public ULocalStencilEffectDelegatedActorOverrideFiltered {
public:
    UClass* OverrideClass; // 0x38
    UMaterialInterface* OverrideMaterial; // 0x40
    static ULocalStencilEffectDelegatedActorOverrideClassAndMaterial* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
