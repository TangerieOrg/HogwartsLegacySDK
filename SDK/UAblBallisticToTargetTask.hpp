#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblBallisticToTargetTask : public UAblAbilityTask {
public:
    float Speed; // 0x70
    float OverrideGravity; // 0x74
    float ArcParam; // 0x78
    float TimeMult; // 0x7c
    FVector TargetOffset; // 0x80
    float MaxDistance; // 0x8c
    bool bBounce; // 0x90
    bool bIgnoreNonStatic; // 0x91
    bool bCollateralDamage; // 0x92
    char pad_93[0x1];
    float fRandomAngleDeviationMin; // 0x94
    float fRandomAngleDeviationMax; // 0x98
    float fRandomDistanceDeviationMin; // 0x9c
    float fRandomDistanceDeviationMax; // 0xa0
    char pad_a4[0x4];
    static UAblBallisticToTargetTask* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
