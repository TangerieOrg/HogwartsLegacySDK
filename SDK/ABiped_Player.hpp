#pragma once
#include <cstdint>
#include "ABiped_Character.hpp"
#include "ECharacterDeathType.hpp"
#include "EComboType.hpp"
#include "ECustomInterpType\Type.hpp"
#include "EEdgeState\Type.hpp"
#include "EEnemy_ParryButtonPressed.hpp"
#include "EGenderPronoun.hpp"
#include "ENPC_TargetAwareState.hpp"
#include "ESpellCategory.hpp"
#include "EWandLinkResult.hpp"
#include "FGameplayProperty_Float.hpp"
#include "FGameplayProperty_Int.hpp"
#include "FGearItem.hpp"
#include "FName_GameLogicVarBool.hpp"
#include "FName_GameLogicVarInt32.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "FWeightedBlendable.hpp"
#include "SocialHeritageStatusIDs.hpp"
class UConversationComponent;
class UCustomizableCharacterComponent;
class APlayer_AttackIndicator;
class UAkAudioEvent;
struct FHitResult;
class ASocialReasoning;
class UClass;
class UCurveFloat;
class UToolSetComponent;
class USplineComponent;
class UVegetationInteractionComponent;
class UCameraComponent;
class ADoor;
class AFieldGuideHotSpot;
class UMultiFX2_Base;
class UInteractionArchitectAsset;
class UMaterialInstanceDynamic;
class AActor;
class UAkComponent;
class UAISense;
class UInventoryItemToolRecord;
struct FGameplayTagContainer;
class AStation;
class UObject;
class UStickFlickWatcherRecord;
class USpellToolRecord;
class UBiped_AnimInstance;
struct FVendorTransactionInfo;
#pragma pack(push, 1)
class ABiped_Player : public ABiped_Character {
public:
    char pad_1a70[0x18];
    UConversationComponent* ConversationComponent; // 0x1a88
    UCustomizableCharacterComponent* Customization; // 0x1a90
    ASocialReasoning* PlayerSocialReasoning; // 0x1a98
    char pad_1aa0[0x50];
    UToolSetComponent* InventoryToolSetComponent; // 0x1af0
    bool bAllowFastWalk; // 0x1af8
    char pad_1af9[0x7];
    UCurveFloat* WalkSlowModeSpeedCurve; // 0x1b00
    UCurveFloat* WalkModeSpeedCurve; // 0x1b08
    UCurveFloat* WalkOnlyModeSpeedCurve; // 0x1b10
    UCurveFloat* WalkFastModeSpeedCurve; // 0x1b18
    UCurveFloat* WalkFastOnlyModeSpeedCurve; // 0x1b20
    UCurveFloat* JogModeSpeedCurve; // 0x1b28
    UCurveFloat* JogOnlyModeSpeedCurve; // 0x1b30
    UCurveFloat* SprintModeSpeedCurve; // 0x1b38
    UCurveFloat* JogModeSpeedGovernorCurve; // 0x1b40
    UClass* GryffindorMaleBedAbility; // 0x1b48
    UClass* GryffindorFemaleBedAbility; // 0x1b50
    UClass* RavenClawMaleBedAbility; // 0x1b58
    UClass* RavenClawFemaleBedAbility; // 0x1b60
    UClass* HufflePuffMaleBedAbility; // 0x1b68
    UClass* HufflePuffFemaleBedAbility; // 0x1b70
    UClass* SlytherinMaleBedAbility; // 0x1b78
    UClass* SlytherinFemaleBedAbility; // 0x1b80
    UClass* AttackIndicatorActorClass; // 0x1b88
    APlayer_AttackIndicator* AttackIndicatorActor; // 0x1b90
    float InnerDeadZoneMin; // 0x1b98
    float InnerDeadZoneMax; // 0x1b9c
    float OuterDeadZone; // 0x1ba0
    EEdgeState::Type EdgeState; // 0x1ba4
    char pad_1ba5[0x3];
    FVector EdgeLocation; // 0x1ba8
    FVector EdgeNormal; // 0x1bb4
    float EdgeDistanceToGround; // 0x1bc0
    float EdgeDistanceFromEdge; // 0x1bc4
    FVector EdgeImpulse; // 0x1bc8
    char pad_1bd4[0x4];
    USplineComponent* SyncToSplineComponent; // 0x1bd8
    float SyncToSplineDirection; // 0x1be0
    float SyncToSplineDistance; // 0x1be4
    UClass* DefaultIdleAbility; // 0x1be8
    bool IsDashing; // 0x1bf0
    char pad_1bf1[0x7];
    ADoor* LastNearDoor; // 0x1bf8
    char pad_1c00[0x4];
    int32_t MaxChompingCabbage; // 0x1c04
    int32_t MaxVenomousTentacula; // 0x1c08
    bool AllowPlayerCamContorlOnOtherActorCam; // 0x1c0c
    bool InvertCameraPitchControl; // 0x1c0d
    bool InvertCameraYawControl; // 0x1c0e
    bool InvertMoveLeftRightControl; // 0x1c0f
    bool InvertMoveForwardBackControl; // 0x1c10
    bool EnableFadeSystem; // 0x1c11
    char pad_1c12[0x6];
    AFieldGuideHotSpot* PlayerInThisFieldGuideHotSpot; // 0x1c18
    float FinisherDamage; // 0x1c20
    float ElderWandFinisherDamage; // 0x1c24
    float MaxFocus; // 0x1c28
    int32_t InitialNumBarsFilled; // 0x1c2c
    float FinisherFocusCost; // 0x1c30
    float ManagedFinisherFocusCost; // 0x1c34
    float PushFocusCost; // 0x1c38
    char pad_1c3c[0x54];
    TArray<UMultiFX2_Base*> FinisherAvailableFX; // 0x1c90
    float ComboResetTime; // 0x1ca0
    float AdditionalComboResetTimeOnParry; // 0x1ca4
    int32_t CooldownPickupFirstTierSize; // 0x1ca8
    int32_t CooldownPickupTierSize; // 0x1cac
    TArray<int32_t> CooldownPickupCountArray; // 0x1cb0
    float ExtendedCombatTime; // 0x1cc0
    char pad_1cc4[0x20];
    float HealthIncreasePerLevel; // 0x1ce4
    FName LeftFootSocketName; // 0x1ce8
    FName RightFootSocketName; // 0x1cf0
    UCurveFloat* LeftStickMagWalkingCurve; // 0x1cf8
    UCurveFloat* LeftStickMagJoggingCurve; // 0x1d00
    float BulletTimeStartSeconds; // 0x1d08
    char pad_1d0c[0x4];
    UCurveFloat* BulletTimeDilationCurve; // 0x1d10
    float BulletTimeDurationSeconds; // 0x1d18
    float BulletTimeDialation; // 0x1d1c
    float CutBackToPlayerCamAfterTimeDialationSec; // 0x1d20
    char pad_1d24[0x4];
    FWeightedBlendable DamageEffectBlendable; // 0x1d28
    UMaterialInstanceDynamic* DamageEffectMaterialInstance; // 0x1d38
    UCurveFloat* DamageEffectCurve; // 0x1d40
    float DamageEffectDuration; // 0x1d48
    float DamageEffectScale; // 0x1d4c
    TArray<UMultiFX2_Base*> CriticalHealthFX; // 0x1d50
    UCurveFloat* CriticalHealthPulseTimeCurve; // 0x1d60
    TArray<UMultiFX2_Base*> CriticalHealthPulseFX; // 0x1d68
    float CriticalHealthFadeOutTime; // 0x1d78
    char pad_1d7c[0x4];
    UClass* DamageDirectionClass; // 0x1d80
    float PercentHealthRecoverdPerSecond; // 0x1d88
    float SecondsAfterCombatBeforeRecoveryStarts; // 0x1d8c
    bool DoDamageOnNextLanding; // 0x1d90
    bool UseDodgeCamera; // 0x1d91
    bool InHoverDrone; // 0x1d92
    bool bLookAtHips; // 0x1d93
    float cameraOffsetScale; // 0x1d94
    bool bLockOutPlayerCamControl; // 0x1d98
    bool bLockOutPlayerCamControlPitch; // 0x1d99
    char pad_1d9a[0xe];
    TArray<FGearItem> CachedGearPieces; // 0x1da8
    FGameplayProperty_Float OffenseStat; // 0x1db8
    FGameplayProperty_Float DefenseStat; // 0x1e48
    FGameplayProperty_Float CooldownStat; // 0x1ed8
    FGameplayProperty_Int InventorySizeModification; // 0x1f68
    FGameplayProperty_Float HiddenAfterTakedownTime; // 0x1fe8
    FGameplayProperty_Float StatDamageMultiplier; // 0x2078
    FGameplayProperty_Float StatDamageReduction; // 0x2108
    FGameplayProperty_Float StatCooldownReduction; // 0x2198
    FGameplayProperty_Float GainKnowledgeModifier; // 0x2228
    FGameplayProperty_Float GainExperienceModifier; // 0x22b8
    FGameplayProperty_Float CompanionBondingPointsModifier; // 0x2348
    FGameplayProperty_Float VendorPricesModifier; // 0x23d8
    FGameplayProperty_Float EnemyEvadeChanceModifier; // 0x2468
    FGameplayProperty_Float EnemyProtegoChanceModifier; // 0x24f8
    FGameplayProperty_Float EnemyAwarenessRateModifier; // 0x2588
    FGameplayProperty_Float CriticalSuccessChanceModifier; // 0x2618
    FGameplayProperty_Float LootDropCountModifier; // 0x26a8
    FGameplayProperty_Float LootDropRareChanceModifier; // 0x2738
    FGameplayProperty_Float StealRateModifier; // 0x27c8
    FGameplayProperty_Float CaptureToolRangeModifier; // 0x2858
    FGameplayProperty_Float CaptureToolDecayPenaltyModifier; // 0x28e8
    FGameplayProperty_Float CaptureToolCaptureSpeedModifier; // 0x2978
    FGameplayProperty_Float CreatureAgroFleeDistanceModifier; // 0x2a08
    FGameplayProperty_Float FocusModifier; // 0x2a98
    FGameplayProperty_Float FocusOnHitModifier; // 0x2b28
    FGameplayProperty_Float UseConsumeableForFreeChance; // 0x2bb8
    FGameplayProperty_Float UsePotionForFreeChance; // 0x2c48
    FGameplayProperty_Int ObscurePerkDistance; // 0x2cd8
    FGameplayProperty_Float MaliciousPerkMultiplier; // 0x2d58
    FGameplayProperty_Float ExpelliarmusLootDropChance; // 0x2de8
    FGameplayProperty_Int CombatAuxPerk; // 0x2e78
    FGameplayProperty_Float CombatAuxPerkDuration; // 0x2ef8
    FGameplayProperty_Float CombatAuxPerkCooldown; // 0x2f88
    char pad_3018[0x8];
    FGameplayProperty_Int DirectAIPerk; // 0x3020
    FGameplayProperty_Int ExtendedCompanionInventoryCapacity; // 0x30a0
    FGameplayProperty_Float PlantDamageModifier; // 0x3120
    FGameplayProperty_Float VenomousTentaculaPoisonDamageModifier; // 0x31b0
    FGameplayProperty_Float VenomousTentaculaWeakenEnemyDuration; // 0x3240
    FGameplayProperty_Float HealingCooldownGroupModifier; // 0x32d0
    char pad_3360[0x8];
    FGameplayProperty_Float CabbageVampireModifier; // 0x3368
    FGameplayProperty_Float PlantDamageFocus; // 0x33f8
    FGameplayProperty_Float PlayerStupifyPlantDamageModifier; // 0x3488
    FGameplayProperty_Float MandrakeBonusReactionTime; // 0x3518
    FGameplayProperty_Float PlantSummonHealthPercent; // 0x35a8
    FGameplayProperty_Float DifficultyAttackCooldownModifier; // 0x3638
    FGameplayProperty_Float DisillusionmentModifier; // 0x36c8
    FGameplayProperty_Float CrimeSceneInvestigationModifier; // 0x3758
    FGameplayProperty_Float SneakOScopeWindupModifier; // 0x37e8
    FGameplayProperty_Float SilencioRangeModifier; // 0x3878
    bool bAllowEdgeCheck; // 0x3908
    bool bInCombatMode; // 0x3909
    bool bInCombatModeDelayed; // 0x390a
    char pad_390b[0x5];
    AActor* FollowActor; // 0x3910
    int32_t CautiousMode; // 0x3918
    char pad_391c[0x4];
    FGameplayProperty_Int BonusAncientMagicBars; // 0x3920
    FGameplayProperty_Int BonusSpellLoadouts; // 0x39a0
    char pad_3a20[0x10];
    bool InStealthMode; // 0x3a30
    char pad_3a31[0x7];
    bool bIsInvisible; // 0x3a38
    bool InCinematic; // 0x3a39
    EWandLinkResult WandLinkResult; // 0x3a3a
    char pad_3a3b[0x1];
    bool bHoldingProtegoParry; // 0x3a3c
    char pad_3a3d[0x3];
    UClass* EnemyDetectionFXClass; // 0x3a40
    UAkAudioEvent* EnemyDetectionSFX; // 0x3a48
    UAkAudioEvent* EnemyAlertSFX; // 0x3a50
    UAkAudioEvent* EnemyAggroSFX; // 0x3a58
    char pad_3a60[0xe0];
    FVector DesiredFocusDirection; // 0x3b40
    bool bUseDesiredFocusDirection; // 0x3b4c
    char pad_3b4d[0x3];
    UVegetationInteractionComponent* VegetationInteraction; // 0x3b50
    char pad_3b58[0x18];
    UClass* LastCriticalFinisher; // 0x3b70
    float TimeoutLookAtCameraDirection; // 0x3b78
    char pad_3b7c[0x26c];
    UAkComponent* MotionListenerCameraOrientation; // 0x3de8
    UAkComponent* MotionListenerPlayerOrientation; // 0x3df0
    AActor* DamageDirectionActor; // 0x3df8
    char pad_3e00[0x60];
    static ABiped_Player* StaticClass();
    bool UseNewConversations();
    bool UseInventoryItemByName(FName InventoryObjectID, FName HolderID);
    void UseFinisherFocus();
    void UpdateFinsherAvailableFX();
    void UpdateDifficulty();
    void UpdateCamMove(float DeltaTime);
    bool ToadStatueTeleport(AActor* InDestinationActor, FVector InOffset);
    void TargetSighted(UAISense* Sense, AActor* Target);
    void TargetLost(UAISense* Sense, AActor* OldTarget);
    void TargetChanged(UAISense* Sense, AActor* NewTarget, AActor* OldTarget);
    void SuspendStoryModeArmor(bool bFlag);
    bool StopPlayerInput();
    void StopMove();
    void StationInteractionExitComplete__DelegateSignature();
    AActor* StartCriticalFinisher(AActor* PreferredTarget);
    void StartBulletTime(float Dilation, float Duration, bool DoFixedCam, float PlayerDilation, float EaseInDuration, float EaseOutDuration);
    void SpawnRockSlide(UClass* InActorClass, float ProjectForward);
    void SpawnItemMountCallback(UInventoryItemToolRecord* InToolRecord);
    AActor* SpawnFaceTarget(UClass* SpawnActorClass);
    bool ShadowBlinkTeleport(AActor* InBlinkTarget, float InBlinkDistanceFromTarget, bool bIsGate, bool bIsStealth, FVector& OutBlinkLocation, FRotator& OutBlinkRotation);
    void SetWandStyle(FName WandStyle);
    void SetWandBaseStyle(FName InWandBase);
    void SetUsingElderWand(bool bUsing);
    void SetStartingMovementTime(float InStartingMovementTime);
    static bool SetPlayerSocialHeritage(SocialHeritageStatusIDs NewHeritage);
    static bool SetPlayerGenderPronoun(EGenderPronoun NewGenderPronoun);
    void SetPhoenixCameraRotation(FRotator& DesiredRotation);
    void SetPhoenixCameraLookAt_TimeBased(FVector& LookAtPoint, float LookAtTime);
    void SetPhoenixCameraLookAt_ActorAndTime(AActor* LookAtActor, float LookAtTime);
    void SetPhoenixCameraLookAt_Actor(AActor* LookAtActor, float ScaleSpeed);
    void SetPhoenixCameraLookAt(FVector& LookAtPoint, float ScaleSpeed);
    void SetOverrideWandStyle(FName WandStyle);
    void SetMotionListener(UAkComponent* AkComponent, bool PlayerOrientation);
    void SetManagedAM(float Value);
    void SetLastSafeInteractLocation(FVector Location);
    void SetLastEdgeState(EEdgeState::Type InEdgeState);
    void SetInvulnerableTime(float invulnerableTime);
    void SetInvulnerable(bool bInInvulnerable);
    void SetInteractStickyTarget(bool bSet);
    void SetInLockOnMode(bool bInFlag);
    void SetHighlitActor(AActor* InHighlitActor);
    void SetFieldGuideHotSpot(AFieldGuideHotSpot* InFieldGuideHotSpot);
    void SetDodgeDirection();
    void SetDisableCombatPlantHideOnSuspendEnemies(bool bInVal);
    void SetCooldownRateScale(float RateScale);
    void SetCauseOfDeath(ECharacterDeathType InCauseOfDeath);
    static void SetCameraStyle(FName CameraStyle);
    void SetAutoTargetingDirection(FVector InWorldDirection);
    void SetAccessibilitySpellToggle(bool ToggleOn);
    AActor* Set_WandCast_TargetTrackerTargets(bool bIgnoreTargets, AActor* InTargetOverride, FVector InTargetOverrideWorldLocation);
    void SendCriticalMunitionImpactToTarget(AActor* TargetActor, FName UniqueTag, TArray<UInteractionArchitectAsset*>& MunitionDataAssets, FGameplayTagContainer& MunitionTagContainer, float Damage);
    bool SafeTeleportTo(FVector& DestLocation, FRotator& DestRotation, bool bIsATest, bool bNoCheck);
    bool RestorePlayerInput();
    void RestoreHealth();
    void RestartComboTimeout();
    void ResetStickTime();
    void ResetPhoenixCameraRotation(float ResetSpeed, UCurveFloat* ResetSpeedCurve);
    void ResetComboPoints();
    void ResetCloth();
    void RequestStick(float StickX, float StickY);
    void RepairOrientation();
    void ReleasePhoenixCameraLookAt();
    void RecordSafeLocation();
    void RecordSafeInteractLocation();
    bool QuickActionInteract(int32_t Index);
    void PutPlayerIntoCinematicState(bool bFlag, bool bAlterAbilities);
    void PushDisableStack(FName_GameLogicVarInt32 StackName);
    bool ProcessStick(float StickX, float StickY, float DeltaTime, UCurveFloat* DeadZoneCurve, UCurveFloat* SpeedCurve, UCurveFloat* SpeedGovernorCurve, float& WorldSpeed, FVector& WorldDirection, ECustomInterpType::Type InterpType, float InterpSpeed, float StickMagReductionDelayTimer);
    bool ProcessFollowTarget(AActor* InFollowActor, UCurveFloat* SpeedCurve, float& OutWorldSpeed, FVector& OutWorldDirection);
    AActor* PrepCriticalFinisher();
    void PopDisableStack(FName_GameLogicVarInt32 StackName);
    void PlayerGetOutOfBed(AStation* BedStation, UClass* PlayerBedAbility);
    bool PlacePlayerInBed(AStation*& BedStation, UClass*& PlayerBedAbility);
    bool PlaceOnGround(float DownDistance);
    void PauseMenuStart();
    void PauseComboTimeout();
    void OnTeleportTo__DelegateSignature(FVector PrevLocation, FRotator PrevRotation, bool bIsATest, bool bNoCheck, bool bSuccess);
    void OnSpellCooldownChanged__DelegateSignature(FName SpellName, float CooldownPct);
    void OnSaveGameLoaded();
    void OnQuickItemSlotted(UObject* InCaller, FName& ItemName);
    void OnNewGame(UObject* InCaller, bool bInIsIntro);
    void OnFocusChanged__DelegateSignature(AActor* Target, float InFocusChange);
    void OnCurtainRaised();
    void OnCharacterLoadComplete(AActor* Actor);
    void OnBlackboardInitialized(bool bSuccess);
    void OnAboutToSaveGame();
    void OnAbilityAnimationBecameActive();
    void NotifySucessfulBlock();
    void NotifyDodgeFinished();
    void LockOnCamFlick(UStickFlickWatcherRecord* InStickFlickWatcherRecord);
    void LockOnCameraMoving(bool bFlag);
    bool LoadInventoryItemByName(FName InventoryObjectID, FName HolderID);
    void LevelUp();
    void LEDDamageEffect(AActor* InActor, AActor* InInstigator, float InDamage, FHitResult& InHit);
    void LeafNodeSwitched();
    bool IsVenomousTentaculaAtMax();
    bool IsSwimming();
    bool IsPlayingIntro();
    bool IsPerfectRetaliate();
    bool IsManagedAMEnabled();
    bool IsLockedOn();
    bool IsInventoryItemHighlighted();
    bool IsInLockOnMode();
    bool IsHoverDroneActive();
    bool IsFinisherAvailable();
    bool IsCrawling();
    bool IsChompingCabbageAtMax();
    bool IsCameraMoving();
    bool IsAMPushAvailable();
    void InteractingWithActor(AActor* InActor);
    bool InstaUseInventoryItem();
    bool InLockOnMode();
    bool InCombatModeDelayed();
    bool InCombatMode();
    bool IgnoreRetaliateTarget(AActor* RetaliateTarget);
    void HighestEnemyChanged(AActor* InEnemyActor, int32_t InLevelDiff);
    void HideReticle(bool bHide);
    bool HasMandrakeTalent();
    void HandleVenomousTentaculaCountChanged();
    bool HandleDodgeUnblockable(AActor*& OutAttacker);
    void HandleChompingCabbageCountChanged();
    void HandleActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);
    FName GetWandStyle();
    FName GetWandBaseStyle();
    int32_t GetVenomousTentaculaMax();
    int32_t GetVenomousTentaculaCount();
    static ABiped_Player* GetTheBipedPlayer();
    UCurveFloat* GetSpeedGovernorCurve();
    UCurveFloat* GetSpeedCurve(bool& bIgnoreGovernor);
    static SocialHeritageStatusIDs GetPlayerSocialHeritage();
    float GetPlayerMovementDuration();
    static float GetPlayerLastUsedItemEffectiveness();
    static EGenderPronoun GetPlayerGenderPronoun();
    int32_t GetPlantCount(FString trackerName);
    int32_t GetOffenseStat();
    void GetMoveStickValues(float& X, float& Y);
    UAkComponent* GetMotionListenerPlayerOrientation();
    UAkComponent* GetMotionListenerCameraOrientation();
    float GetMaxFocus();
    FVector GetLastSafeLocation();
    FVector GetLastSafeInteractLocation();
    bool GetIsOnAMountOrInTransition();
    int32_t GetInventorySizeModification();
    float GetHiddenAfterTakedownTime();
    bool GetGameLogicBoolVariable(FName_GameLogicVarBool BoolVar);
    float GetFocusPercent();
    float GetFocus();
    float GetFinisherDamage();
    float GetExpectedDistanceFromTarget(bool bIgnoreTargets, AActor* InTargetOverride, bool& bFound, FVector& ToTarget);
    int32_t GetDefenseStat();
    float GetCurrentCriticalHealthFadeOutPercent();
    int32_t GetCooldownStat();
    float GetCooldownRateScale();
    float GetCooldownPercentByName(FName SpellName);
    float GetCooldownPercent(USpellToolRecord* InSpellToolRecord);
    int32_t GetConsecutiveEnemyHits();
    float GetCompanionsAtMaxLevel();
    float GetComboPoints();
    int32_t GetChompingCabbageMax();
    int32_t GetChompingCabbageCount();
    ECharacterDeathType GetCauseOfDeath();
    int32_t GetBonusSpellLoadouts();
    int32_t GetBonusAncientMagicBars();
    UBiped_AnimInstance* GetBipedAnimInstance();
    FVector GetBestLockOnActor_WorldLocation();
    FVector GetBestLockOnActor_ScreenLocation();
    FVector GetBestAutoTargetActor_WorldLocation();
    float GetBaseOffenseStat();
    float GetBaseDefenseStat();
    float GetBaseCooldownStat();
    bool GetAccessibilitySpellToggle();
    void FullyResetPhoenixCamera(float ResetSpeed, UCurveFloat* ResetSpeedCurve);
    void ForceEndDisillusionment();
    void EndCriticalFinisher(AActor* InTargetActor);
    void EndBulletTime(float EaseOutDuration);
    void EnableManagedAM(bool Enabled);
    static void DisablePlayerHealthRecovery(bool bDisable);
    void DisableCooldownPickups(bool bDisable);
    void DetectEdgeChange(FVector TestActorLocation, float TraceRadius, bool bSendEvents, bool bDebugDraw);
    static void DEBUG_SetGlobalTimeDilation(UObject* WorldContextObject, float TimeDilation);
    void DamageDirectionEffect(AActor* InActor, AActor* InInstigator, float InDamage, FHitResult& InHit);
    bool CreateLinkToAttackingActor(EEnemy_ParryButtonPressed ParryEventReason, bool& bOutDodgeWindow);
    void ComputeAimOffset(FName BoneName, float& Pitch, float& Yaw);
    void CognitionTargetPlayerAwareStateChanged(ENPC_TargetAwareState InAwareState);
    void CognitionTargetHealthChanged(AActor* Target, float InHealthChanged, bool bIndicateHUD);
    void ClearStick();
    void ClearOverrideWandStyle();
    void ClearInvulnerable();
    static void ClearCustomCameras();
    void ChangeManagedAM(float change);
    void CameraStickLastMovedChanged(bool InCameraStickMoved);
    float CalculateVendorPricesModifier(FVendorTransactionInfo& Info);
    float CalculateStealRateModifier();
    float CalculateSneakOScopeWindupModifier();
    float CalculateSilencioRangeModifier();
    float CalculatePlantDamageModifier(FName DbId);
    float CalculateMandrakeBonusReaction();
    FVector CalculateLookAtDirection();
    int32_t CalculateExtendedCompanionInventoryCapacity();
    bool AutoNavToTarget(AActor* InTarget, float InSpeed, float DistanceFromTarget);
    bool AllowStop(float InWorldSpeed, FVector InWorldDirection, float DeltaTime, float MinTime);
    bool AllowMove(float InWorldSpeed, FVector InWorldDirection, float DeltaTime, float MinTime);
    void AdjustFocusByName(FName Name, float ExternalFocusModifier);
    void AdjustFocus(float change, float ExternalFocusModifier);
    void AdjustCooldownsByCategory(float Time, ESpellCategory SpellCategory);
    void AdjustCooldown(FName SpellName, float Time, bool AddIfNoneExists);
    void AdjustComboPoints(EComboType ComboType, AActor* Target);
    static void AddCustomCamera(UCameraComponent* customCam, float weight);
}; // Size: 0x3e60
#pragma pack(pop)
