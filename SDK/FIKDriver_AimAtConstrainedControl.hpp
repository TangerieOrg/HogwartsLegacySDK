#pragma once
#include <cstdint>
#include "EAnimationDirections.hpp"
#include "FBoneReferenceEx.hpp"
#include "FCurveIndexProperty.hpp"
#include "FCurveNameProperty.hpp"
#include "FRotator.hpp"
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FIKDriver_AimAtConstrainedControl {
    EAnimationDirections DirectionDriver; // 0x0
    char pad_1[0x3];
    FBoneReferenceEx AimBoneReference; // 0x4
    FBoneReferenceEx NeckBoneReference; // 0x14
    FRotator RotationOffset; // 0x24
    FName AimAlphaVariableName; // 0x30
    FName AimTargetVariableName; // 0x38
    FName AimLoosenessVariableName; // 0x40
    FName SpineMobilityVariableName; // 0x48
    FName ApplyConstraintsVariableName; // 0x50
    bool bLimitDirectionToCone; // 0x58
    char pad_59[0x3];
    float YawLimit; // 0x5c
    float PitchLimit; // 0x60
    char pad_64[0x4];
    FRuntimeFloatCurve LimitFactorOverSpeed; // 0x68
    float YawFrequency; // 0xf0
    float YawDampingRatio; // 0xf4
    float PitchFrequency; // 0xf8
    float PitchDampingRatio; // 0xfc
    float BlendInDuration; // 0x100
    float BlendOutDuration; // 0x104
    float BackDeadZoneAngle; // 0x108
    FCurveIndexProperty DisableCurve; // 0x10c
    FCurveIndexProperty YawFrequencyCurve; // 0x10e
    FCurveIndexProperty PitchFrequencyCurve; // 0x110
    char pad_112[0x2];
    FCurveNameProperty DisableCurveName; // 0x114
    FCurveNameProperty YawFrequencyCurveName; // 0x120
    FCurveNameProperty PitchFrequencyCurveName; // 0x12c
    char pad_138[0x168];
}; // Size: 0x2a0
#pragma pack(pop)
