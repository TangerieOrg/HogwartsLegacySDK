#pragma once
#include <cstdint>
#include "FBox2D.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FVector2D.hpp"
#include "UCameraStackBehaviorBlend.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UCameraStackBehaviorLookAtBase : public UCameraStackBehaviorBlend {
public:
    FBox2D ScreenArea; // 0x1b8
    float RotationSpeed; // 0x1cc
    UCurveFloat* AngleToRotationSpeed; // 0x1d0
    bool bAffectYaw; // 0x1d8
    bool bAffectPitch; // 0x1d9
    char pad_1da[0x2];
    FVector2D PitchLimits; // 0x1dc
    char pad_1e4[0x4];
    FRuntimeFloatCurve DistanceToWeightCurve; // 0x1e8
    bool bDisableOnInput; // 0x270
    bool bUseUnblendedStackValues; // 0x271
    char pad_272[0x1e];
    static UCameraStackBehaviorLookAtBase* StaticClass();
}; // Size: 0x290
#pragma pack(pop)
