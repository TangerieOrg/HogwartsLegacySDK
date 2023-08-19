#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "FCurveIndexProperty.hpp"
#include "FCurveNameProperty.hpp"
#include "FIKDriver_GroundAdjustment_Control.hpp"
#include "FIKDriver_GroundAdjustment_ReachControl.hpp"
#include "FInt32Range.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "UIKDriver.hpp"
#pragma pack(push, 1)
class UIKDriver_GroundAdjustment : public UIKDriver {
public:
    TArray<FIKDriver_GroundAdjustment_Control> Controls; // 0x28
    ECollisionChannel TraceChannel; // 0x38
    char pad_39[0x3];
    float TranslationInterpSpeed; // 0x3c
    float RotationInterpSpeed; // 0x40
    float MaxTranslationAdjustmentSpeed; // 0x44
    bool bEnableRetargeting; // 0x48
    bool bEnableAnticipation; // 0x49
    char pad_4a[0x6];
    FRuntimeFloatCurve SwingAnticipationCurve; // 0x50
    FRuntimeFloatCurve AnticipationInterpSpeedFactor; // 0xd8
    FRuntimeFloatCurve RotationAmountInSwing; // 0x160
    TArray<FIKDriver_GroundAdjustment_ReachControl> ReachControls; // 0x1e8
    float MaxReachAdjustmentAngle; // 0x1f8
    float ReachAdjustToLowestOrHighest; // 0x1fc
    TArray<FInt32Range> TraceDelayRangePerLOD; // 0x200
    FCurveIndexProperty DisableCurve; // 0x210
    char pad_212[0x2];
    FCurveNameProperty DisableCurveName; // 0x214
    FCurveNameProperty RaiseReachControlsCurveName; // 0x220
    FCurveNameProperty StretchToMaxExtensionCurveName; // 0x22c
    float StrideWarpSpringHalflife; // 0x238
    float GroundNormalSpringHalflife; // 0x23c
    char pad_240[0x150];
    static UIKDriver_GroundAdjustment* StaticClass();
}; // Size: 0x390
#pragma pack(pop)
