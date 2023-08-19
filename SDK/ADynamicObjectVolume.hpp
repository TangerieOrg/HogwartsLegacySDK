#pragma once
#include <cstdint>
#include "ATargetPoint.hpp"
#include "EDynamicObjectVolumeDiscoveryType.hpp"
#include "EDynamicObjectVolumeSpawnDistributionType.hpp"
#include "ESpawnVolumeType.hpp"
#include "FBox.hpp"
#include "FCreatureSpawnOverrides.hpp"
#include "FCustomButtonWidget.hpp"
#include "FDOVScheduleData.hpp"
#include "FDbEditorButtonWidget.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FEncounterGroupInfo.hpp"
#include "FEnemy_CharacterParams.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FNPC_DbIdInfo.hpp"
#include "FObjectVisualizationInfo.hpp"
#include "FPerPlatformInt.hpp"
#include "FSpawnSelectInfo.hpp"
#include "FVector.hpp"
class ASpawnLocation;
class UEncounterSpawnComponent;
class UMissionSpawnComponent;
class UPrimitiveComponent;
class UManualNavigationInvokerComponent;
class UOwnershipComponent;
class UTextRenderComponent;
class AActor;
class APerceptionPointBox;
#pragma pack(push, 1)
class ADynamicObjectVolume : public ATargetPoint {
public:
    FObjectVisualizationInfo VolumeVisualization; // 0x248
    char pad_254[0x1c];
    bool bShowActivationDistances; // 0x270
    bool bEnableAutoActivation; // 0x271
    char pad_272[0x2];
    float TriggerDistance; // 0x274
    float CullDistance; // 0x278
    float TriggerCullDiff; // 0x27c
    bool bMaintainTriggerCullDistance; // 0x280
    bool bAllowContinuousSpawning; // 0x281
    char pad_282[0x2];
    int32_t ContinuousMaxActorCount; // 0x284
    int32_t ContinuousMinActorCount; // 0x288
    int32_t ContinuousTotalActorCount; // 0x28c
    float ContinuousMinSpawnDelay; // 0x290
    float ContinuousMaxSpawnDelay; // 0x294
    bool bEnableSpawning; // 0x298
    char pad_299[0x7];
    FString ScheduleTableFilter; // 0x2a0
    bool bUseDiscoveredSpawnLocations; // 0x2b0
    bool bDisableCombat; // 0x2b1
    char pad_2b2[0x2];
    FPerPlatformInt MaxActivated; // 0x2b4
    bool bSpawnWhenActivated; // 0x2b8
    bool bCullWhenDeactivated; // 0x2b9
    bool bFadeOutWhenCulled; // 0x2ba
    bool bOnlySpawnOnce; // 0x2bb
    bool bApplyDelayToFirstGroup; // 0x2bc
    char pad_2bd[0x3];
    float GroupMinDelay; // 0x2c0
    float GroupMaxDelay; // 0x2c4
    FString DOVGUID; // 0x2c8
    EDynamicObjectVolumeSpawnDistributionType distributionType; // 0x2d8
    bool bLimitUseToDiscoveredLocations; // 0x2d9
    bool bForceDiscoveredLocsToDesiredType; // 0x2da
    char pad_2db[0x5];
    FDbSingleColumnInfo DesiredSpawnCategoryType; // 0x2e0
    EDynamicObjectVolumeDiscoveryType DiscoveryType; // 0x368
    char pad_369[0x7];
    FDbSingleColumnInfo NamedRestrictionID; // 0x370
    FDbEditorButtonWidget DBNamedRestrictionsButton; // 0x3f8
    bool bCheckRestrictionsWhileActivated; // 0x478
    char pad_479[0x7];
    FDbSingleColumnInfo MissionItemSwapID; // 0x480
    FDbSingleColumnInfo AssociatedLocationID; // 0x508
    bool bQuestRelevantPassthrough; // 0x590
    char pad_591[0x7];
    FString ScheduleColumnFilter; // 0x598
    FString ScheduleSearchFilter; // 0x5a8
    FString ScheduleFilter; // 0x5b8
    FDbSingleColumnInfo ScheduleFilterSelection; // 0x5c8
    FString WorldID; // 0x650
    TArray<FDOVScheduleData> CurrentSchedule; // 0x660
    bool bOverrideWorldID; // 0x670
    char pad_671[0x7];
    FEnemy_CharacterParams EnemySpawnParams; // 0x678
    bool bChangeSpawnedEnemyTeam; // 0xb08
    char pad_b09[0x3];
    FName SpawnedEnemyTeamName; // 0xb0c
    FGameplayTag OverrideGroupTag; // 0xb14
    bool bUseAttackTicketOverride; // 0xb1c
    char pad_b1d[0x3];
    FDbSingleColumnInfo AttackTicketOverride; // 0xb20
    FDbSingleColumnInfo LootGroupOverride; // 0xba8
    FDbSingleColumnInfo WorldRegionLevelOverride; // 0xc30
    FDbSingleColumnInfo WorldAdjustmentLevelOverride; // 0xcb8
    FCreatureSpawnOverrides CreatureSpawnOverrides; // 0xd40
    int32_t InventoryObjectUnitCount; // 0xdc0
    ESpawnVolumeType SpawnVolumeType; // 0xdc4
    char pad_dc5[0x1];
    bool bIsNotEncounter; // 0xdc6
    bool bIsStaticSpawner; // 0xdc7
    bool bDoAsyncDebugSpawning; // 0xdc8
    bool bAllowIndexedSpawning; // 0xdc9
    bool bGetRegionLevelOverrideFromLocation; // 0xdca
    char pad_dcb[0x5];
    TArray<FSpawnSelectInfo> ItemsToSpawn; // 0xdd0
    char pad_de0[0x50];
    TArray<ADynamicObjectVolume*> LinkedDOVs; // 0xe30
    int32_t ActivateLinksAt; // 0xe40
    bool TriggerLinksOnStealth; // 0xe44
    char pad_e45[0x3];
    FEncounterGroupInfo EncounterGroupInfo; // 0xe48
    FDbEditorButtonWidget DBAccessButton; // 0xe70
    FCustomButtonWidget SpawnerSearchButton; // 0xef0
    UEncounterSpawnComponent* EncounterComponent; // 0xf20
    bool bDestroyOnDeath; // 0xf28
    bool bDissolveOnDeath; // 0xf29
    bool bFadeOnDeath; // 0xf2a
    bool bDoDeathCamOnLastDeath; // 0xf2b
    bool bDoDeathCamBulletTime; // 0xf2c
    char pad_f2d[0x3];
    UPrimitiveComponent* VolumeComponent; // 0xf30
    UManualNavigationInvokerComponent* NavInvokerComponent; // 0xf38
    UMissionSpawnComponent* MissionComponent; // 0xf40
    UOwnershipComponent* OwnershipComponent; // 0xf48
    char pad_f50[0xc8];
    UTextRenderComponent* DebugTextVisualizer; // 0x1018
    char pad_1020[0xa];
    bool isConstructed; // 0x102a
    bool bFromNamedEncounter; // 0x102b
    char pad_102c[0x63c];
    static ADynamicObjectVolume* StaticClass();
    void TerminateContinuousSpawning();
    void SetSpawnSequenceComplete();
    void SetSpawnLocations(TArray<ASpawnLocation*> InSpawnLocations);
    void SetSpawnBoundsFromVectors(FVector& Min, FVector& Max);
    void SetSpawnBounds(FBox& SpawnBounds);
    void SetEnableSpawning(bool bSpawningEnabled, bool bCullActive);
    void SetAllowAutoActivation(bool bAllowAutoActivate);
    void ResetContinuousSpawning();
    void OnFinishedSpawning(FName& GroupName);
    void OnActorSpawnPrep(FString SpawnGroup);
    void OnActorSpawnInFinished(AActor* SpawnedActor);
    void OnActorSpawnFinished(AActor* SpawnedActor);
    void OnActorSpawnFinalize(AActor* SpawnedActor);
    void OnActorSpawned(AActor* SpawnedActor, FName& GroupName);
    void OnActorDeadEvent(AActor* DeadActor);
    void ObjectLoaded();
    void ObjectInfoComplete(FNPC_DbIdInfo InObjectIDs);
    bool IsSpawningEnabled();
    bool IsAutoActivationEnabled();
    void InitializeTags(FGameplayTagContainer InTagsToConsider);
    bool HasSpawned();
    FVector GetVolumeExtents();
    FBox GetVolumeBounds();
    FBox GetSpawnBounds();
    int32_t GetSpawnActorCount();
    int32_t GetObjectCount();
    int32_t GetKillActorCount();
    void GetAllActiveInstances(TArray<AActor*>& OutInstances);
    int32_t GetAliveActorCount();
    bool GetActiveInstances(FString InSpawnGroup, TArray<AActor*>& OutInstances);
    int32_t GetActiveActorCount();
    void ForceSpawn();
    void ForceDeactivate();
    void ForceActivate();
    void EncounterDeactivate();
    void EncounterActivate();
    bool DoneSpawning();
    void DestroySpawnedActor(AActor* actorToDestroy);
    void ContinuousSpawnDelayed();
    void ClearTeamShareVolumes();
    void ClearTargetExcludeVolumes();
    void ClearStayInVolumesFromAliveActors();
    void ClearStayInVolumes();
    void ClearPerceiveVolumes();
    void ClearKillVolumes();
    void ClearForcePerceiveVolumes();
    void ClearAliveVolumes();
    void AttachEncompassingSpawners(FString ObjectName);
    bool AllowLinkedEvent();
    bool AllowAllDeadEvent();
    void AddTeamShareVolume(APerceptionPointBox* InVolume);
    void AddTargetExcludeVolume(APerceptionPointBox* InVolume);
    void AddStayInVolumeToAliveActors(APerceptionPointBox* InVolume);
    void AddStayInVolume(APerceptionPointBox* InVolume);
    void AddPerceiveVolume(APerceptionPointBox* InVolume);
    void AddKillVolume(APerceptionPointBox* InVolume);
    void AddForcePerceiveVolume(APerceptionPointBox* InVolume);
    void AddAliveVolume(APerceptionPointBox* InVolume);
}; // Size: 0x1668
#pragma pack(pop)
