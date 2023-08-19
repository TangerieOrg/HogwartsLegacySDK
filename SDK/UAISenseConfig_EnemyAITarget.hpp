#pragma once
#include <cstdint>
#include "EPerceptionPointEvaluateSource.hpp"
#include "FEnemy_TargetSense_DisillusionmentScale.hpp"
#include "FEnemy_TargetSense_FOV.hpp"
#include "FEnemy_TargetSense_LOS.hpp"
#include "FEnemy_TargetSense_Remember.hpp"
#include "FEnemy_TargetSense_TAS.hpp"
#include "UAISenseConfig_NPC.hpp"
class UClass;
class APerceptionPointArea;
class UEnemy_TargetSenseAsset;
#pragma pack(push, 1)
class UAISenseConfig_EnemyAITarget : public UAISenseConfig_NPC {
public:
    UClass* Implementation; // 0x60
    EPerceptionPointEvaluateSource EvaluateSource; // 0x68
    char pad_69[0x7];
    TArray<FString> ExcludeTagList; // 0x70
    TArray<APerceptionPointArea*> ForceTargetVolumeList; // 0x80
    TArray<APerceptionPointArea*> ForceTargetExcludeVolumeList; // 0x90
    bool bOverrideDistanceRequirement; // 0xa0
    char pad_a1[0x7];
    TArray<APerceptionPointArea*> PerceiveVolumeList; // 0xa8
    float PerceiveRadius; // 0xb8
    float LoseRadius; // 0xbc
    float HeightDifference; // 0xc0
    float EvaluateInterval; // 0xc4
    UEnemy_TargetSenseAsset* TargetSenseAsset; // 0xc8
    UEnemy_TargetSenseAsset* NPCTargetSenseAsset; // 0xd0
    UEnemy_TargetSenseAsset* NonCombatSenseAsset; // 0xd8
    FEnemy_TargetSense_LOS LOS; // 0xe0
    FEnemy_TargetSense_FOV FieldOfView; // 0xfc
    FEnemy_TargetSense_Remember Remember; // 0x2b8
    FEnemy_TargetSense_TAS TAS; // 0x2c8
    FEnemy_TargetSense_DisillusionmentScale DisillusionmentScale; // 0x2f0
    char pad_2f4[0x4];
    TArray<APerceptionPointArea*> TeamateShareVolumeList; // 0x2f8
    char pad_308[0x20];
    static UAISenseConfig_EnemyAITarget* StaticClass();
}; // Size: 0x328
#pragma pack(pop)
