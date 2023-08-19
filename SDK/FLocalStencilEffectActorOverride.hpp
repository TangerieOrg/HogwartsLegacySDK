#pragma once
#include <cstdint>
#include "FLocalStencilEffectActorOverrideParameters.hpp"
class UStencilManagerMatchActor;
#pragma pack(push, 1)
struct FLocalStencilEffectActorOverride : public FLocalStencilEffectActorOverrideParameters {
    UStencilManagerMatchActor* Expression; // 0x1c8
}; // Size: 0x1d0
#pragma pack(pop)
