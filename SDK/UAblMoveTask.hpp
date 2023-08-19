#pragma once
#include <cstdint>
#include "EAblMoveTaskBallisticDestinationSource.hpp"
#include "EAblMoveTaskVelocitySource.hpp"
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblMoveTask : public UAblAbilityTask {
public:
    EAblMoveTaskVelocitySource VelocitySource; // 0x70
    char pad_71[0x3];
    FVector CustomVelocity; // 0x74
    EAblMoveTaskBallisticDestinationSource DestSource; // 0x80
    bool bApplyGravity; // 0x81
    char pad_82[0x2];
    float OverrideGravity; // 0x84
    float ArcParamMin; // 0x88
    float ArcParamMax; // 0x8c
    float TimeMult; // 0x90
    FVector TargetOffset; // 0x94
    float Distance; // 0xa0
    float MaxDistance; // 0xa4
    bool bIgnoreNonStatic; // 0xa8
    bool bCollateralDamage; // 0xa9
    char pad_aa[0x6];
    static UAblMoveTask* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
