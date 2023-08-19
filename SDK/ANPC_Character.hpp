#pragma once
#include <cstdint>
#include "ABase_Character.hpp"
#include "EActor_LoadDBProcessingType.hpp"
#include "ECreatureMovementSpeed.hpp"
#include "ECreatureStance.hpp"
#include "EEnemy_CharacterState.hpp"
#include "ENPC_PathSpec.hpp"
#include "ENPC_PerceptionUpdate.hpp"
#include "ENPC_QBUpdate.hpp"
#include "ENPC_Type.hpp"
#include "EStandardManagedPriority.hpp"
#include "FEnemy_CharacterParams.hpp"
#include "FGameplayTag.hpp"
#include "FNPC_LOSTraceParams.hpp"
#include "FNPC_PathSpec.hpp"
#include "FNPC_ShowUI.hpp"
#include "FNPC_TargetPerceptionParams.hpp"
#include "FOdcPathSpec.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "FViewTargetTransitionParams.hpp"
class UCognitionComponent;
class APerceptionPointArea;
class UBehaviorTree;
class ANPC_Controller;
class UNPC_BTComponent;
class UBlackboardComponent;
struct FMunitionToInstigatorData;
class UDataTable;
class UBlackboardData;
class USocialAgentPathFollowerComponent;
class UNPC_Component;
class UCustomizableCharacterComponent;
class UCognitionStimuliSourceComponent;
class UObject;
class UActorComponent;
class UNPC_ReactionComponent;
class UCombativePlantComponent;
class UNPC_QBUpdateDataAsset;
class UAISense;
class UNPC_PerceptionUpdateDataAsset;
class UEnemy_TargetSenseAsset;
class UPerceptionIconData;
class UInteractionArchitectAsset;
class UCreature_MotionTable;
class AActor;
class UClass;
class APerformTasksForAI;
class UCapsuleComponent;
#pragma pack(push, 1)
class ANPC_Character : public ABase_Character {
public:
    char pad_1660[0x8];
    ENPC_Type NPCType; // 0x1668
    char pad_1669[0x3];
    FGameplayTag GroupTag; // 0x166c
    char pad_1674[0x4];
    UBehaviorTree* BehaviorTreePtr; // 0x1678
    UDataTable* BehaviorTreeDataTable; // 0x1680
    UBlackboardComponent* BlackboardComp; // 0x1688
    UBlackboardData* EmptyBlackboardAsset; // 0x1690
    UNPC_BTComponent* BTComponent; // 0x1698
    UCognitionComponent* CognitionComponent; // 0x16a0
    USocialAgentPathFollowerComponent* SocialAgentComponent; // 0x16a8
    UNPC_Component* NPCComponent; // 0x16b0
    UCustomizableCharacterComponent* CCComponent; // 0x16b8
    UCognitionStimuliSourceComponent* CogSourceComp; // 0x16c0
    UNPC_ReactionComponent* NPCReactionComponent; // 0x16c8
    UCombativePlantComponent* CombativePlantComponent; // 0x16d0
    int32_t QBUpdatesSupported; // 0x16d8
    int32_t PerceptionUpdatesSupported; // 0x16dc
    UNPC_QBUpdateDataAsset* QBUpdateDataAsset; // 0x16e0
    UNPC_PerceptionUpdateDataAsset* PerceptionUpdateDataAsset; // 0x16e8
    FEnemy_CharacterParams Params; // 0x16f0
    UEnemy_TargetSenseAsset* TargetSenseAsset; // 0x1b80
    bool bEnableBeacon; // 0x1b88
    char pad_1b89[0x7];
    FString BeaconIconName; // 0x1b90
    bool bAllowDBInstanceRedirect; // 0x1ba0
    bool bCreateScheduledEntity; // 0x1ba1
    bool bIsAScheduledEntity; // 0x1ba2
    bool bShowVulnerabilityIndicators; // 0x1ba3
    char pad_1ba4[0x4];
    FString OverrideScheduleTableName; // 0x1ba8
    FString DefaultScheduleName; // 0x1bb8
    FString DefaultWorldID; // 0x1bc8
    uint32_t PatrolPriority; // 0x1bd8
    bool bAddSocialScoreToPatrol; // 0x1bdc
    bool bUseNPCController; // 0x1bdd
    bool bCommitsACrimeWhenKilling; // 0x1bde
    bool bCanBePickpocketed; // 0x1bdf
    FNPC_ShowUI ShowUI; // 0x1be0
    float DamageDisplayHeight; // 0x1bec
    int32_t DamageDisplayExtraOffset; // 0x1bf0
    ENPC_PathSpec DefaultPathSpec; // 0x1bf4
    char pad_1bf5[0x3];
    TArray<FNPC_PathSpec> PathSpecList; // 0x1bf8
    FNPC_LOSTraceParams TargetLOSParams; // 0x1c08
    FNPC_LOSTraceParams CrimeSceneLOSParams; // 0x1c2c
    FNPC_LOSTraceParams AttackLOSParams; // 0x1c50
    FNPC_LOSTraceParams WaypointLOSParams; // 0x1c74
    FNPC_LOSTraceParams DebugLOSParams; // 0x1c98
    float LOSRadius; // 0x1cbc
    char pad_1cc0[0x28];
    float DeathEffectDelayTime; // 0x1ce8
    bool bDestroyOnDeath; // 0x1cec
    bool bDissolveOnDeath; // 0x1ced
    char pad_1cee[0x2];
    float InstantDissolveChance; // 0x1cf0
    float DissolveDelayMin; // 0x1cf4
    float DissolveDelayMax; // 0x1cf8
    float DissolveDestroyDelay; // 0x1cfc
    bool bFadeOnDeath; // 0x1d00
    bool bDoNewDeathFade; // 0x1d01
    char pad_1d02[0x2];
    float FadeDelay; // 0x1d04
    float FadeDuration; // 0x1d08
    bool bDoDeathCamOnDeath; // 0x1d0c
    char pad_1d0d[0x3];
    FViewTargetTransitionParams TransitionParams; // 0x1d10
    float DeathCamDelay; // 0x1d20
    float DeathCamDuration; // 0x1d24
    bool bDoBulletTimeOnDeath; // 0x1d28
    char pad_1d29[0x3];
    float BulletTimeDilation; // 0x1d2c
    float BulletTimeDelay; // 0x1d30
    float BulletTimeDuration; // 0x1d34
    bool bHaltDeathCamOnBulletTimeStart; // 0x1d38
    char pad_1d39[0x3];
    int32_t StealAmmount; // 0x1d3c
    int32_t InventoryKnuts; // 0x1d40
    float FromNPCDamageMult; // 0x1d44
    float FromPlayerDamageMult; // 0x1d48
    float ToPlayerDamageMult; // 0x1d4c
    bool bAllowReleaseOnce; // 0x1d50
    char pad_1d51[0x3];
    FNPC_TargetPerceptionParams TargetPerceptionParams; // 0x1d54
    char pad_1d90[0x10];
    bool bOverrideCharacterLook; // 0x1da0
    char pad_1da1[0x3];
    FName OverrideCharacterID; // 0x1da4
    bool bOverrideVoice; // 0x1dac
    char pad_1dad[0x3];
    FName OverrideVoiceID; // 0x1db0
    char pad_1db8[0x158];
    ANPC_Controller* NPCControllerPtr; // 0x1f10
    char pad_1f18[0x200];
    UPerceptionIconData* MinimapPerceptionData; // 0x2118
    char pad_2120[0x10];
    UInteractionArchitectAsset* DefaultMunition; // 0x2130
    FVariantMapHandle NPCVariantMapHandle; // 0x2138
    char pad_213c[0x1a];
    ECreatureStance DesiredCreatureStance; // 0x2156
    ECreatureStance CurrentCreatureStance; // 0x2157
    ECreatureStance NextCreatureStance; // 0x2158
    ECreatureMovementSpeed CurrentCreatureGait; // 0x2159
    ECreatureMovementSpeed NextCreatureGait; // 0x215a
    bool bInCreatureIdleVariation; // 0x215b
    char pad_215c[0x4];
    UCreature_MotionTable* MotionTable; // 0x2160
    float MoveToStopDistanceTune; // 0x2168
    bool bDisableCreatureTurnNavChecks; // 0x216c
    char pad_216d[0x13];
    static ANPC_Character* StaticClass();
    bool WillAttackPlayer();
    void Unfreeze();
    void TargetSighted(UAISense* Sense, AActor* Target);
    void TargetLost(UAISense* Sense, AActor* OldTarget);
    void TargetChanged(UAISense* Sense, AActor* NewTarget, AActor* OldTarget);
    void StopDeathCam();
    void StopBulletTime();
    static void StartSuspendEnemies(bool bSuspended, EStandardManagedPriority Priority, UObject* Provider);
    void StartSettingSuspendAiState(bool bSuspended, EStandardManagedPriority Priority, UObject* Provider);
    void StartFadeOut();
    void StartFadeIn();
    void StartDissolve();
    void StartDeathCam();
    void StartCustomAbility(UClass* InAbility, bool bUseCustomPause, bool bClearPauseWhenFinished, bool bPreventReactions, bool bShouldReenableReactions);
    void StartChildSpawnFX(FTransform inSpawnLoc);
    void StartBulletTime();
    bool ShouldShowName();
    bool ShouldShowHealthBar();
    bool ShouldShowBadge();
    void SetupBehaviorTreeForced();
    void SetUnawareState(EEnemy_CharacterState InState);
    void SetTargetAimSense();
    void SetStayInVolumeParams(float inStayInRadius, float inStayInVolumeTeleportTimeout, bool inStayInVolumeOffNavTeleport);
    void SetShowPerceptionIndicator(bool bInShow);
    void SetShowName(bool bInShow);
    void SetShowHealthBar(bool bInShow);
    void SetShowDamage(bool bInShow);
    void SetShowCallout(bool bInShow);
    void SetShowBadge(bool bInShow);
    void SetNewDefaultPerformTask(APerformTasksForAI* NewDefaultTrigger, bool bForceStart, bool bLoopWhenFinished);
    void SetForcedPlayerPerception(bool InCanPerceive, bool bKeepAlwaysOn);
    void SetDamageToPlayerMult(float InScale);
    void SetDamageFromPlayerMult(float InScale);
    void SetDamageFromNPCMult(float InScale);
    void SetCanPerceivePlayer(bool bShouldExclude);
    void SetAlwaysPerceiveAsTarget(bool InFlag);
    void SetAllowTargetAimSense(bool InAllow);
    void RestoreStayInVolumeParamDefaults();
    void RemoveStayInVolume(APerceptionPointArea* InArea);
    void RemoveQBUpdateSupported(ENPC_QBUpdate InQBUpdate);
    void RemoveAllStayInVolumes();
    void ReleaseIntroductionCharacter(AActor* InActor);
    void Release(UObject* i_caller);
    void RagdollImpact();
    void ProtectIntroductionCharacter(AActor* InActor);
    void OnStationOnFinishedExit();
    void OnStationOnFinishedEnter();
    void OnPTTaskComplete(int32_t InTaskIndex);
    void OnPTComplete(APerformTasksForAI* InPTPtr);
    void OnChildSpawnFX(FTransform inSpawnLoc);
    void OnCharacterDBLoadCompleted(AActor* LoadActor, EActor_LoadDBProcessingType LoadType);
    static bool NPCWillAttackPlayer(AActor* InActorPtr);
    static FNPC_TargetPerceptionParams NPCGetTargetPerceptionParams(AActor* InActorPtr);
    static ANPC_Character* NPCEnableTimedAttackPerception(AActor* InActorPtr, FName InTeamName, float InTime, AActor* InTarget);
    static ANPC_Character* NPCEnableNotifyPerception(AActor* InActorPtr);
    static ANPC_Character* NPCEnableCrimeScenePerception(AActor* InActorPtr);
    static ANPC_Character* NPCEnableAttackPerception(AActor* InActorPtr, FName InTeamName);
    static void NPCDisableNotifyPerception(AActor* InActorPtr);
    static void NPCDisableCrimeScenePerception(AActor* InActorPtr);
    static void NPCDisableAttackPerception(AActor* InActorPtr);
    void NewDeathFade();
    void MunitionToInstigator(UObject* i_caller, FMunitionToInstigatorData& InMunInstData);
    void Kill();
    bool IsScheduledEntity();
    static bool IsRootComponent(UActorComponent* InComponent);
    bool IsReleased();
    bool IsQBUpdateSupported(ENPC_QBUpdate InQBUpdate);
    bool IsPerceptionUpdateSupported(ENPC_PerceptionUpdate InPerceptionUpdate);
    bool IsInCreatureAnimationTransition();
    bool IsInCreatureAnimationStanceTransition();
    bool IsInCreatureAnimationGaitTransition();
    bool IsFrozen();
    bool IsAlive();
    bool IsAiSuspended();
    bool HasTaskTag(FGameplayTag InTaskTag);
    void HandleRagdollImpact(UObject* i_caller);
    FNPC_TargetPerceptionParams GetTargetPerceptionParams();
    bool GetShowUIPerceptinCone();
    FNPC_ShowUI GetShowUI();
    bool GetShowPerceptionIndicator();
    bool GetShowName();
    bool GetShowHealthBar();
    bool GetShowDamage();
    bool GetShowCallout();
    bool GetShowBadge();
    ENPC_Type GetNPCType();
    FOdcPathSpec GetNPCPathSpec(ENPC_PathSpec InPathSpec);
    UCapsuleComponent* GetNpcCapsuleComponent();
    FVector GetImpactLocation();
    FVector GetImpactDirection();
    FEnemy_CharacterParams GetCharacterParams();
    bool GetAlwaysPerceiveAsTarget();
    void Freeze();
    void ForceScheduledEntityState();
    void ForceProtego(bool inProtegoOnOff);
    static void FinishSuspendEnemies(EStandardManagedPriority Priority, UObject* Provider);
    void FinishSettingSuspendAiState(EStandardManagedPriority Priority, UObject* Provider);
    void EndCustomAbility();
    void EnablePerception(UObject* i_caller);
    void EnableMinimapPerceptionCone(ANPC_Character* NPCCharacter);
    void EnableCallout(UObject* i_caller);
    void EnableBeacon(UObject* i_caller);
    void DisablePerception(UObject* i_caller);
    void DisableMinimapPerceptionCone(ANPC_Character* NPCCharacter);
    void DisableCallout(UObject* i_caller);
    void DisableBeacon(UObject* i_caller);
    void DestroyOnDeath();
    void DeathFxComplete();
    void DeathExplode();
    void DeathDissolve();
    void ClearForceScheduledEntityState();
    void CharacterDiedEvent();
    bool CanBePickpocketed();
    void BroadcastNPC_AnimEvent(FName InName);
    void AssignNPCLevelWRTPlayerLevel(int32_t ExpLevel, bool bIndicateHUD);
    void ApplyTargetSenseAsset(UEnemy_TargetSenseAsset* InTargetSenseAsset);
    void ApplySpawnFX();
    void ApplyReplicaFX();
    void ApplyNPCPathSpecDirect(FOdcPathSpec InPathSpec);
    void ApplyNPCPathSpec(ENPC_PathSpec InPathSpec);
    void ApplyCharacterFX();
    void AddStayInVolume(APerceptionPointArea* InArea);
    void AddQBUpdateSupported(ENPC_QBUpdate InQBUpdate);
    void AddPerceptionUpdateSupported(ENPC_PerceptionUpdate InPerceptionUpdate);
}; // Size: 0x2180
#pragma pack(pop)
