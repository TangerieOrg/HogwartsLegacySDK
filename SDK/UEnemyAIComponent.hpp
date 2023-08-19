#pragma once
#include <cstdint>
#include "AttackCollisionType.hpp"
#include "EActor_LoadDBProcessingType.hpp"
#include "ECreatureStance.hpp"
#include "EEEnemyAISizeCategory.hpp"
#include "EEnemyAIAttackState.hpp"
#include "EEnemy_Ability.hpp"
#include "EEnemy_AbilityEvent.hpp"
#include "EEnemy_AttackLocSource.hpp"
#include "EEnemy_AttackResetSource.hpp"
#include "EEnemy_AttackSource.hpp"
#include "EEnemy_AttackUpdateState.hpp"
#include "EEnemy_AttackingState.hpp"
#include "EEnemy_ProtegoLevel.hpp"
#include "ENPC_HitDirection.hpp"
#include "ENPC_Mobility.hpp"
#include "ENPC_QBUpdate.hpp"
#include "ENPC_Spawn.hpp"
#include "ENPC_TargetAwareState.hpp"
#include "FClimbSettings.hpp"
#include "FEnemyEvadeData.hpp"
#include "FEnemyGameEventData.hpp"
#include "FEnemyVulnerableData.hpp"
#include "FEnemy_AccuracyData.hpp"
#include "FEnemy_AlertData.hpp"
#include "FEnemy_ApparateData.hpp"
#include "FEnemy_ApparateToData.hpp"
#include "FEnemy_AttackLocUpdateData.hpp"
#include "FEnemy_EnergyData.hpp"
#include "FEnemy_IdleBreak.hpp"
#include "FEnemy_IdleData.hpp"
#include "FEnemy_MoveStopData.hpp"
#include "FEnemy_NextDecisionWait.hpp"
#include "FEnemy_NextMoveWait.hpp"
#include "FEnemy_Shuffle.hpp"
#include "FEnemy_ShuffleData.hpp"
#include "FEnemy_Taunt.hpp"
#include "FEnemy_TurnInPlaceData.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FLadderSettings.hpp"
#include "FMaterialParameterSetter.hpp"
#include "FNPC_PerceptionInfo.hpp"
#include "FNPC_ShowUI.hpp"
#include "FRipApartFinisherData.hpp"
#include "FSlideSettings.hpp"
#include "FTransform.hpp"
#include "FVaultSettings.hpp"
#include "FVector.hpp"
#include "NPC_GameChangerState.hpp"
#include "UNPC_Component.hpp"
class UEnemy_TargetSenseAsset;
class UEnemy_QBUpdateData;
class UBehaviorTree;
class UEnemy_InstanceQBUpdateData;
class UClass;
class UEnemyAIPathCheckPropertyData;
class UInteractionArchitectAsset;
class USpellToolRecord;
class ANPC_Character;
class UEnemyAIAttackData;
class UEnemyHiddenTeleportAttackComponent;
class UEnemyCorruptionData;
class UAblReactionData;
class AActor;
class UEnemy_AttackComponent;
class UEnemy_WeaponComponent;
class ASpellCasterTool;
class ULadderNavLinkComponent;
class USlideNavLinkComponent;
class UCurveFloat;
class AEnemyAIWeapon;
class APathNode;
class UAblReactionComponent;
struct FEnemy_MeleeAttackOverlapData;
class ASpellTool;
class UEnemyAISpawnData;
class UEnemy_AnimInstance;
#pragma pack(push, 1)
class UEnemyAIComponent : public UNPC_Component {
public:
    bool m_damageDestructables; // 0x1ec0
    char pad_1ec1[0x3];
    float MoveMaxAngle; // 0x1ec4
    float MaxAngleFromCamera; // 0x1ec8
    float TooCloseToTargetDist; // 0x1ecc
    bool bImmuneToCCIncapacition; // 0x1ed0
    char pad_1ed1[0x7];
    FRipApartFinisherData RipApartFinisherData; // 0x1ed8
    float ProximityAttackDist; // 0x1ee8
    float ProximityMoveDist; // 0x1eec
    float ProximityAttackDistCooldown; // 0x1ef0
    float ProximityAttackMinTimeSinceLastAttack; // 0x1ef4
    float CounterAttackWindow; // 0x1ef8
    float CounterAttackCooldown; // 0x1efc
    bool bAttackDisable; // 0x1f00
    bool bAttackWithoutRestrictions; // 0x1f01
    bool bAlwaysMyTurn; // 0x1f02
    bool bNoAttackExecuteCooldown; // 0x1f03
    bool bNoAttackSelectCooldown; // 0x1f04
    bool bAlwaysInRange; // 0x1f05
    bool bAlwaysAccurate; // 0x1f06
    bool bAllAttacksRequireTickets; // 0x1f07
    bool bStationaryAttackAllowedOutOfRange; // 0x1f08
    bool bAttackExitAsSoonAsFired; // 0x1f09
    bool bIgnoreCorridors; // 0x1f0a
    char pad_1f0b[0x1];
    FEnemy_AttackLocUpdateData AttackLocUpdateData; // 0x1f0c
    UBehaviorTree* AttackSplitBehaviorTree; // 0x1f10
    UBehaviorTree* AttackCounterBehaviorTree; // 0x1f18
    float RetaliatePauseTicketRecoverTime; // 0x1f20
    float TeammateLOSCorridorHalfWidth; // 0x1f24
    float TeammateLOSUpdateInterval; // 0x1f28
    bool TeammateLOSRequireForNPCAttack; // 0x1f2c
    bool bAbruptDestinationChangeCheck; // 0x1f2d
    char pad_1f2e[0x2];
    float AbruptDestinationChangeAngle; // 0x1f30
    float CombatLocSearchAngleWidth; // 0x1f34
    float CombatFootprintSize; // 0x1f38
    char pad_1f3c[0x4];
    TArray<UEnemy_QBUpdateData*> QBUpdateData; // 0x1f40
    TArray<UEnemy_InstanceQBUpdateData*> QBInstanceUpdateData; // 0x1f50
    char pad_1f60[0x8];
    UEnemyAIPathCheckPropertyData* PathCheckPtr; // 0x1f68
    EEEnemyAISizeCategory SizeCategory; // 0x1f70
    char pad_1f71[0x3];
    float RotationRate; // 0x1f74
    char pad_1f78[0x8];
    FEnemy_TurnInPlaceData TurnInPlaceData; // 0x1f80
    bool bEnableEnergyDrain; // 0x1fb8
    char pad_1fb9[0x7];
    TArray<FEnemy_EnergyData> EnergyDataList; // 0x1fc0
    bool bEnableBreaks; // 0x1fd0
    char pad_1fd1[0x3];
    float BreakChance; // 0x1fd4
    float BreakIntervalBetween; // 0x1fd8
    bool bEnableBreakIntervalDecay; // 0x1fdc
    char pad_1fdd[0x3];
    float BreakIntervalBetweenDeviation; // 0x1fe0
    float BreakDuration; // 0x1fe4
    float BreakDurationDeviation; // 0x1fe8
    char pad_1fec[0x4];
    UClass* BecomeAlertAbility; // 0x1ff0
    UClass* AlertFaceAbility; // 0x1ff8
    UClass* AlertWaitAbility; // 0x2000
    UClass* LoseAlertAbility; // 0x2008
    UClass* BecomeAwareAbility; // 0x2010
    UClass* LoseAwareAbility; // 0x2018
    UClass* TurnInPlaceAbility; // 0x2020
    UClass* IdleBreakAbility; // 0x2028
    UClass* ShuffleAbility; // 0x2030
    UClass* TauntAbility; // 0x2038
    UClass* ApparateOutAbility; // 0x2040
    UClass* ApparateWaitAbility; // 0x2048
    UClass* ApparateInAbility; // 0x2050
    UClass* WeaponEquipAbility; // 0x2058
    UClass* WeaponStoreAbility; // 0x2060
    UClass* WeaponPickupAbility; // 0x2068
    UClass* WeaponLostAbility; // 0x2070
    UClass* WeaponRecoveredAbility; // 0x2078
    UClass* JumpDownAbility; // 0x2080
    UClass* JumpStraightAbility; // 0x2088
    UClass* JumpSoftLandAbility; // 0x2090
    UClass* JumpLandPT; // 0x2098
    UClass* DeathTauntAbility; // 0x20a0
    UClass* FlourishAbility; // 0x20a8
    UClass* FlyingAbility; // 0x20b0
    UClass* StartDrainedAbility; // 0x20b8
    UClass* DrainedAbility; // 0x20c0
    UClass* StopDrainedAbility; // 0x20c8
    UClass* InvestigateStartAbility; // 0x20d0
    UClass* InvestigateMoveAbility; // 0x20d8
    UClass* InvestigateIdleAbility; // 0x20e0
    UClass* InvestigateStopAbility; // 0x20e8
    UClass* ReflectionIdleAbility; // 0x20f0
    ENPC_TargetAwareState ForceTargetAwareState; // 0x20f8
    char pad_20f9[0x3];
    float ForceTargetAwareStateTimer; // 0x20fc
    bool bTASForceIntoAttack; // 0x2100
    bool bTASEnable; // 0x2101
    bool bPlayBecomeAware; // 0x2102
    char pad_2103[0x1];
    float PlayBecomeAwareChance; // 0x2104
    float TeammatesPlayBecomeAwareChance; // 0x2108
    bool bPlayLoseAware; // 0x210c
    bool bSetDesiredDirectionInAlertFace; // 0x210d
    bool bAllowAwareTurnAround; // 0x210e
    char pad_210f[0x1];
    FClimbSettings ClimbSettings; // 0x2110
    FLadderSettings LadderSettings; // 0x2140
    FSlideSettings SlideSettings; // 0x21e8
    FVaultSettings VaultSettings; // 0x2228
    bool bRequireStationaryForIdleChance; // 0x2248
    char pad_2249[0x7];
    FEnemy_IdleData IdleData; // 0x2250
    TArray<FEnemy_NextDecisionWait> NextDecisionWaitList; // 0x22b0
    TArray<FEnemy_NextMoveWait> NextMoveWaitList; // 0x22c0
    TArray<FEnemy_MoveStopData> MoveStopDataList; // 0x22d0
    bool bUseCreatureMoveToStopPrediction; // 0x22e0
    bool bUseCreatureMoveToStopBranching; // 0x22e1
    bool bUpdateMobilityInBecomeOrLoseAware; // 0x22e2
    ENPC_Mobility MobilityForAlarmedInvestigate; // 0x22e3
    char pad_22e4[0x4];
    FEnemy_IdleData TauntData; // 0x22e8
    TArray<FEnemy_Taunt> TauntList; // 0x2348
    FEnemy_IdleData IdleBreakData; // 0x2358
    TArray<FEnemy_IdleBreak> IdleBreakList; // 0x23b8
    FEnemy_ShuffleData ShuffleIdleData; // 0x23c8
    FEnemy_IdleData ShuffleData; // 0x2430
    int32_t ShuffleSupportedDirections; // 0x2490
    int32_t ShuffleDistance; // 0x2494
    TArray<FEnemy_Shuffle> ShuffleList; // 0x2498
    bool bAllowShuffleWhenTooClose; // 0x24a8
    bool bAllowShuffleWithoutWeapon; // 0x24a9
    char pad_24aa[0x2];
    float EvadeBeingTargetedThreshold; // 0x24ac
    int32_t ChanceToEvade; // 0x24b0
    char pad_24b4[0x4];
    TArray<FEnemyEvadeData> EnemyEvadeData; // 0x24b8
    bool bFavorEvade; // 0x24c8
    char pad_24c9[0x3];
    float HealAmountPerEvent; // 0x24cc
    TArray<UClass*> ProtegoRequiredWeaponList; // 0x24d0
    EEnemy_ProtegoLevel ProtegoDefenseLevel; // 0x24e0
    char pad_24e1[0x3];
    int32_t ChanceToProtego; // 0x24e4
    int32_t ChanceToProtegoLightAttack; // 0x24e8
    int32_t ChanceToProtegoMediumAttack; // 0x24ec
    int32_t ChanceToProtegoHeavyAttack; // 0x24f0
    int32_t ProtegoDeflectedAttack; // 0x24f4
    int32_t BlockAttack; // 0x24f8
    int32_t DeflectBackAttack; // 0x24fc
    int32_t DeflectToTarget; // 0x2500
    float ProtegoDeflectionTimeOut; // 0x2504
    float DeflectedAttackTimeOut; // 0x2508
    bool bPowerupEligible; // 0x250c
    char pad_250d[0x3];
    float PowerupTimeout; // 0x2510
    char pad_2514[0x4];
    TArray<FEnemyVulnerableData> EnemyStrengthData; // 0x2518
    TArray<FEnemyVulnerableData> EnemyWeaknessData; // 0x2528
    TArray<FEnemyVulnerableData> EnemyAttackStrengthData; // 0x2538
    TArray<FEnemyVulnerableData> EnemyAttackWeaknessData; // 0x2548
    TArray<FEnemyGameEventData> EnemyGameEventData; // 0x2558
    UInteractionArchitectAsset* GameEvenetInteractionArchitectAssetPtr; // 0x2568
    bool bBuffAllowHealth; // 0x2570
    bool bBuffAllowWeapon; // 0x2571
    char pad_2572[0x2];
    float DisarmRespawnTime; // 0x2574
    USpellToolRecord* ProtegoAttackPtr; // 0x2578
    UClass* ProtegoAbilityPtr; // 0x2580
    UClass* ProtegoStartupAbilityPtr; // 0x2588
    bool bProtegoAdditive; // 0x2590
    char pad_2591[0x3];
    FName ProtegoChannelName; // 0x2594
    char pad_259c[0x4];
    UInteractionArchitectAsset* ProtegoInteractionArchitectAssetPtr; // 0x25a0
    float ProtegoHoldTimeout; // 0x25a8
    bool bProtegoPlayDeflection; // 0x25ac
    bool bProtegoShowShieldPulseWhenHit; // 0x25ad
    bool bProtegoShowOnOffShieldEffects; // 0x25ae
    bool bAllowProtegoToInterrupAttack; // 0x25af
    bool bAllowProtegoToInterrupReactions; // 0x25b0
    char pad_25b1[0x3];
    int32_t ProtegoDeflectionChance; // 0x25b4
    char pad_25b8[0x1];
    bool bOnlyUseDOTReactionForCrucio; // 0x25b9
    char pad_25ba[0xe];
    USpellToolRecord* LumosPtr; // 0x25c8
    UClass* LumosAbilityPtr; // 0x25d0
    bool bLumosAdditive; // 0x25d8
    char pad_25d9[0x3];
    FName LumosChannelName; // 0x25dc
    bool bCanApparateIfUnreachableLoc; // 0x25e4
    bool bCanApparateToMove; // 0x25e5
    bool bCanApparateToRecoverWeapon; // 0x25e6
    bool bApparateUsingFixedTime; // 0x25e7
    float ApparateSpeed; // 0x25e8
    float ApparateFixedTime; // 0x25ec
    TArray<FEnemy_ApparateData> ApparateData; // 0x25f0
    UEnemy_TargetSenseAsset* LeaderTargetSenseAsset; // 0x2600
    UEnemy_TargetSenseAsset* CompanionTargetSenseAsset; // 0x2608
    float CompanionPerceptionMinTimeSincePlayerAttacked; // 0x2610
    char pad_2614[0x2c];
    FString BabySpawnObjectName; // 0x2640
    FEnemy_AccuracyData Accuracy; // 0x2650
    char pad_2680[0x48];
    bool bAllowTooCloseCounterAttack; // 0x26c8
    bool bAllowCreateAggroHideTrigger; // 0x26c9
    bool bAllowApparateMoveWithInvalidMoveLoc; // 0x26ca
    char pad_26cb[0x1];
    float TeleportMoveRangeOffset; // 0x26cc
    float TeleportMoveStuckRangeOffset; // 0x26d0
    float DamageBuffMultiplier; // 0x26d4
    bool m_onGround; // 0x26d8
    bool m_lastOnGround; // 0x26d9
    bool bSpawnSpellCaster; // 0x26da
    bool bSpawnProtegoCaster; // 0x26db
    FName SpellCasterSocket; // 0x26dc
    char pad_26e4[0x4];
    UClass* SpellCasterClass; // 0x26e8
    char pad_26f0[0xf0];
    UEnemyHiddenTeleportAttackComponent* HiddenTeleportAttackComp; // 0x27e0
    char pad_27e8[0x28];
    float KeepAwayFromTargetDist; // 0x2810
    bool bUseFootMatching; // 0x2814
    bool bApparateAfterReactions; // 0x2815
    char pad_2816[0x2];
    FEnemy_ApparateToData ApparateAfterReactionsData; // 0x2818
    char pad_2840[0x10];
    UEnemyCorruptionData* AggroCorruption; // 0x2850
    UEnemyCorruptionData* AggroCorruptionInstance; // 0x2858
    FMaterialParameterSetter Corruption; // 0x2860
    char pad_28f8[0xe0];
    FGameplayTagContainer EscapeExceptionTags; // 0x29d8
    char pad_29f8[0x300];
    ANPC_Character* GameChangerForm; // 0x2cf8
    char pad_2d00[0x18];
    AActor* CustTargetPtr; // 0x2d18
    char pad_2d20[0x630];
    UEnemy_AttackComponent* AttackComp; // 0x3350
    UEnemy_WeaponComponent* WeaponComp; // 0x3358
    char pad_3360[0x2e0];
    UClass* CurrentClimbAbility; // 0x3640
    UClass* CurrentJumpToClimbAbility; // 0x3648
    char pad_3650[0x8];
    ULadderNavLinkComponent* CurrentLadder; // 0x3658
    USlideNavLinkComponent* CurrentSlide; // 0x3660
    char pad_3668[0x120];
    UClass* CurrentVaultAbility; // 0x3788
    char pad_3790[0xf8];
    UClass* AnimagusPreloadClass; // 0x3888
    char pad_3890[0x1];
    bool bEnableAnimagusFormPreloading; // 0x3891
    char pad_3892[0x8e];
    static UEnemyAIComponent* StaticClass();
    bool WasAttackParried(AActor* InVictimPtr);
    bool WaitForCreatureStance(ECreatureStance InWaitForStance, bool bWaitForStationary, float DeltaTime);
    bool WaitForAbility(EEnemy_Ability InWaitForState, float DeltaTime);
    void UpdateHealthRTPCCallback(AActor* InActor, float Delta, bool bIndicateHUD);
    bool UpdateFollowSpline(float DeltaTime);
    void UpdateFacingToLoc(FVector Loc, UCurveFloat* CurvePtr, float InterpSpeed, float DeltaTime);
    void UpdateAttackLocation();
    void UnhideActiveWeapon();
    void TrackMeleePoints(FVector& InMeleeLoc);
    void ThrowWeapon();
    void TeamChanged();
    bool StoreWeapon(AEnemyAIWeapon* InWeaponPtr);
    void StopWandLinkCowerDelayed();
    void StopProtegoSpell();
    void StopGameChanger();
    void StopCastSpell(USpellToolRecord* SpellToolRecord);
    void StartProtegoSpell();
    void StartGameChanger();
    void StartFollowSpline();
    bool StartAttack();
    void StartApparateInEvent();
    void SplineSpawnDoneEvent(AActor* InApparateActor);
    void SplineSpawnArrivedEvent(AActor* InApparateActor, FVector InLoc);
    AEnemyAIWeapon* SpawnWeapon(UClass* SpawnWeaponClass);
    void SpawnLoot();
    AActor* SpawnChild_BP(FString ObjectToSpawn, ENPC_Spawn InSpawnType, FString TeamName, FTransform SpawnTransform);
    void SpawnAnimagusForm();
    void SetWeapon(AEnemyAIWeapon* InWeaponPtr);
    void SetWanderMode();
    void SetUnblockableTags(FGameplayTagContainer& InOutTagContainer, UEnemyAIAttackData* attackDataPtr, bool bForceUnblockable);
    void SetToDie(AActor* InstigatorPtr, UInteractionArchitectAsset* InMunitionDataAssetPtr);
    void SetTASEnabled(bool inEnabled);
    void SetStationaryMode();
    void SetSpellCaster(ASpellCasterTool* InSpellCaster);
    void SetShowShieldWhenHit(bool bShowWhenHit);
    void SetShowOnOffShieldEffects(bool bShowShieldEffects);
    void SetShieldToAcquire(AEnemyAIWeapon* InShieldPtr);
    void SetShieldSpellDeflectionIfEquipped(bool bShouldDeflect);
    void SetShield(AEnemyAIWeapon* InShieldPtr);
    void SetScaredMode();
    void SetResurrectedEvent();
    void SetPlayProtegoDeflection(bool bPlay);
    void SetPathMode(APathNode* pPathNode);
    static void SetParentToActors(TArray<AActor*>& InActorList, AActor* InParent);
    void SetNoAttackSelectCooldown(bool bNo);
    void SetNoAttackExecuteCooldown(bool bNo);
    void SetNewAlertUIData(FNPC_ShowUI NewShowUI);
    void SetInAttackWindow(bool bin);
    void SetIgnoreAttackCorridors(bool bIgnore);
    void SetGameChangerState(NPC_GameChangerState InState);
    void SetGameChangerObjectName(FString inObjectName);
    void SetGameChangerForm(ANPC_Character* inGameChangerForm);
    void SetForceIntoAttackTAS(bool bForce);
    void SetDestroyed();
    void SetDeadMode();
    void SetDeadEvent(AActor* Instigator);
    void SetDamagedEvent(float InAmount, AActor* Instigator);
    void SetCustomAttackData(UEnemyAIAttackData* InCustAttackPtr, AActor* InCustTarget);
    void SetCantMoveDuringAttack(bool disableMove);
    void SetCanAttack(bool canAttack);
    void SetAttackWithoutRestrictions(bool bInWithoutRestrictions);
    void SetAttackMode(AActor* pTarget);
    void SetAttackLocation(FVector InLocation);
    void SetAttackingState(EEnemy_AttackingState InState);
    void SetAttackExitAsSoonAsFired(bool bExit);
    void SetAttackCollisionType(AttackCollisionType InCollisionType);
    void SetAnimagusWolfPerceivedTarget();
    void SetAlwaysMyTurn(bool bInAlwaysMyTurn);
    void SetAlwaysInRange(bool bAlways);
    void SetAlwaysAccurate(bool bAlways);
    void SetAllowProtegoToInterruptAttack(bool bAllowProtegoInterrupt);
    void SetAlertMode(AActor* pTarget);
    float SendMunitionImpact(FHitResult& HitResult, AActor* pVictim, AActor* pOriginator, UInteractionArchitectAsset* pMunitionDataAsset, FName InMunitionImpactType, FGameplayTagContainer& InMunitionTagContainer, bool bForceUnblockable);
    void RotateToLoc(FVector Loc);
    void RotateToAttack();
    void RespawnWeapon();
    void ResetDisengagedState();
    void ResetAttack(EEnemy_AttackResetSource InResetSource);
    void ReleaseWeapon(AEnemyAIWeapon* InWeaponPtr, bool bForceDestroy, bool bSetDropVel, bool bIsThrown, bool bForceDrop);
    void ReleaseSpellCaster(ASpellCasterTool* InSpellCasterPtr);
    void ReleaseShield(AEnemyAIWeapon* InShieldPtr, bool bSetDropVel);
    void ReactionStart(UAblReactionData* ReactionData, UAblReactionComponent* ReactionComponent);
    void PublishAttackStateToBlackboard();
    void PreparePotentialSpawnLocations();
    void PreloadAnimagusForm();
    bool PreAttack(EEnemy_AttackSource InSource);
    void PathNodeArrival();
    bool OverlapMeleeCapsule(AActor* InVictim, FHitResult InHitResult, ENPC_HitDirection InForceDirection, FEnemy_MeleeAttackOverlapData& OutOverlapData);
    void OnReplicatedFormDeath();
    void OnObjectLoaded(FString ObjectToLoad);
    void OnJumpSplineDone();
    void OnAttackDBLoaded(AActor* LoadActor, EActor_LoadDBProcessingType LoadType);
    void OnAnimagusFormTransformed();
    void OnAnimagusFormTimeout();
    void OnAnimagusFormDeath();
    void OnAnimagusFormAvadaKedavra();
    void OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);
    void OnActorDamaged(AActor* InActor, AActor* InInstigator, float InDamage, FHitResult& InHit);
    bool MoveToAttackRunTo(float DeltaTime);
    bool MoveToAttackLocation(FVector DestinationLoc, UCurveFloat* CurveFloatPtr, float InterpSpeed, float DeltaTime);
    void LogBehaviorTree(FName TaskName);
    bool IsUsingNavLink();
    bool IsRequiredWeaponStored(UEnemyAIAttackData* AttackPtr);
    bool IsFacingToLoc(FVector Loc, float MinAngle);
    bool IsCharacterDisengaged();
    bool IsAttacking();
    bool InRangeToLoc(FVector TestLoc, FVector Loc, float MinRange, float MaxRange, float Tolerance, bool bAllowIfTooClose, float& OutDistFromRange);
    void InitWaitForCreatureStance(ECreatureStance InWaitForStance, bool bWaitForStationary, float Timeout);
    void InitWaitForAbility(float Timeout);
    bool InitMoveToAttackRunTo(float Timeout);
    bool InitMoveToAttackLocation(FVector DestinationLoc, float Timeout);
    void InitFollowSpline();
    void HideProtegoSpell(bool bInHide);
    void HideActiveWeapon();
    bool HasWeapon();
    bool HasStoredWeapon();
    void HandleSpellSuccess(AActor* Target, ASpellTool* Spell, FName SpellType);
    bool HandleOnActorHit(AActor* pOtherActor, FHitResult& HitResult);
    void HandleOnActorEndHit(AActor* pOtherActor);
    void HandleAttackDone();
    void HandleAbilityAnimEvent(EEnemy_AbilityEvent inAnimEvent);
    bool HandleAbilityActorHit(AActor* InOtherActor, FHitResult& HitResult);
    AEnemyAIWeapon* GetWeaponToAcquire();
    float GetWeaponRequiredPercent();
    AEnemyAIWeapon* GetWeapon();
    bool GetUnblockable(AActor* InVictimPtr, bool bForceUnblockable);
    AEnemyAIWeapon* GetTransientWeapon();
    ASpellCasterTool* GetSpellCaster();
    FVector GetSpawnLoc();
    UEnemyAISpawnData* GetSpawnData();
    FString GetSizeCategoryString();
    EEEnemyAISizeCategory GetSizeCategory();
    UEnemy_QBUpdateData* GetQBUpdateData(EEnemy_AttackLocSource InSource);
    EEnemy_ProtegoLevel GetProtegoSpellLevel();
    APathNode* GetPathNode();
    UEnemy_InstanceQBUpdateData* GetOrCreateQBUpdateInstanceData(ENPC_QBUpdate InUpdate);
    FNPC_PerceptionInfo GetNPCPerceptionInfo();
    bool GetMoveToAttackRunToSuccess();
    FVector GetLastKnownTargetLoc();
    bool GetIsStealthAttackCurrentlyDisabled();
    bool GetInAttackWindow();
    NPC_GameChangerState GetGameChangerState();
    FString GetGameChangerObjectName();
    ANPC_Character* GetGameChangerForm();
    FGameplayTagContainer GetEnemyWeaponTagContainer();
    UInteractionArchitectAsset* GetEnemyWeaponDataAsset();
    UEnemy_AnimInstance* GetEnemyAnimInstance();
    float GetDamage(AActor* InVictimPtr, AEnemyAIWeapon* InWeaponPtr);
    float GetCriticalHealthPercept();
    bool GetCanAttack();
    bool GetAttackWaitingForDesynchronization();
    bool GetAttackUpdateStateSuccess();
    EEnemy_AttackUpdateState GetAttackUpdateState();
    EEnemyAIAttackState GetAttackStateRange();
    EEnemyAIAttackState GetAttackState();
    FVector GetAttackLocation();
    AttackCollisionType GetAttackCollisionType();
    float GetAlertSense();
    FEnemy_AlertData GetAlert();
    AEnemyAIWeapon* GetActiveSpawnMeteorData();
    void ForceQBDataForceUpdate();
    void ForceNextAttack(UEnemyAIAttackData* InAttackPtr);
    void ForceExecuteDelayedAttack(UEnemyAIAttackData* InAttackPtr, float InDelay);
    void ForceExecuteAttack(UEnemyAIAttackData* InAttackPtr);
    void ForceDisengagedState();
    void ForceChooseAttack(UEnemyAIAttackData* InAttackPtr);
    void ForceAttackState();
    void ForceAttack(UEnemyAIAttackData* InAttackPtr, bool bBypassPerception);
    void FireWeaponAOE1(AEnemyAIWeapon* InWeaponPtr);
    bool FindAvailableStoredWeaponSocket(AEnemyAIWeapon* InWeaponPtr, FName& OutSocketName);
    void EnemyRemoveFromManager(AActor* InActorPtr);
    void EnemyAddToManager(AActor* InActorPtr);
    void EndAttack();
    void EnableWeaponCollision();
    void EnableTrackMeleePoints(bool bEnable);
    void EnableShieldCollision();
    void EnableProvidedWeaponCollision(AEnemyAIWeapon* InWeaponPtr);
    void EnableImmediateAttack(bool ShouldEnable);
    AActor* DisarmWeapon(float ScaleForce);
    AActor* DisarmShield(float ScaleForce);
    void DisableWeaponCollision();
    void DisableShieldCollision();
    void DisableProvidedWeaponCollision(AEnemyAIWeapon* InWeaponPtr);
    void DestroySpawnedChildren();
    void DestroyAnimagusForm();
    void ComboEnd(int32_t ComboCount);
    bool ChooseCounterAttackSplit(FGameplayTagContainer& InTagContainer);
    bool ChooseAttackUpdate();
    UEnemyAIAttackData* ChooseAttack();
    void CastSpellAtRandom(USpellToolRecord* SpellToolRecord, FName InSocketName);
    void CastSpellAtLocation(FVector& TargetLocation, USpellToolRecord* SpellToolRecord, FName& InSocketName);
    void CastSpellAtActor(AActor* InTargetPtr, USpellToolRecord* SpellToolRecord, FName InSocketName, bool bAlwaysHitTargetActor);
    void CastSpell(USpellToolRecord* SpellToolRecord, FName InSocketName);
    void CastProtegoSpell(USpellToolRecord* SpellToolRecord, FName InSocketName);
    bool CanStoreWeapon(AEnemyAIWeapon* InWeaponPtr);
    bool CanAnyStoredWeaponBeThrown();
    void BroadcastOnDeath(AActor* pActor);
    void BroadcastOnAlertSenseChanged(float alertSense);
    void BroadcastAlertState();
    void BroadcastAlertSense();
    bool AttackUpdateStateUpdate(EEnemy_AttackUpdateState AttackUpdateState, float DeltaTime);
    void AttackTreeUpdate();
    void AttackExecuteBTInject();
    void AttackedEvent(AActor* Instigator);
    void AttackChooseBTInject();
    void ApplyDesynchronization();
    void ApparateDoneEvent(AActor* InApparateActor);
    void ApparateArrivedEvent(AActor* InApparateActor, FVector InLoc);
    void AllWeaponsLifetimeToZero();
    void AllowSingleAttack();
    void AllowHideBlindWeapon(bool bInAllow);
    bool AdvancePath();
    void AdjustAttackWeightsByID(FString InRegistryID);
    void AddQBUpdateData(EEnemy_AttackLocSource InSource);
    void ActivateRequiredWeapon();
    void AcquireWeapon(AEnemyAIWeapon* InWeaponPtr);
    void AcquireSpellCaster(ASpellCasterTool* InSpellCasterPtr);
    void AcquireShield(AEnemyAIWeapon* InShieldPtr);
    void AbortAUS(bool bBranchToIdle);
    void AbortAttack();
}; // Size: 0x3920
#pragma pack(pop)
