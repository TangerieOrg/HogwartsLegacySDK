#pragma once
#include <cstdint>
#include "ETurnAssistUseDirection\Type.hpp"
#include "FVector2D.hpp"
#include "UAblAbilityTask.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UablTurnAssistTask : public UAblAbilityTask {
public:
    ETurnAssistUseDirection::Type UseDirection; // 0x70
    bool bUseFixedDirection; // 0x71
    char pad_72[0x6];
    UCurveFloat* FixedDeltaTurnAssistCurve; // 0x78
    UCurveFloat* TurnAssistCurve; // 0x80
    UCurveFloat* TurnAssistTimeMultiplier; // 0x88
    bool bScaleRotationBasedOnSpeed; // 0x90
    char pad_91[0x3];
    float MinRotationScaleBasedOnSpeed; // 0x94
    FVector2D AllowedRangeFromFallLine; // 0x98
    UCurveFloat* StrafeTurnAssistCurve; // 0xa0
    UCurveFloat* StrafeTurnAssistTimeMultiplier; // 0xa8
    bool bIgnoreTargetTracker; // 0xb0
    char pad_b1[0x7];
    static UablTurnAssistTask* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
