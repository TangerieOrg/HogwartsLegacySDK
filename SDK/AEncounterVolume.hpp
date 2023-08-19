#pragma once
#include <cstdint>
#include "ATargetPoint.hpp"
#include "ESpawnVolumeType.hpp"
#include "FCustomButtonWidget.hpp"
#include "FDbEditorButtonWidget.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FGameplayTag.hpp"
#include "FObjectVisualizationInfo.hpp"
class ADynamicObjectVolume;
class UPrimitiveComponent;
class AEnemy_PerceptionPoint;
class AActor;
#pragma pack(push, 1)
class AEncounterVolume : public ATargetPoint {
public:
    FObjectVisualizationInfo VolumeVisualization; // 0x248
    bool bShowActivationDistances; // 0x254
    bool bEnableAutoActivation; // 0x255
    char pad_256[0x2];
    float TriggerDistance; // 0x258
    float CullDistance; // 0x25c
    float TriggerCullDiff; // 0x260
    bool bMaintainTriggerCullDistance; // 0x264
    bool bAutoGeneratePerception; // 0x265
    char pad_266[0x2];
    float PerceptionRadius; // 0x268
    FGameplayTag EncounterTag; // 0x26c
    char pad_274[0x4];
    FString NameEncounterDataString; // 0x278
    FDbEditorButtonWidget DBAccessButton; // 0x288
    FDbEditorButtonWidget DBInclusionButton; // 0x308
    FDbEditorButtonWidget DBExclusionButton; // 0x388
    FDbEditorButtonWidget DBDOVAccessButton; // 0x408
    FString GuidString; // 0x488
    ESpawnVolumeType SpawnVolumeType; // 0x498
    char pad_499[0x7];
    TArray<ADynamicObjectVolume*> SpawnZones; // 0x4a0
    FCustomButtonWidget SpawnerSearchButton; // 0x4b0
    FDbSingleColumnInfo NamedRestrictionID; // 0x4e0
    bool bForceOverrideRestriction; // 0x568
    bool bIsCreatorEncounter; // 0x569
    bool bAllowDataWrite; // 0x56a
    char pad_56b[0x25];
    FDbEditorButtonWidget DBNamedRestrictionsButton; // 0x590
    FCustomButtonWidget ReportButton; // 0x610
    int32_t NumIterationsPerLevel; // 0x640
    int32_t StartPlayerLevel; // 0x644
    int32_t EndPlayerLevel; // 0x648
    int32_t LevelIncrement; // 0x64c
    bool bIsLocationTrigger; // 0x650
    char pad_651[0x7];
    UPrimitiveComponent* VolumeComponent; // 0x658
    bool bDestroyOnDeath; // 0x660
    bool bDissolveOnDeath; // 0x661
    bool bFadeOnDeath; // 0x662
    bool bDoDeathCamOnLastDeath; // 0x663
    bool bDoDeathCamBulletTime; // 0x664
    char pad_665[0x10b];
    bool bNamedEncounter; // 0x770
    char pad_771[0xbf];
    AEnemy_PerceptionPoint* pEnemyPerception; // 0x830
    char pad_838[0x120];
    static AEncounterVolume* StaticClass();
    void SetEncounterActor(ADynamicObjectVolume* InActor);
    void SetAllowAutoActivation(bool bAllowAutoActivate);
    void ProcessZoneData(FString ObjectName);
    void ProcessSpawnerSearch(FString ObjectName);
    void ProcessEncounterReport(FString ObjectName);
    bool IsVolumeActive();
    bool HasSpawned();
    int32_t GetSpawnActorCount();
    TArray<AActor*> GetAllActiveSpawnedInstances();
    int32_t GetAliveActorCount();
    int32_t GetActiveActorCount();
    void ForceDeactivate();
    void ForceActivate();
    bool DoneSpawning();
}; // Size: 0x958
#pragma pack(pop)
