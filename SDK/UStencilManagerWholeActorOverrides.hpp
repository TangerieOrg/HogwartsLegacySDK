#pragma once
#include <cstdint>
#include "FStencilManagerEffectInfoActorOverrides.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UStencilManagerWholeActorOverrides : public UDataAsset {
public:
    TArray<FStencilManagerEffectInfoActorOverrides> WholeActorOverrides; // 0x30
    static UStencilManagerWholeActorOverrides* StaticClass();
    void Validate();
}; // Size: 0x40
#pragma pack(pop)
