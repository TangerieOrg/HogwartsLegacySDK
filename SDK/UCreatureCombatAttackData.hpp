#pragma once
#include <cstdint>
#include "FCreatureCombatAttackParryData.hpp"
#include "FVector2D.hpp"
#include "UCreatureCombatData.hpp"
#pragma pack(push, 1)
class UCreatureCombatAttackData : public UCreatureCombatData {
public:
    FVector2D PatternDistanceRange; // 0x38
    FVector2D PatternHeadingRange; // 0x40
    FVector2D AttackDistanceRange; // 0x48
    FVector2D AttackHeadingRange; // 0x50
    FVector2D AttackReachDistanceRange; // 0x58
    FVector2D AttackReachHeadingRange; // 0x60
    float AttackCommitTime; // 0x68
    float AttackPatternWeight; // 0x6c
    bool bAttackRequiresStraightLineReachable; // 0x70
    char pad_71[0x3];
    float StraightLineReachableDistanceThreshold; // 0x74
    bool bUseAttackExecutionPathSpec; // 0x78
    char pad_79[0x3];
    FCreatureCombatAttackParryData ParryData; // 0x7c
    static UCreatureCombatAttackData* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
