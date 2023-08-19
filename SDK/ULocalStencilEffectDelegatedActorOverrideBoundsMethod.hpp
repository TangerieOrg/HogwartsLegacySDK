#pragma once
#include <cstdint>
#include "ELocalStencilBoundsMethod.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
#pragma pack(push, 1)
class ULocalStencilEffectDelegatedActorOverrideBoundsMethod : public ULocalStencilEffectDelegatedActorOverrideFiltered {
public:
    ELocalStencilBoundsMethod BoundsMethod; // 0x38
    char pad_39[0x7];
    static ULocalStencilEffectDelegatedActorOverrideBoundsMethod* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
