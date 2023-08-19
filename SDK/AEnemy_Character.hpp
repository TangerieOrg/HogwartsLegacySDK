#pragma once
#include <cstdint>
#include "ANPC_Character.hpp"
#include "FBossFightData.hpp"
#include "FGameplayTag.hpp"
#include "FHealthThreshold.hpp"
#include "FVector.hpp"
class UEnemy_AttackComponent;
class UToolSetComponent;
class UEnemy_WeaponComponent;
class UCognitionStimuliSourceComponent;
class UEnemyAIComponent;
class UEnemyStateComponent;
class UStaticMesh;
class UBTCustomComponent;
class UObjectArchitectAsset;
class ADynamicObjectVolume;
class ACombatVolume;
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class AEnemy_Character : public ANPC_Character {
public:
    char pad_2180[0x18];
    bool bRegisterPerceptionAfterSpawn; // 0x2198
    char pad_2199[0x3];
    int32_t Level; // 0x219c
    float FinisherHealthPercentage; // 0x21a0
    int32_t PlayerStupifyHits; // 0x21a4
    UToolSetComponent* ToolSetComponent; // 0x21a8
    UCognitionStimuliSourceComponent* CognitionStimuliSourceComponent; // 0x21b0
    UEnemyAIComponent* EnemyAIComponent; // 0x21b8
    UEnemyStateComponent* EnemyStateComponent; // 0x21c0
    UBTCustomComponent* BehaviorCompAttackUpdate; // 0x21c8
    UEnemy_AttackComponent* AttackComponent; // 0x21d0
    UEnemy_WeaponComponent* WeaponComponent; // 0x21d8
    TArray<UStaticMesh*> SuperSlamMeshes; // 0x21e0
    char pad_21f0[0x10];
    UObjectArchitectAsset* VfxObjectArchitectAsset; // 0x2200
    FGameplayTag ObjectArchitectEnemyClassTag; // 0x2208
    FGameplayTag ObjectArchitectEnemyFactionTag; // 0x2210
    char pad_2218[0x68];
    ADynamicObjectVolume* SpawningDOV; // 0x2280
    TArray<ACombatVolume*> OccupiedCombatVolumes; // 0x2288
    char pad_2298[0x58];
    static AEnemy_Character* StaticClass();
    void UpdateBossStateEvent(FBossFightData InBossFightData);
    static void UnhideAndEnableEnemyCharacter(AActor* EnemyCharacter);
    void Throw(AActor* Target, AActor* SourceActor);
    bool StartFire(float Amount, FVector Location);
    void SetAsLeader(bool bSet);
    void SetAsGroupAggressor(bool bSet, FName InNewTeamName);
    void SetAsFightClubOpponent(bool bSet, FName InNewTeamName, FName InAudioSubtypeID);
    void SetAsDuelOpponent(bool bSet, FName InAudioSubtypeID);
    void SetAsCompanion(bool bSet);
    void SetAsAggressor(bool bSet, FName InNewTeamName);
    void OnTakeAKneeTimedOut();
    void OnFireExtinguished();
    void OnCompletelyCharred();
    void MunitionCreated();
    void Landed(FHitResult& Hit);
    bool IsLeader();
    bool IsDuelOpponent();
    bool IsCompanion();
    bool IsCombatOpponent();
    bool IsAggressor();
    static void HideAndDisableEnemyCharacter(AActor* EnemyCharacter);
    void HandleNearDeathKneelStart(AActor* ActorKneeling);
    void HandleNearDeathKneelEnd();
    void HandleMeleeHit(AActor* Victim, FVector& NormalImpulse, FHitResult& Hit);
    void HandleHealthThresholdReached(FHealthThreshold InHealthThreshold, int32_t InLevel, int32_t InMaxLevel);
    void ExitSpline();
    bool ChangeTeamWithCombat(FName TeamName, bool bEnableCombat);
    void AttackWindowStop();
    void AttackWindowStart();
}; // Size: 0x22f0
#pragma pack(pop)
