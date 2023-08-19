#pragma once
#include <cstdint>
#include "FLocalStencilEffectActorOverride.hpp"
#include "FLocalStencilEffectActorOverrideList.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class ULocalStencilEffectActorOverrides : public UDataAsset {
public:
    TArray<FLocalStencilEffectActorOverride> GeneralActorOverrides; // 0x30
    TArray<FLocalStencilEffectActorOverrideList> EffectOverrides; // 0x40
    static ULocalStencilEffectActorOverrides* StaticClass();
    void Validate();
}; // Size: 0x50
#pragma pack(pop)
