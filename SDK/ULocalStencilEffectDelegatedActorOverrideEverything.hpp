#pragma once
#include <cstdint>
#include "FLocalStencilEffectActorOverrideParameters.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
#pragma pack(push, 1)
class ULocalStencilEffectDelegatedActorOverrideEverything : public ULocalStencilEffectDelegatedActorOverrideFiltered {
public:
    FLocalStencilEffectActorOverrideParameters Parameters; // 0x38
    static ULocalStencilEffectDelegatedActorOverrideEverything* StaticClass();
}; // Size: 0x200
#pragma pack(pop)
