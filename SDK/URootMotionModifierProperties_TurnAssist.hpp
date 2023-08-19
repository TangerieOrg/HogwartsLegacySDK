#pragma once
#include <cstdint>
#include "ECustomInterpType\Type.hpp"
#include "ERootMotionModTurnAssistMethod\Type.hpp"
#include "ERootMotionModTurnAssistUseDirection\Type.hpp"
#include "FVector2D.hpp"
#include "URootMotionModifierProperties.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class URootMotionModifierProperties_TurnAssist : public URootMotionModifierProperties {
public:
    ERootMotionModTurnAssistUseDirection::Type UseDirection; // 0x30
    ERootMotionModTurnAssistMethod::Type UseMethod; // 0x31
    ECustomInterpType::Type RotationInterpType; // 0x32
    char pad_33[0x1];
    float RegularSpeedRotationInterpSpeed; // 0x34
    bool bScaleRotationBasedOnSpeed; // 0x38
    char pad_39[0x3];
    float LowSpeedRotationInterpSpeed; // 0x3c
    FVector2D SpeedRange; // 0x40
    float SpringHalflife; // 0x48
    float SpringLowSpeedHalflifeMultiplier; // 0x4c
    bool bAdjustTranslationBasedOnTurn; // 0x50
    char pad_51[0x3];
    FVector2D TranslationAdjustAngleRange; // 0x54
    float TranslationAdjustMinMultiplier; // 0x5c
    bool bUseFixedDirection; // 0x60
    char pad_61[0x7];
    UCurveFloat* TurnAssistCurve; // 0x68
    UCurveFloat* TurnAssistTimeMultiplier; // 0x70
    float MinRotationScaleBasedOnSpeed; // 0x78
    FVector2D AllowedRangeFromFallLine; // 0x7c
    bool bIgnoreTargetTracker; // 0x84
    bool bAllowDesiredDirectionUpdates; // 0x85
    char pad_86[0x2];
    float DesiredDirectionUpdateDuration; // 0x88
    bool bDebug; // 0x8c
    ECustomInterpType::Type SplineRotationInterpType; // 0x8d
    char pad_8e[0x2];
    float SplineRotationInterpSpeed; // 0x90
    char pad_94[0x4];
    static URootMotionModifierProperties_TurnAssist* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
