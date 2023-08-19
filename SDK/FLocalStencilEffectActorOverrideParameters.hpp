#pragma once
#include <cstdint>
#include "ELocalStencilBoundsMethod.hpp"
#include "FLocalStencilEffectParams.hpp"
#include "FStencilPrimitiveClassFilter.hpp"
#include "FStencilPrimitiveFilter.hpp"
#include "FStencilPrimitiveTagRules.hpp"
#include "FStencilPrimitiveTypeRules.hpp"
#include "FVector.hpp"
class UClass;
class UMaterialInterface;
#pragma pack(push, 1)
struct FLocalStencilEffectActorOverrideParameters : public FLocalStencilEffectParams {
    UClass* OverrideClass; // 0xf0
    UMaterialInterface* OverrideMaterial; // 0xf8
    float FadeInTime; // 0x100
    float FadeOutTime; // 0x104
    float MeshScaleFactor; // 0x108
    FVector MeshInflateBounds; // 0x10c
    ELocalStencilBoundsMethod BoundsMethod; // 0x118
    char pad_119[0x3];
    FName AttachComponentTag; // 0x11c
    char pad_124[0x4];
    FStencilPrimitiveTagRules TagFilter; // 0x128
    FStencilPrimitiveTypeRules TypeFilter; // 0x178
    char pad_181[0x7];
    FStencilPrimitiveFilter PrimitiveFilter; // 0x188
    FStencilPrimitiveClassFilter PrimitiveClassFilter; // 0x1a0
    uint8_t bForcePlayerCustomDepth : 1; // 0x1c0
    uint8_t bOverride_FadeInTime : 1; // 0x1c0
    uint8_t bOverride_FadeOutTime : 1; // 0x1c0
    uint8_t bOverride_MeshScaleFactor : 1; // 0x1c0
    uint8_t bOverride_TagFilter : 1; // 0x1c0
    uint8_t bOverride_TypeFilter : 1; // 0x1c0
    uint8_t bOverride_PrimitiveFilter : 1; // 0x1c0
    uint8_t bOverride_PrimitiveClassFilter : 1; // 0x1c0
    uint8_t bOverride_MeshInflateBounds : 1; // 0x1c1
    uint8_t bOverride_BoundsMethod : 1; // 0x1c1
    uint8_t bOverride_AttachComponentTag : 1; // 0x1c1
    uint8_t bOverride_bForcePlayerCustomDepth : 1; // 0x1c1
    uint8_t pad_bitfield_1c1_4 : 4;
    char pad_1c2[0x6];
}; // Size: 0x1c8
#pragma pack(pop)
