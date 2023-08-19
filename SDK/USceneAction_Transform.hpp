#pragma once
#include <cstdint>
#include "ESceneAction_ClothingTeleportMode.hpp"
#include "FAnimationRequestLayerReference.hpp"
#include "FRuntimeCurveVector.hpp"
#include "FTransform.hpp"
#include "USceneAction_AnimateCurves.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_Transform : public USceneAction_AnimateCurves {
public:
    FAnimationRequestLayerReference Layer; // 0xa0
    UTransformProvider* ParentTransform; // 0xa8
    bool bConstant; // 0xb0
    char pad_b1[0x7];
    FRuntimeCurveVector TranslateCurve; // 0xb8
    FRuntimeCurveVector RotateCurve; // 0x240
    FRuntimeCurveVector ScaleCurve; // 0x3c8
    FTransform DefaultValue; // 0x550
    bool bHoldTransform; // 0x580
    bool bApplyCharacterFixup; // 0x581
    bool bForceTransform; // 0x582
    bool bParentTransformIsStatic; // 0x583
    ESceneAction_ClothingTeleportMode ClothTeleportMode; // 0x584
    char pad_585[0xb];
    static USceneAction_Transform* StaticClass();
}; // Size: 0x590
#pragma pack(pop)
