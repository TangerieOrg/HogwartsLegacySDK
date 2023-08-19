#pragma once
#include <cstdint>
#include "ELocalStencilBoundsMethod.hpp"
#include "FLocalStencilEffectParams.hpp"
#include "FLocalStencilEffectRotatingStencilValue.hpp"
#include "FStencilRules.hpp"
#include "FVector.hpp"
class UClass;
class UMaterialInterface;
#pragma pack(push, 1)
struct FLocalStencilEffect {
    int32_t StencilValue; // 0x0
    FLocalStencilEffectRotatingStencilValue RotatingStencilValue; // 0x4
    char pad_c[0x4];
    FStencilRules StencilRules; // 0x10
    UClass* OverrideClass; // 0xa8
    UMaterialInterface* OverrideMaterial; // 0xb0
    float FadeInTime; // 0xb8
    float FadeOutTime; // 0xbc
    FLocalStencilEffectParams Params; // 0xc0
    float MeshScaleFactor; // 0x1b0
    FVector MeshInflateBounds; // 0x1b4
    ELocalStencilBoundsMethod BoundsMethod; // 0x1c0
    char pad_1c1[0x3];
    FName AttachComponentTag; // 0x1c4
    uint8_t bRenderCustomDepth : 1; // 0x1cc
    uint8_t bForcePlayerCustomDepth : 1; // 0x1cc
    uint8_t bUseRotatingStencilValue : 1; // 0x1cc
    uint8_t pad_bitfield_1cc_3 : 5;
    char pad_1cd[0x3];
}; // Size: 0x1d0
#pragma pack(pop)
