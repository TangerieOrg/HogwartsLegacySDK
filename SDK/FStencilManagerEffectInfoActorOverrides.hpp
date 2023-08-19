#pragma once
#include <cstdint>
#include "FStencilManagerEffectInfoOverride.hpp"
class UStencilManagerMatchActor;
#pragma pack(push, 1)
struct FStencilManagerEffectInfoActorOverrides {
    UStencilManagerMatchActor* Expression; // 0x0
    TArray<FStencilManagerEffectInfoOverride> EffectOverrides; // 0x8
}; // Size: 0x18
#pragma pack(pop)
