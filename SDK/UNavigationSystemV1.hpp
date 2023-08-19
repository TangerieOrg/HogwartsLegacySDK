#pragma once
#include <cstdint>
#include "ENavDataGatheringModeConfig.hpp"
#include "ENavigationQueryResult\Type.hpp"
#include "FNavAgentSelector.hpp"
#include "FNavDataConfig.hpp"
#include "FNavigationSystemRunMode.hpp"
#include "FVector.hpp"
#include "UNavigationSystemBase.hpp"
class ANavigationData;
class AController;
class AActor;
class ANavMeshBoundsVolume;
class UNavigationPath;
class UObject;
class UClass;
#pragma pack(push, 1)
class UNavigationSystemV1 : public UNavigationSystemBase {
public:
    ANavigationData* MainNavData; // 0x28
    ANavigationData* AbstractNavData; // 0x30
    FName DefaultAgentName; // 0x38
    char pad_40[0x28];
    uint8_t bAutoCreateNavigationData : 1; // 0x68
    uint8_t bSpawnNavDataInNavBoundsLevel : 1; // 0x68
    uint8_t bAllowClientSideNavigation : 1; // 0x68
    uint8_t bShouldDiscardSubLevelNavData : 1; // 0x68
    uint8_t bTickWhilePaused : 1; // 0x68
    uint8_t bSupportRebuilding : 1; // 0x68
    uint8_t bInitialBuildingLocked : 1; // 0x68
    uint8_t pad_bitfield_68_7 : 1;
    uint8_t bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x69
    uint8_t bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x69
    uint8_t pad_bitfield_69_2 : 6;
    char pad_6a[0x2];
    float ActiveTilesUpdateInterval; // 0x6c
    ENavDataGatheringModeConfig DataGatheringMode; // 0x70
    char pad_71[0x3];
    float DirtyAreaWarningSizeThreshold; // 0x74
    TArray<FNavDataConfig> SupportedAgents; // 0x78
    FNavAgentSelector SupportedAgentsMask; // 0x88
    char pad_8c[0x4];
    TArray<ANavigationData*> NavDataSet; // 0x90
    TArray<ANavigationData*> NavDataRegistrationQueue; // 0xa0
    char pad_b0[0x10c];
    FNavigationSystemRunMode OperationMode; // 0x1bc
    char pad_1bd[0x13ff];
    float DirtyAreasUpdateFreq; // 0x15bc
    char pad_15c0[0x20];
    static UNavigationSystemV1* StaticClass();
    void UnregisterNavigationInvoker(AActor* Invoker);
    static void SimpleMoveToLocation(AController* Controller, FVector& Goal);
    static void SimpleMoveToActor(AController* Controller, AActor* Goal);
    void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs);
    void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);
    void ResetMaxSimultaneousTileGenerationJobsCount();
    void RegisterNavigationInvoker(AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
    static FVector ProjectPointToNavigation(UObject* WorldContextObject, FVector& Point, ANavigationData* NavData, UClass* FilterClass, FVector QueryExtent);
    void OnNavigationBoundsUpdated(ANavMeshBoundsVolume* NavVolume);
    static bool NavigationRaycast(UObject* WorldContextObject, FVector& RayStart, FVector& RayEnd, FVector& HitLocation, UClass* FilterClass, AController* Querier);
    bool K2_ReplaceAreaInOctreeData(UObject* Object, UClass* OldArea, UClass* NewArea);
    static bool K2_ProjectPointToNavigation(UObject* WorldContextObject, FVector& Point, FVector& ProjectedLocation, ANavigationData* NavData, UClass* FilterClass, FVector QueryExtent);
    static bool K2_GetRandomReachablePointInRadius(UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, UClass* FilterClass);
    static bool K2_GetRandomPointInNavigableRadius(UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, UClass* FilterClass);
    static bool K2_GetRandomLocationInNavigableRadius(UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, UClass* FilterClass);
    static bool IsNavigationBeingBuiltOrLocked(UObject* WorldContextObject);
    static bool IsNavigationBeingBuilt(UObject* WorldContextObject);
    static FVector GetRandomReachablePointInRadius(UObject* WorldContextObject, FVector& Origin, float Radius, ANavigationData* NavData, UClass* FilterClass);
    static FVector GetRandomPointInNavigableRadius(UObject* WorldContextObject, FVector& Origin, float Radius, ANavigationData* NavData, UClass* FilterClass);
    static ENavigationQueryResult::Type GetPathLength(UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, float& PathLength, ANavigationData* NavData, UClass* FilterClass);
    static ENavigationQueryResult::Type GetPathCost(UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, float& PathCost, ANavigationData* NavData, UClass* FilterClass);
    static UNavigationSystemV1* GetNavigationSystem(UObject* WorldContextObject);
    static UNavigationPath* FindPathToLocationSynchronously(UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, AActor* PathfindingContext, UClass* FilterClass);
    static UNavigationPath* FindPathToActorSynchronously(UObject* WorldContextObject, FVector& PathStart, AActor* GoalActor, float TetherDistance, AActor* PathfindingContext, UClass* FilterClass);
}; // Size: 0x15e0
#pragma pack(pop)
