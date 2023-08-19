#pragma once
#include <cstdint>
#include "FStencilManagerEffectName.hpp"
#include "ULocalStencilEffectDelegatedActorOverride.hpp"
#pragma pack(push, 1)
class ULocalStencilEffectDelegatedActorOverrideFiltered : public ULocalStencilEffectDelegatedActorOverride {
public:
    FStencilManagerEffectName Effect; // 0x28
    bool bFilterByEffectName; // 0x30
    char pad_31[0x7];
    static ULocalStencilEffectDelegatedActorOverrideFiltered* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
