#pragma once
#include <cstdint>
#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
#pragma pack(push, 1)
class ULocalStencilEffectDelegatedActorOverrideRadius : public ULocalStencilEffectDelegatedActorOverrideFiltered {
public:
    float OutlineRadius; // 0x38
    char pad_3c[0x4];
    static ULocalStencilEffectDelegatedActorOverrideRadius* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
