#pragma once
#include <cstdint>
#include "FEnemyAIChosenAttackData.hpp"
#include "FEnemy_SpellOverrides.hpp"
#include "FEnemy_UnblockableData.hpp"
#include "FGameplayTagContainer.hpp"
#include "UActorComponent.hpp"
class UEnemyAIAttackData;
class UBehaviorTree;
struct FGameplayTag;
class UCurveFloat;
#pragma pack(push, 1)
class UEnemy_AttackComponent : public UActorComponent {
public:
    TArray<UEnemyAIAttackData*> AttackList; // 0xc8
    TArray<UEnemyAIAttackData*> CounterAttackList; // 0xd8
    TArray<UEnemyAIAttackData*> SplitAttackList; // 0xe8
    TArray<FEnemy_SpellOverrides> OverrideSpellList; // 0xf8
    UBehaviorTree* ChooseAttackBehaviorTree; // 0x108
    float DungeonDistanceScale; // 0x110
    float DungeonDistanceRangeScale; // 0x114
    float HistoryWeightScale; // 0x118
    float DistToRangeCurveWeightScale; // 0x11c
    float WeaponSeekDistToTargetCurveWeightScale; // 0x120
    char pad_124[0x4];
    UCurveFloat* HistoryRatioCurveWeight; // 0x128
    UCurveFloat* DistToRangeCurveWeight; // 0x130
    UCurveFloat* WeaponSeekDistToTargetCurveWeight; // 0x138
    FGameplayTagContainer ChooseAttackTags; // 0x140
    char pad_160[0x100];
    static UEnemy_AttackComponent* StaticClass();
    void RemoveSelectionTags(FGameplayTagContainer& InTags);
    void RemoveSelectionTag(FGameplayTag& InTag);
    bool IsAttackAllowed(UEnemyAIAttackData* AttackPtr);
    bool HasSelectionTag(FGameplayTag& InTag);
    bool HasChosenAttack();
    FEnemyAIChosenAttackData GetChosenAttackData();
    FEnemy_UnblockableData GetAttackUnblockableData(UEnemyAIAttackData* attackDataPtr);
    UEnemyAIAttackData* GetAttackData();
    void ClearSelectionTags();
    void AddSelectionTags(FGameplayTagContainer& InTags);
    void AddSelectionTag(FGameplayTag& InTag);
}; // Size: 0x260
#pragma pack(pop)
