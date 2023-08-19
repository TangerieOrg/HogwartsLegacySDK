#pragma once
#include <cstdint>
#include "FLocalStencilEffectActorOverride.hpp"
#include "FStencilManagerEffectName.hpp"
#pragma pack(push, 1)
struct FLocalStencilEffectActorOverrideList {
    FStencilManagerEffectName Effect; // 0x0
    TArray<FLocalStencilEffectActorOverride> ActorOverrides; // 0x8
}; // Size: 0x18
#pragma pack(pop)
