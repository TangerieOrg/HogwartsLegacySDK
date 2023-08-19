#pragma once
#include <cstdint>
#include "ECreatureTargetPredictionLookAheadOption.hpp"
#include "ECreatureTargetPredictionStraightLineReachableOption.hpp"
#include "FAIDataProviderFloatValue.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTService.hpp"
class UCreatureCombatAttackData;
#pragma pack(push, 1)
class UBTService_Creature_TargetPrediction : public UBTService {
public:
    FBlackboardKeySelector TargetActorKey; // 0x70
    FBlackboardKeySelector PredictedLocationKey; // 0x98
    float LookAheadTime; // 0xc0
    bool bUseParameterizedLookAheadTime; // 0xc4
    char pad_c5[0x3];
    FAIDataProviderFloatValue ParameterizedLookAheadTime; // 0xc8
    ECreatureTargetPredictionLookAheadOption LookAheadOption; // 0x100
    float TargetVelocityInterpSpeed; // 0x104
    bool bCommit; // 0x108
    char pad_109[0x3];
    float CommitTime; // 0x10c
    bool bUseParameterizedCommitTime; // 0x110
    char pad_111[0x7];
    FAIDataProviderFloatValue ParameterizedCommitTime; // 0x118
    bool bSetDesiredDirection; // 0x150
    bool bClampToDistanceRange; // 0x151
    bool bClampToHeadingRange; // 0x152
    bool bClampToStraightLineReachableOnNavmesh; // 0x153
    float MaxStraightLineReachableAngleOffset; // 0x154
    ECreatureTargetPredictionStraightLineReachableOption StraightLineReachableOption; // 0x158
    char pad_15c[0x4];
    UCreatureCombatAttackData* AttackData; // 0x160
    static UBTService_Creature_TargetPrediction* StaticClass();
}; // Size: 0x168
#pragma pack(pop)
