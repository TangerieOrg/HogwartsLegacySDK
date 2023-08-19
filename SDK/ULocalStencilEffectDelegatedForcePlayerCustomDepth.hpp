#pragma once
#include <cstdint>
#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
#pragma pack(push, 1)
class ULocalStencilEffectDelegatedForcePlayerCustomDepth : public ULocalStencilEffectDelegatedActorOverrideFiltered {
public:
    bool bForcePlayerCustomDepth; // 0x38
    char pad_39[0x7];
    static ULocalStencilEffectDelegatedForcePlayerCustomDepth* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
