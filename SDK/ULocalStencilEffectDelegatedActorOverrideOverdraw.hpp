#pragma once
#include <cstdint>
#include "ELocalStencilBoundsMethod.hpp"
#include "FVector.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
#pragma pack(push, 1)
class ULocalStencilEffectDelegatedActorOverrideOverdraw : public ULocalStencilEffectDelegatedActorOverrideFiltered {
public:
    float MeshScaleFactor; // 0x38
    FVector MeshInflateBounds; // 0x3c
    ELocalStencilBoundsMethod BoundsMethod; // 0x48
    uint8_t bOverride_MeshScaleFactor : 1; // 0x49
    uint8_t bOverride_MeshInflateBounds : 1; // 0x49
    uint8_t bOverride_BoundsMethod : 1; // 0x49
    uint8_t pad_bitfield_49_3 : 5;
    char pad_4a[0x6];
    static ULocalStencilEffectDelegatedActorOverrideOverdraw* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
