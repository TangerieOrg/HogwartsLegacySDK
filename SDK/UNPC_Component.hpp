#pragma once
#include <cstdint>
#include "EEnemyAIAction.hpp"
#include "EEnemyAIAnimState.hpp"
#include "EEnemyAIState.hpp"
#include "EEnemy_Ability.hpp"
#include "EEnemy_AnimMainState.hpp"
#include "EEnemy_BBKey.hpp"
#include "EEnemy_InitTreeTimeoutAction.hpp"
#include "EEnemy_ParryButtonPressed.hpp"
#include "EEnemy_TargetType.hpp"
#include "EMovementMode.hpp"
#include "ENPC_AbilityChannel.hpp"
#include "ENPC_CrouchContext.hpp"
#include "ENPC_Mobility.hpp"
#include "ENPC_MoveDataState.hpp"
#include "ENPC_SidekickUpdateState.hpp"
#include "ENPC_Spawn.hpp"
#include "ENPC_SpawnState.hpp"
#include "ENPC_TargetAwareState.hpp"
#include "ENPC_Tether.hpp"
#include "ENPC_WaterResponse.hpp"
#include "EPathExistanceQueryType\Type.hpp"
#include "EPathFollowingRequestResult\Type.hpp"
#include "FEnemy_LimitAttackOnTargetData.hpp"
#include "FEnemy_ParryParamData.hpp"
#include "FFinisherData.hpp"
#include "FFinisherRequirementData.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FNPC_AbilityChannel.hpp"
#include "FNPC_AbilityChannelMap.hpp"
#include "FNPC_ActionParams.hpp"
#include "FNPC_LosingTarget.hpp"
#include "FNPC_MobilityDataContainer.hpp"
#include "FNPC_MobilityTransition.hpp"
#include "FNPC_MobilityUberData.hpp"
#include "FNPC_NavPath.hpp"
#include "FNPC_SpawnData.hpp"
#include "FNPC_SpawnLocationMap.hpp"
#include "FNPC_TurnAssistDataContainer.hpp"
#include "FNpcTimers.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
class UInteractionArchitectAsset;
class UNPC_MobilityDataContainerAsset;
class UClass;
class UNPC_AbilityTaskScratchPad;
class USpellToolRecord;
class ANPC_Character;
class URagdollControlComponent;
class UNPC_PerceptionChoice;
class ANPC_Controller;
class UBehaviorTreeComponent;
class UBlackboardComponent;
class UDynamicBranchComponent;
class UNPC_ReactionComponent;
class UCapsuleComponent;
class UAnimationArchitectComponent;
class UCurveFloat;
class UMeshComponent;
class UAmbulatory_MovementComponent;
struct FQueueReactionParams;
class UCustomizableCharacterComponent;
class UAblAbilityComponent;
class AActor;
struct FNPC_JumpSplineData;
class ANPC_Spline;
class UNPC_AnimInstance;
class AAIController;
class UAblReactionComponent;
class UAblReactionData;
class ACharacter;
class USkeletalMeshComponent;
class UAnimInstance;
#pragma pack(push, 1)
class UNPC_Component : public UActorComponent {
public:
    char pad_c8[0x8];
    UInteractionArchitectAsset* DefaultMunitionInteractionArchitectAsset; // 0xd0
    bool bEnableAnimationTickOptimization; // 0xd8
    bool bEnableShutdownOptimization; // 0xd9
    char pad_da[0x2];
    float FootprintSize; // 0xdc
    bool bDestroyOnDeath; // 0xe0
    bool bSidekick; // 0xe1
    bool bAllowBackLight; // 0xe2
    char pad_e3[0x5];
    TArray<FNPC_SpawnLocationMap> SpawnLocationMap; // 0xe8
    ENPC_Spawn SpawnType; // 0xf8
    bool bPerceptionCanInterruptSpawn; // 0xf9
    char pad_fa[0x6];
    UInteractionArchitectAsset* SpawnInteractionArchitectAsset; // 0x100
    TArray<FNPC_SpawnData> SpawnList; // 0x108
    float SpawnCollisionRadius; // 0x118
    float SpawnCollisionImpulse; // 0x11c
    float SpawnCollisionScaledForce; // 0x120
    char pad_124[0x4];
    TArray<FNPC_AbilityChannelMap> AbilityChannelMap; // 0x128
    ENPC_AbilityChannel DefaultChannel; // 0x138
    char pad_139[0x7];
    TArray<FNPC_AbilityChannel> AbilityChannelList; // 0x140
    UClass* IdleAbility; // 0x150
    UClass* WanderIdleAbility; // 0x158
    UClass* SpawnStartAbility; // 0x160
    UClass* MoveAbility; // 0x168
    UClass* MoveStopAbility; // 0x170
    UClass* MoveStartAbility; // 0x178
    UClass* MovePivotAbility; // 0x180
    UClass* SecondaryAttackAbility; // 0x188
    UClass* HealAttackAbility; // 0x190
    UClass* ReparoAttackAbility; // 0x198
    UClass* JumpSplineAbility; // 0x1a0
    UClass* CustomSpellAbility; // 0x1a8
    UClass* NeutralEmotionAbility; // 0x1b0
    UClass* FollowSplineAbility; // 0x1b8
    UClass* FollowSplineIdleAbility; // 0x1c0
    UClass* WoundedKneelAbility; // 0x1c8
    UClass* DazedAbility; // 0x1d0
    UClass* DeadAbility; // 0x1d8
    UClass* DisillusionmentAbilityEnter; // 0x1e0
    UClass* DisillusionmentAbilityExit; // 0x1e8
    bool bIdleTimeoutFailsafe; // 0x1f0
    char pad_1f1[0x7];
    USpellToolRecord* HealSpellToolRecord; // 0x1f8
    USpellToolRecord* ReparoSpellToolRecord; // 0x200
    USpellToolRecord* CustomSpellToolRecord; // 0x208
    USpellToolRecord* DisillusionmentSpellToolRecord; // 0x210
    TArray<FNPC_TurnAssistDataContainer> TurnAssistDataContainer; // 0x218
    TArray<FNPC_MobilityUberData> MobilityUberDataArray; // 0x228
    TArray<FNPC_MobilityTransition> MobilityTransitionArray; // 0x238
    TArray<UNPC_MobilityDataContainerAsset*> MobilityDataContainerAsset; // 0x248
    TArray<FNPC_MobilityDataContainer> MobilityDataContainer; // 0x258
    bool bRegisterAsTargetSource; // 0x268
    char pad_269[0x7];
    UNPC_PerceptionChoice* PerceptionChoice; // 0x270
    bool bRandomizeScaleOnSpawn; // 0x278
    char pad_279[0x3];
    float MinScale; // 0x27c
    float MaxScale; // 0x280
    float OppositeDirectionFleeValidDistance; // 0x284
    bool bEnterOnFireState; // 0x288
    bool bUseOnFireStateBehavior; // 0x289
    bool bBroadcastAudioHeartbeat; // 0x28a
    char pad_28b[0x1];
    float AudioHeartbeatDist; // 0x28c
    bool bDoDirectionAvoidance; // 0x290
    char pad_291[0x3];
    float RepulsorRadiusMultiplier; // 0x294
    float RepulsorRadiusCushionMultiplier; // 0x298
    float RepulsorDetectionRadiusMultiplier; // 0x29c
    float ResolveBlockedAllowableAngle; // 0x2a0
    bool bUseDirectionFilter; // 0x2a4
    char pad_2a5[0x3];
    float DirectionFilterRate; // 0x2a8
    float DirectionFilterRateMin; // 0x2ac
    float DirectionFilterRateMax; // 0x2b0
    float DirectionAvoidanceInterval; // 0x2b4
    float AvoidanceSlowdownScale; // 0x2b8
    FGameplayTag MoveTag; // 0x2bc
    FGameplayTag MoveStopTag; // 0x2c4
    FGameplayTag MoveStartTag; // 0x2cc
    FGameplayTag MovePivotTag; // 0x2d4
    float MovePivotMinAngle; // 0x2dc
    float OverrideNavRadius; // 0x2e0
    float NavFitRadius; // 0x2e4
    float NavFitVerticalRadius; // 0x2e8
    float NavFitMoveTolerance; // 0x2ec
    float NavReachableDownRadius; // 0x2f0
    float NavReachableUpRadius; // 0x2f4
    float NavReachableRadius; // 0x2f8
    ENPC_WaterResponse WaterResponse; // 0x2fc
    char pad_2fd[0x3];
    float LOSRadius; // 0x300
    float AlertUIRate; // 0x304
    float TASSenseHoldTime; // 0x308
    FGameplayTag DeadGameplayTag; // 0x30c
    char pad_314[0x4];
    FGameplayTagContainer NPCTypeTagContainer; // 0x318
    TArray<FNPC_LosingTarget> LosingTargetList; // 0x338
    bool bUseNavigator; // 0x348
    char pad_349[0x7];
    UNPC_AbilityTaskScratchPad* AbilityScratchPad; // 0x350
    bool bGlobalVulnerability; // 0x358
    bool bUseExpliciteProtegoStart; // 0x359
    bool bProtegoStaysUpWhileAttacking; // 0x35a
    char pad_35b[0x1];
    float ProtegoCooldownTime; // 0x35c
    float ProtegoBrokeTime; // 0x360
    float ProtegoWaitTime; // 0x364
    float ProtegoOnOffEffectAdjustment; // 0x368
    int32_t VulnerableAbilities; // 0x36c
    FEnemy_ParryParamData ParryParamData; // 0x370
    FEnemy_LimitAttackOnTargetData LimitAttackOnTargetParamData; // 0x380
    char pad_388[0x78];
    bool bHeadTrackToAttackTarget; // 0x400
    char pad_401[0xd3];
    float ReactionParrySuccessTimeDilation; // 0x4d4
    float ReactionParrySuccessTimeDilationDuration; // 0x4d8
    char pad_4dc[0xc];
    URagdollControlComponent* RagdollControlComp; // 0x4e8
    char pad_4f0[0xba8];
    ANPC_Controller* UpdateNPCControllerPtr; // 0x1098
    UBlackboardComponent* m_pBlackboardComp; // 0x10a0
    UDynamicBranchComponent* DynamicBranchComp; // 0x10a8
    UNPC_ReactionComponent* NPCReactionComponent; // 0x10b0
    UCapsuleComponent* CapsuleComp; // 0x10b8
    UMeshComponent* MeshComponent; // 0x10c0
    UAmbulatory_MovementComponent* AmbulatoryMoveComp; // 0x10c8
    UCustomizableCharacterComponent* CCComponent; // 0x10d0
    UAnimationArchitectComponent* AAComponent; // 0x10d8
    UAblAbilityComponent* AbilityComponent; // 0x10e0
    UBehaviorTreeComponent* BehaviorTreeComponent; // 0x10e8
    char pad_10f0[0x5e7];
    EEnemyAIState DefaultState; // 0x16d7
    bool bSetLockedStateForScheduledEntityMode; // 0x16d8
    char pad_16d9[0x32f];
    UClass* EmoDefaultAbility; // 0x1a08
    bool bCriticalFinisherAllowTimeDilation; // 0x1a10
    char pad_1a11[0x3f];
    TArray<FFinisherRequirementData> FinisherData; // 0x1a50
    bool bFinisherDisabled; // 0x1a60
    char pad_1a61[0x7];
    FFinisherData DebugFinisher; // 0x1a68
    char pad_1ab8[0x2f8];
    FNpcTimers NpcTimers; // 0x1db0
    char pad_1e50[0x70];
    static UNPC_Component* StaticClass();
    bool WasActionASuccess(EEnemyAIAction InAction);
    bool UpdateTetheredLoc(FVector& OutLoc, bool& OutDone);
    void UnchainAction(EEnemyAIAction ChainFromAction);
    bool TreeWaitUpdate(float DeltaTime);
    FVector TetheredWanderLocation();
    void StopSpeedScaleAdjust();
    void StopMove();
    void StopActionOnUpdate(EEnemyAIAction InAction);
    void StopAction(EEnemyAIAction InAction, bool bSuccess, bool bTimeout);
    void StartupAbility();
    void StartSpeedScaleAdjust(float InScale, float DurationSeconds);
    void StartLoadingFinisherAbilities();
    void StartDynamicBranch(EEnemy_Ability InAbility, EEnemy_Ability InNextAbility, bool bImmediate);
    void StartCustomPause(bool bCleanupWhenCustomAbilityFinished);
    bool StartAction(EEnemyAIAction InAction, float Timeout);
    bool SidekickUpdateStateUpdate(ENPC_SidekickUpdateState InUpdateState, float DeltaTime);
    void SetWanderStartLocation(FVector Location);
    void SetTargetSightedEnable(bool bEnable);
    void SetTargetLocationTurnInPlace(FVector InTargetLoc_TurnInPlace);
    void SetTarget(AActor* pTarget);
    void SetStealthContext();
    void SetSpeedScale(float InScale);
    void SetSpeedChooserScale(float InScale);
    void SetSpeed(float InSpeed);
    void SetSpawnAnimOffset(float InOffset);
    void SetScale(float Scale);
    void SetOverrideMobility(ENPC_Mobility InMobility);
    void SetOnStairs();
    void SetOnSlope();
    void SetOnFire();
    void SetMoveGoal(FVector InGoal, bool bNavReachable);
    void SetJumpSplineData(FNPC_JumpSplineData& InData);
    void SetJumpSpline(ANPC_Spline* InSplinePtr);
    void SetInvincibility(bool InIsInvincible);
    void SetForcedPerceptionTarget(AActor* InTargetPtr, ENPC_TargetAwareState InTAS, float InTime);
    void SetFleeTargetPos(FVector InPos);
    void SetFireExtinguished();
    void SetFinisherTagFilter(FGameplayTag InTag);
    void SetCustomPauseExitConditions(bool bCleanupWhenAlert, bool CleanupWhenAttack, AActor* TargetToAllow);
    void SetCrouching();
    void SetCrouchContextFlag(ENPC_CrouchContext CrouchContext);
    void SetCharred();
    void SetCharacterRootMotionScale(float RootMotionScale);
    void SetBlackboardKey(EEnemy_BBKey InKey, bool bSet);
    void SetBlackboardFloat(FName& InBBName, float InValue);
    void SetBlackboardBool(FName& InBBName, bool InValue);
    void SetBlackboard(UBlackboardComponent* pBlackboardComp);
    void SetAttackCustomFlag(bool FlagIsSet);
    void SetAnimState(EEnemyAIAnimState InAnimState);
    void SetAnimSpawnState(ENPC_SpawnState InSpawnState);
    void SetAnimMainState(EEnemy_AnimMainState InAnimState);
    void SetActionParams(FNPC_ActionParams InParams);
    void SetAction(EEnemyAIAction InAction, bool bSet);
    void SetAbilityScratchpadVelocity(FVector InVelocity);
    void SetAbilityActive(EEnemy_Ability InState, bool bActive);
    int32_t PickRandomPath(AAIController* AIOwner, TArray<FVector> Targets, float TopPercent, EPathExistanceQueryType::Type PathQueryType, UClass* FilterClass, bool AllowPartialPaths, FVector& outTarget);
    bool PathExists(AAIController* AIOwner, FVector Target, EPathExistanceQueryType::Type PathQueryType, UClass* FilterClass, bool AllowPartialPaths);
    void ParryEvent(EEnemy_ParryButtonPressed InButtonPressed);
    void OnStationOnFinishedExit();
    void OnStationOnFinishedEnter();
    void OnReactionReceived(FQueueReactionParams& ReactionParams, UAblReactionComponent* ReactionComponent);
    void OnReactionQueued(UAblReactionData* ReactionData, UAblReactionComponent* ReactionComponent);
    void OnReactionEnd(UAblReactionData* ReactionData, UAblReactionComponent* ReactionComponent);
    void OnMovementModeChange(ACharacter* Character, EMovementMode PrevMovementMode, uint8_t PreviousCustomMode);
    void OnLoadComplete(AActor* LoadedActor);
    void OnExitAliveVolume(AActor* InActor);
    void OnEnterKillVolume(AActor* InActor);
    void OnDestroyed(AActor* Actor);
    void NPCRemoveFromManager(AActor* InActorPtr);
    void NPCAddToManager(AActor* InActorPtr);
    bool NeedsStayInVolumeConstrain(FVector& InLoc);
    bool MoveToOnFire(float DeltaTime);
    bool MoveToLocation(FVector Loc, UCurveFloat* CurveFloatPtr, float InterpSpeed, float DeltaTime, bool bStopOnOverlap);
    EPathFollowingRequestResult::Type MoveTo(FVector Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, UClass* FilterClass, bool bAllowPartialPath);
    void Kill();
    void K2_SetTargetableByPlayer(bool bTargetableByPlayer);
    void JumpSplineStart();
    bool IsVulnerable();
    bool IsTargetSightedEnabled();
    bool IsSwimming();
    bool IsStationary();
    bool IsSpawnFinished();
    bool IsReactionActive();
    bool IsOnStairs();
    bool IsOnSlope();
    bool IsOnFire();
    bool IsNearDeathKneeling();
    bool IsMoveDone();
    bool IsJumpSplineDone();
    bool IsInvincible();
    bool IsInStealth();
    bool IsInStation();
    bool IsInjured();
    bool IsFlying();
    bool IsDead();
    bool IsCrouching();
    bool IsCompanion();
    bool IsCharred();
    bool IsBlind();
    bool IsActionDone(EEnemyAIAction InAction);
    bool IsActionActive(EEnemyAIAction InAction);
    bool IsAbilityVulnerable(EEnemy_Ability InAbility);
    bool IsAbilitySupported(EEnemy_Ability InAbility);
    bool IsAbilityActive(EEnemy_Ability InState);
    FGameplayTagContainer InsertIATagsToSpawnData(ENPC_Spawn InSpawnType, FGameplayTagContainer InTagContainer);
    void InitTreeWait(FGameplayTag& TreeTag, TArray<EEnemy_Ability>& InAbilityList, float Timeout, EEnemy_InitTreeTimeoutAction TimeoutAction);
    void InitTetheredLoc(float InTetherDist, FVector& InStartVec, bool bUseStartVec, float InMaxAngle, int32_t InDivisions, bool bInApplyTether, ENPC_Tether InTetherType, float randomDistFloor, float randomDistCeiling);
    bool InitMoveToOnFire();
    bool InitMoveToLocation(FVector DestinationLoc, float Timeout, ENPC_Mobility InMobility, bool bOverrideMobility);
    bool InitMoveToFleePos(FVector InPos, float Timeout);
    void InitMoveData(ENPC_MoveDataState InState, AActor* TargetPtr, float Timeout);
    bool HasSightedTarget();
    bool HasFinisherWithRunningRequirementsMet(AActor* Attacker);
    float GetYaw();
    FVector GetWanderStartLocation();
    bool GetTreeWaitResult();
    FVector GetTetheredLoc(float InDist, FVector& InStartVec, bool bUseStartVec, float InMaxAngle, int32_t InDivisions, bool bInApplyTether, ENPC_Tether InTetherType, float randomDistFloor, float randomDistCeiling);
    EEnemy_TargetType GetTargetType();
    float GetTargetLookatApha();
    AActor* GetTarget();
    float GetSpeedScale();
    float GetSpeedChooserScale();
    ENPC_SidekickUpdateState GetSidekickUpdateState();
    float GetScale();
    UClass* GetPlayerCriticalFinisherAbility(FGameplayTagContainer& MunitionsTags);
    UClass* GetPlayerCriticalDamageAbility(FGameplayTagContainer& MunitionsTags);
    bool GetPerceptionSuspended();
    bool GetPerceptionEnabled();
    ENPC_Mobility GetOverrideMobility();
    bool GetOnGround();
    UNPC_AnimInstance* GetNPCAnimInstance();
    FVector GetMyLoc();
    FVector GetMyGroundLoc();
    bool GetMoveToLocationSuccess();
    EPathFollowingRequestResult::Type GetMoveToLocationResult();
    float GetMoveTolerance();
    bool GetMoveToDone();
    bool GetMoveDataSuccess();
    ENPC_Mobility GetMobility();
    USkeletalMeshComponent* GetMeshComponent();
    ENPC_TargetAwareState GetKilledTAS();
    AActor* GetForcedPerceptionTarget();
    FVector GetFleeTargetPos();
    FVector GetFleeDistLocation();
    EEnemyAIAction GetChainedAction(EEnemyAIAction InAction);
    float GetCapsuleRadius();
    float GetCapsuleHalfHeight();
    FVector GetAUXRecoverLoc();
    EEnemyAIAnimState GetAnimState();
    ENPC_SpawnState GetAnimSpawnState();
    EEnemy_AnimMainState GetAnimMainState();
    UAnimInstance* GetAnimInstance();
    EEnemy_Ability GetActiveAbility();
    bool GetAction(EEnemyAIAction InAction);
    UNPC_AbilityTaskScratchPad* GetAbilityScratchpad();
    void ForcePerceptionUpdate();
    void FinishReactionParrySuccessTimeDilation();
    FVector FindValidLocation(FVector InPos);
    bool ExecuteAbility(UClass* InAbilityPtr, ENPC_AbilityChannel InChannel);
    void EnterTree(FGameplayTag& TreeTag, bool InAbortMove);
    void EndCustomPause();
    void EnablePerception(bool Enable);
    void EnableAbilityChannel(ENPC_AbilityChannel InChannel, bool bInEnable);
    bool CriticalFinisherAllowTimeDilation();
    static FNPC_NavPath CreateNavPath(AAIController* InControllerPtr, FVector& InStartLoc, FVector& InEndLoc, float InToleranceRadius);
    void ClearStealthContext();
    void ClearCrouchContextFlag(ENPC_CrouchContext CrouchContext);
    void ChainAction(EEnemyAIAction ChainFromAction, EEnemyAIAction ChainToAction);
    float CalcFleeMoveToLocationTime(FVector InDestination);
    void BroadcastNPC_AnimEvent(FName InName);
    AActor* AttemptToFindUniqueOwnerForFollower(UClass* OwnerClass, ANPC_Character* InFollower, float FindDistance);
    AActor* AttemptToFindPackOwnerForFollower(ANPC_Character* InFollower, float FindDistance);
    void ActionUpdate(EEnemyAIAction InAction, float DeltaTime);
    void AbortAction(EEnemyAIAction InAction);
}; // Size: 0x1ec0
#pragma pack(pop)
