#pragma once
#include <cstdint>
#include "FGameplayProperty_Float.hpp"
#include "FGameplayProperty_Int.hpp"
#include "FHealthThreshold.hpp"
#include "UObjectStateInfo.hpp"
class AActor;
class UClass;
#pragma pack(push, 1)
class UCharacterStateInfo : public UObjectStateInfo {
public:
    char pad_1e0[0x70];
    AActor* BlockingActor; // 0x250
    char pad_258[0x30];
    FGameplayProperty_Float OutgoingDamageModifier; // 0x288
    FGameplayProperty_Float DamageFocusModifier; // 0x318
    FGameplayProperty_Float IncomingDamageModifier; // 0x3a8
    FGameplayProperty_Float OwnedPlantOutgoingDamageModifier; // 0x438
    FGameplayProperty_Float OwnedPlantIncomingDamageModifier; // 0x4c8
    FGameplayProperty_Float ImperiusControlledOutgoingDamageModifier; // 0x558
    FGameplayProperty_Float OppugnoOutgoingDamageModifier; // 0x5e8
    FGameplayProperty_Float LifeLeech; // 0x678
    FGameplayProperty_Float LifeLeechToCompanion; // 0x708
    FGameplayProperty_Float LifeLeechToPlants; // 0x798
    FGameplayProperty_Float BreakBlockChance; // 0x828
    FGameplayProperty_Float CriticalHitChance; // 0x8b8
    FGameplayProperty_Float SocapAmendModifier; // 0x948
    FGameplayProperty_Float SocapDecayModifier; // 0x9d8
    FGameplayProperty_Float SpellCooldownAmendModifier; // 0xa68
    FGameplayProperty_Float SpellCooldownReduction; // 0xaf8
    FGameplayProperty_Float SpellCooldownAdditiveMod; // 0xb88
    FGameplayProperty_Float EnemySpellCooldownModifier; // 0xc18
    FGameplayProperty_Float ItemEffectivenessModifier; // 0xca8
    FGameplayProperty_Float DoubleEffectivenessChance; // 0xd38
    FGameplayProperty_Float MaxHealth; // 0xdc8
    FGameplayProperty_Float ThrownProjectileDistanceModifier; // 0xe58
    FGameplayProperty_Int MaxActivePotionAbilities; // 0xee8
    char pad_f68[0x28];
    static UCharacterStateInfo* StaticClass();
    static bool WereSameTeam(AActor* ActorPtr1, AActor* ActorPtr2);
    static bool WereAllies(AActor* ActorPtr1, AActor* ActorPtr2);
    bool WasSameTeam(AActor* ActorPtr);
    bool WasAlly(AActor* ActorPtr);
    void StopIntervalHealthAdjust();
    void StartIntervalHealthAdjust(float Interval, float Duration, float DeltaAmount);
    void SetVulnerable(bool bInIsVulnerable);
    void SetTeammateAllyOverride(bool bOverride);
    static void SetTeamInteractionBetween(AActor* InteractorActorPtr, FName& InteracteeTeam, FName& InInteraction, int32_t Priority);
    void SetTeamInteraction(FName& InteracteeTeam, FName& InInteraction, int32_t Priority);
    void SetTeam(FName& InTeam);
    void SetRegenerationRate(float Rate);
    void SetProtegoActive(bool bProtegoActive);
    void SetProtected(bool bInProtected);
    static void SetOverrideNearDeathRecoverTime(float Time);
    void SetLootable(bool bInLootable);
    void SetIsAsleep(bool bInAsleep);
    void SetInvincible(bool bInIsInvincible);
    static void SetInteractionBetween(AActor* InteractorActorPtr, AActor* InteracteeActorPtr, FName& InInteraction, int32_t Priority);
    void SetInteraction(AActor* InteracteeActorPtr, FName& InInteraction, int32_t Priority);
    void SetImperiusInstigator(AActor* InInstigatorPtr);
    void SetImperiusCharTakesFullDamage(bool TakesFullDamage);
    void SetIgnoreProtego(float Time);
    void SetIgnoreAllyAttacks(bool Ignore);
    void SetHealthThresholdArray(TArray<FHealthThreshold>& HealthThresholdArray);
    void SetDamageable(bool bAttackable);
    void SetBlockingActor(AActor* InBlockingActor);
    void SetAttackable(bool bAttackable);
    static void SetActorVulnerable(AActor* InActor, bool bInIsVulnerable);
    void SetActorToTeam(AActor* DestActor, AActor* SourceActor);
    static void SetActorInvincible(AActor* InActor, bool bInIsInvincible);
    static void SetActorAttackable(AActor* InActor, bool bInAttackable);
    void SetActiveAuthorityFigure(bool bActive);
    void RestoreLastTeam();
    void RestoreInitialTeam();
    void RestoreHealthToMax(bool bRemoveTAK);
    static void RestoreActorToLastTeam(AActor* DestActor);
    static void RestoreActorToInitialTeam(AActor* DestActor);
    static void ResetTeamInteractionBetween(AActor* InteractorActorPtr, FName& InteracteeTeam);
    void ResetTeamInteraction(FName& InteracteeTeam);
    static void ResetInteractionBetween(AActor* InteractorActorPtr, AActor* InteracteeActorPtr);
    void ResetInteraction(AActor* InteracteeActorPtr);
    static void ResetAllInteractionsFrom(AActor* InteractorActorPtr);
    void ResetAllInteractions();
    bool IsVulnerable();
    static bool IsUnaware(AActor* Source, AActor* Target);
    bool IsSameTeam(AActor* ActorPtr);
    bool IsProtegoActive();
    bool IsProtected();
    static bool IsPlayerSpawnableAlly(AActor* ActorPtr);
    bool IsLootable();
    bool IsInvincible();
    bool IsIgnoringProtego();
    bool IsDueling();
    bool IsDamageable();
    bool IsAttackable();
    bool IsAsleep();
    static bool IsActorVulnerable(AActor* InActor);
    static bool IsActorInvincible(AActor* InActor);
    static bool IsActorAttackable(AActor* InActor);
    bool IsActiveAuthorityFigure();
    bool ImmuneToFinisherDeath();
    static bool HasInteractionBetween(AActor* InteractorActorPtr, AActor* InteracteeActorPtr);
    bool HasInteraction(AActor* InteracteeActorPtr);
    bool HasChangedTeams();
    FName GetTeamInteraction(AActor* InteracteeActorPtr, FName& Team);
    FName GetTeam();
    float GetRegenerationRate();
    static FString GetObjectClassName(AActor* InActor);
    static float GetNumberOfHappyBeasts();
    FName GetLastTeam();
    static FName GetInteractionBetween(AActor* InteractorActorPtr, AActor* InteracteeActorPtr);
    FName GetInteraction(AActor* InteracteeActorPtr);
    FName GetInitialTeam();
    AActor* GetImperiusInstigator();
    bool GetImperiusCharTakesFullDamage();
    bool GetIgnoreAllyAttacks();
    TArray<FHealthThreshold> GetHealthThresholdArray();
    float GetGameEventRadius();
    float GetEvilEffectiveness();
    static FName GetEnemyInteractionWith(AActor* InteractorActorPtr);
    FName GetEnemyInteraction(FName InInteractorTeam);
    static UCharacterStateInfo* GetCharacterStateInfo(AActor* InActor);
    UClass* GetBonySkeleton();
    AActor* GetBlockingActor();
    static FName GetActorTeam(AActor* DestActor);
    static FName GetActorSubtypeID(AActor* ActorPtr);
    void EndNearDeathKneel();
    static void ClearOverrideNearDeathRecoverTime();
    void ClearIgnoreProtego();
    void ChangeTeam(FName& InTeam);
    static void ChangeActorToTeam(AActor* DestActor, AActor* SourceActor);
    static bool CanHitTarget(AActor* Attacker, AActor* Target);
    static bool AreSameTeam(AActor* ActorPtr1, AActor* ActorPtr2);
    static bool AreAllies(AActor* ActorPtr1, AActor* ActorPtr2);
}; // Size: 0xf90
#pragma pack(pop)
