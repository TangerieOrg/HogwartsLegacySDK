#pragma once
#include <cstdint>
#include "EBossStates.hpp"
#include "EGameEvent_Intensity.hpp"
#include "ENPC_CombatThreatLevel.hpp"
#include "ENPC_ManagerType.hpp"
#include "FAssetTrackerData.hpp"
#include "FBossFightData.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FPostDeath_Params.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class UEnemyWeapon_Manager;
struct FEnemy_ParryWindowSetupData;
class ANPC_Character;
class AActor;
class AMunitionType_Base;
class ADynamicObjectVolume;
#pragma pack(push, 1)
class UNPC_System : public UObject {
public:
    char pad_28[0x3f0];
    UEnemyWeapon_Manager* WeaponManager; // 0x418
    char pad_420[0x30];
    TArray<void*> NonNPCList; // 0x450
    char pad_460[0x328];
    TArray<ANPC_Character*> PostDeath_PendingNPCs; // 0x788
    char pad_798[0xd0];
    FPostDeath_Params PostDeath_Params; // 0x868
    char pad_880[0xf0];
    static UNPC_System* StaticClass();
    void TrackObject(FString ObjectName, AActor* ParentObject, AActor* ChildObject);
    void TrackerCallback(AActor* ChildObject);
    void TerminateAllBossFights();
    void StartWandLinkEvent(AActor* TargetActor, TArray<AActor*> ExcludeListAlways, TArray<AActor*> ExcludeListOnce);
    void StartBossFight(FName InBossFightName);
    void SetToDead(AActor* InActorPtr);
    void SetOverrideThreatLevel(ENPC_CombatThreatLevel InThreatLevel);
    void SetLoadoutConfigurationContext(FString InContext);
    static void SetCanPerceivePlayerStatic(bool bCanPerceive);
    void SetBossFightState(FName InBossFightName, EBossStates InBossState);
    void SetBossFightCharacter(FName InBossFightName, AActor* InBossCharacterPtr);
    static void SendHermesMessageToDOVActors(ADynamicObjectVolume* InDOVPtr, FName InMessage);
    void SelectCycle();
    static void ReportGameEvent(FGameplayTagContainer TagContainer, FVector Location, EGameEvent_Intensity Intensity, float Duration, float Range, float Falloff, AActor* Instigator, bool bTrackBackToInstigator, AActor* Target, FName Name);
    void RemoveObject(AActor* ChildObject);
    void RemoveNonNPC(AActor* NonNPCPtr);
    void RemoveFromManager(AActor* InActorPtr);
    void PostDeath_TimerModeCallback();
    void PostDeath_CleanupCallback(ANPC_Character* InNPCCharacter);
    static int32_t ParryLaunchedProjectileStart(FEnemy_ParryWindowSetupData& InSetupData, AActor* InOwner, AActor* InProjectile, float InVelocityMag, float InPostParryVelocityMag);
    static void ParryLaunchedProjectileNotifyMunitionCreated(int32_t InWindowID, AActor* InOwnerPtr, AActor* InTargetPtr, AMunitionType_Base* InMunitionPtr);
    static void ParryLaunchedProjectileEnd(int32_t InWindowID);
    void OnSaveGameLoaded();
    void OnGameToBeSaved();
    void OnCurtainRaised();
    void OnCurtainLowered();
    void OnBossDeadEvent(AActor* DeadActor);
    static void KillNPC(AActor* InActorPtr);
    void KilledEvent(AActor* EnemyPtr, AActor* KilledByPtr, bool bKilledByPlayer, bool bPlayCameraCut);
    bool IsPlayerInCombat();
    bool IsBossFightActive();
    void GetTrackedChildren(AActor* ParentObject, TArray<AActor*>& FoundChildren);
    FAssetTrackerData GetObjectTracker(FString ObjectName);
    void GetNPCsByTypeWithinRadius(ENPC_ManagerType ManagerType, FVector& SourceLocation, float Radius, TArray<AActor*>& FoundNPCs);
    float GetClosest(AActor* NPCPtr);
    EBossStates GetBossFightState(FName InBossFightName);
    FName GetBossFightNameFromBossCharacter(AActor* BossActor);
    static FName GetBossFightName(FName BossDbId);
    FBossFightData GetBossFightData(FName InBossFightName);
    AActor* GetBossFightCharacter(FName InBossFightName);
    static UNPC_System* Get();
    void FollowAttackTimeout();
    void FinishAvadaKedavraEvent();
    void EndWandLinkEvent();
    void EndBossFight(FName InBossFightName);
    void EnableTargetPerception(AActor* InActorPtr, bool bEnable);
    void EnableCombat(AActor* InActorPtr, bool bEnable);
    void ClearLoadoutConfigurationContext();
    void ChangeManager(AActor* InActorPtr, FGameplayTag InNewTag);
    static bool CanPerceivePlayerStatic();
    static bool AnyNPCLOSPlayer();
    static bool AnyNPCAwareOfPlayer();
    static bool AnyNPCAttackingPlayer();
    void AdvanceBossFightSystem(FName InBossFightName);
    void AdvanceBossFightManual(FName InBossFightName);
    void AdvanceBossFight(FName InBossFightName);
    void AddToManager(AActor* InActorPtr);
    void AddNonNPC(AActor* NonNPCPtr);
}; // Size: 0x970
#pragma pack(pop)
