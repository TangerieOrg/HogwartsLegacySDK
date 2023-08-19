#pragma once
#include <cstdint>
#include "FLocalStencilEffectColor.hpp"
#include "FLocalStencilEffectColorCurve.hpp"
#include "FLocalStencilEffectScalar.hpp"
#include "FLocalStencilEffectScalarCurve.hpp"
#pragma pack(push, 1)
struct FLocalStencilEffectParams {
    FName StencilValueParameter; // 0x0
    FName FadeAlphaParameter; // 0x8
    FLocalStencilEffectScalar OutlineRadius; // 0x10
    FLocalStencilEffectColor OutlineColor; // 0x1c
    FLocalStencilEffectScalar OutlineColorAlpha; // 0x34
    FLocalStencilEffectScalar OutlineColorAlphaPower; // 0x40
    FLocalStencilEffectColor FillColor; // 0x4c
    FLocalStencilEffectScalar FillColorAlpha; // 0x64
    FLocalStencilEffectScalar FinalIntensityMod; // 0x70
    FLocalStencilEffectScalar ObjectBottomFadeStart; // 0x7c
    FLocalStencilEffectScalar ObjectBottomFadeFull; // 0x88
    FLocalStencilEffectScalar ObjectBottomFadePower; // 0x94
    FName ObjectMinMaxHeightParameter; // 0xa0
    TArray<FLocalStencilEffectScalar> ExtraScalars; // 0xa8
    TArray<FLocalStencilEffectColor> ExtraColors; // 0xb8
    TArray<FLocalStencilEffectScalarCurve> ExtraScalarCurves; // 0xc8
    TArray<FLocalStencilEffectColorCurve> ExtraColorCurves; // 0xd8
    uint8_t bSetStencilValue : 1; // 0xe8
    uint8_t bSetFadeAlphaParameter : 1; // 0xe8
    uint8_t bSetOutlineRadius : 1; // 0xe8
    uint8_t bSetOutlineColor : 1; // 0xe8
    uint8_t bSetOutlineAlpha : 1; // 0xe8
    uint8_t bSetOutlineAlphaPower : 1; // 0xe8
    uint8_t bSetFillColor : 1; // 0xe8
    uint8_t bSetFillAlpha : 1; // 0xe8
    uint8_t bSetFinalIntensityMod : 1; // 0xe9
    uint8_t bSetObjectBottomFadeStart : 1; // 0xe9
    uint8_t bSetObjectBottomFadeFull : 1; // 0xe9
    uint8_t bSetExtraScalars : 1; // 0xe9
    uint8_t bSetExtraColors : 1; // 0xe9
    uint8_t bSetExtraScalarCurves : 1; // 0xe9
    uint8_t bSetExtraColorCurves : 1; // 0xe9
    uint8_t bSetObjectBottomFadePower : 1; // 0xe9
    uint8_t bSetObjectMinMaxHeightParameter : 1; // 0xea
    uint8_t pad_bitfield_ea_1 : 7;
    char pad_eb[0x5];
}; // Size: 0xf0
#pragma pack(pop)
