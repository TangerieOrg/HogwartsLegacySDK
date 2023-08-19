#include "AActor.hpp"
#include "AController.hpp"
#include "ANavMeshBoundsVolume.hpp"
#include "ANavigationData.hpp"
#include "ENavDataGatheringModeConfig.hpp"
#include "ENavigationQueryResult\Type.hpp"
#include "FNavAgentSelector.hpp"
#include "FNavDataConfig.hpp"
#include "FNavigationSystemRunMode.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UNavigationPath.hpp"
#include "UNavigationSystemBase.hpp"
#include "UNavigationSystemV1.hpp"
#include "UObject.hpp"
void UNavigationSystemV1::SimpleMoveToLocation(AController* Controller, FVector& Goal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.SimpleMoveToLocation"));
    struct Params_SimpleMoveToLocation {
        AController* Controller; // 0x0
        FVector Goal; // 0x8
    }; // Size: 0x14
    Params_SimpleMoveToLocation params{};
    params.Controller = (AController*)Controller;
    params.Goal = (FVector)Goal;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Goal = params.Goal;
}
UNavigationSystemV1* UNavigationSystemV1::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavigationSystemV1");
    return (UNavigationSystemV1*)res;
}
void UNavigationSystemV1::UnregisterNavigationInvoker(AActor* Invoker) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker"));
    struct Params_UnregisterNavigationInvoker {
        AActor* Invoker; // 0x0
    }; // Size: 0x8
    Params_UnregisterNavigationInvoker params{};
    params.Invoker = (AActor*)Invoker;
    ProcessEvent(func, &params);
}
void UNavigationSystemV1::RegisterNavigationInvoker(AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker"));
    struct Params_RegisterNavigationInvoker {
        AActor* Invoker; // 0x0
        float TileGenerationRadius; // 0x8
        float TileRemovalRadius; // 0xc
    }; // Size: 0x10
    Params_RegisterNavigationInvoker params{};
    params.Invoker = (AActor*)Invoker;
    params.TileGenerationRadius = (float)TileGenerationRadius;
    params.TileRemovalRadius = (float)TileRemovalRadius;
    ProcessEvent(func, &params);
}
void UNavigationSystemV1::SimpleMoveToActor(AController* Controller, AActor* Goal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.SimpleMoveToActor"));
    struct Params_SimpleMoveToActor {
        AController* Controller; // 0x0
        AActor* Goal; // 0x8
    }; // Size: 0x10
    Params_SimpleMoveToActor params{};
    params.Controller = (AController*)Controller;
    params.Goal = (AActor*)Goal;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UNavigationSystemV1::SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount"));
    struct Params_SetMaxSimultaneousTileGenerationJobsCount {
        int32_t MaxNumberOfJobs; // 0x0
    }; // Size: 0x4
    Params_SetMaxSimultaneousTileGenerationJobsCount params{};
    params.MaxNumberOfJobs = (int32_t)MaxNumberOfJobs;
    ProcessEvent(func, &params);
}
void UNavigationSystemV1::ResetMaxSimultaneousTileGenerationJobsCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount"));
    struct Params_ResetMaxSimultaneousTileGenerationJobsCount {
    }; // Size: 0x0
    Params_ResetMaxSimultaneousTileGenerationJobsCount params{};
    ProcessEvent(func, &params);
}
void UNavigationSystemV1::SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode"));
    struct Params_SetGeometryGatheringMode {
        ENavDataGatheringModeConfig NewMode; // 0x0
    }; // Size: 0x1
    Params_SetGeometryGatheringMode params{};
    params.NewMode = (ENavDataGatheringModeConfig)NewMode;
    ProcessEvent(func, &params);
}
ENavigationQueryResult::Type UNavigationSystemV1::GetPathLength(UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, float& PathLength, ANavigationData* NavData, UClass* FilterClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.GetPathLength"));
    struct Params_GetPathLength {
        UObject* WorldContextObject; // 0x0
        FVector PathStart; // 0x8
        FVector PathEnd; // 0x14
        float PathLength; // 0x20
        char pad_24[0x4];
        ANavigationData* NavData; // 0x28
        UClass* FilterClass; // 0x30
        ENavigationQueryResult::Type ReturnValue; // 0x38
    }; // Size: 0x39
    Params_GetPathLength params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PathStart = (FVector)PathStart;
    params.PathEnd = (FVector)PathEnd;
    params.PathLength = (float)PathLength;
    params.NavData = (ANavigationData*)NavData;
    params.FilterClass = (UClass*)FilterClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PathStart = params.PathStart;
    PathEnd = params.PathEnd;
    PathLength = params.PathLength;
    return (ENavigationQueryResult::Type)params.ReturnValue;
}
FVector UNavigationSystemV1::ProjectPointToNavigation(UObject* WorldContextObject, FVector& Point, ANavigationData* NavData, UClass* FilterClass, FVector QueryExtent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.ProjectPointToNavigation"));
    struct Params_ProjectPointToNavigation {
        UObject* WorldContextObject; // 0x0
        FVector Point; // 0x8
        char pad_14[0x4];
        ANavigationData* NavData; // 0x18
        UClass* FilterClass; // 0x20
        FVector QueryExtent; // 0x28
        FVector ReturnValue; // 0x34
    }; // Size: 0x40
    Params_ProjectPointToNavigation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Point = (FVector)Point;
    params.NavData = (ANavigationData*)NavData;
    params.FilterClass = (UClass*)FilterClass;
    params.QueryExtent = (FVector)QueryExtent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Point = params.Point;
    return (FVector)params.ReturnValue;
}
void UNavigationSystemV1::OnNavigationBoundsUpdated(ANavMeshBoundsVolume* NavVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated"));
    struct Params_OnNavigationBoundsUpdated {
        ANavMeshBoundsVolume* NavVolume; // 0x0
    }; // Size: 0x8
    Params_OnNavigationBoundsUpdated params{};
    params.NavVolume = (ANavMeshBoundsVolume*)NavVolume;
    ProcessEvent(func, &params);
}
bool UNavigationSystemV1::K2_GetRandomReachablePointInRadius(UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, UClass* FilterClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius"));
    struct Params_K2_GetRandomReachablePointInRadius {
        UObject* WorldContextObject; // 0x0
        FVector Origin; // 0x8
        FVector RandomLocation; // 0x14
        float Radius; // 0x20
        char pad_24[0x4];
        ANavigationData* NavData; // 0x28
        UClass* FilterClass; // 0x30
        bool ReturnValue; // 0x38
    }; // Size: 0x39
    Params_K2_GetRandomReachablePointInRadius params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Origin = (FVector)Origin;
    params.RandomLocation = (FVector)RandomLocation;
    params.Radius = (float)Radius;
    params.NavData = (ANavigationData*)NavData;
    params.FilterClass = (UClass*)FilterClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Origin = params.Origin;
    RandomLocation = params.RandomLocation;
    return (bool)params.ReturnValue;
}
bool UNavigationSystemV1::NavigationRaycast(UObject* WorldContextObject, FVector& RayStart, FVector& RayEnd, FVector& HitLocation, UClass* FilterClass, AController* Querier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.NavigationRaycast"));
    struct Params_NavigationRaycast {
        UObject* WorldContextObject; // 0x0
        FVector RayStart; // 0x8
        FVector RayEnd; // 0x14
        FVector HitLocation; // 0x20
        char pad_2c[0x4];
        UClass* FilterClass; // 0x30
        AController* Querier; // 0x38
        bool ReturnValue; // 0x40
    }; // Size: 0x41
    Params_NavigationRaycast params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.RayStart = (FVector)RayStart;
    params.RayEnd = (FVector)RayEnd;
    params.HitLocation = (FVector)HitLocation;
    params.FilterClass = (UClass*)FilterClass;
    params.Querier = (AController*)Querier;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RayStart = params.RayStart;
    RayEnd = params.RayEnd;
    HitLocation = params.HitLocation;
    return (bool)params.ReturnValue;
}
bool UNavigationSystemV1::K2_ReplaceAreaInOctreeData(UObject* Object, UClass* OldArea, UClass* NewArea) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData"));
    struct Params_K2_ReplaceAreaInOctreeData {
        UObject* Object; // 0x0
        UClass* OldArea; // 0x8
        UClass* NewArea; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_K2_ReplaceAreaInOctreeData params{};
    params.Object = (UObject*)Object;
    params.OldArea = (UClass*)OldArea;
    params.NewArea = (UClass*)NewArea;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UNavigationSystemV1::K2_ProjectPointToNavigation(UObject* WorldContextObject, FVector& Point, FVector& ProjectedLocation, ANavigationData* NavData, UClass* FilterClass, FVector QueryExtent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation"));
    struct Params_K2_ProjectPointToNavigation {
        UObject* WorldContextObject; // 0x0
        FVector Point; // 0x8
        FVector ProjectedLocation; // 0x14
        ANavigationData* NavData; // 0x20
        UClass* FilterClass; // 0x28
        FVector QueryExtent; // 0x30
        bool ReturnValue; // 0x3c
    }; // Size: 0x3d
    Params_K2_ProjectPointToNavigation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Point = (FVector)Point;
    params.ProjectedLocation = (FVector)ProjectedLocation;
    params.NavData = (ANavigationData*)NavData;
    params.FilterClass = (UClass*)FilterClass;
    params.QueryExtent = (FVector)QueryExtent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Point = params.Point;
    ProjectedLocation = params.ProjectedLocation;
    return (bool)params.ReturnValue;
}
bool UNavigationSystemV1::K2_GetRandomPointInNavigableRadius(UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, UClass* FilterClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius"));
    struct Params_K2_GetRandomPointInNavigableRadius {
        UObject* WorldContextObject; // 0x0
        FVector Origin; // 0x8
        FVector RandomLocation; // 0x14
        float Radius; // 0x20
        char pad_24[0x4];
        ANavigationData* NavData; // 0x28
        UClass* FilterClass; // 0x30
        bool ReturnValue; // 0x38
    }; // Size: 0x39
    Params_K2_GetRandomPointInNavigableRadius params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Origin = (FVector)Origin;
    params.RandomLocation = (FVector)RandomLocation;
    params.Radius = (float)Radius;
    params.NavData = (ANavigationData*)NavData;
    params.FilterClass = (UClass*)FilterClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Origin = params.Origin;
    RandomLocation = params.RandomLocation;
    return (bool)params.ReturnValue;
}
bool UNavigationSystemV1::K2_GetRandomLocationInNavigableRadius(UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, UClass* FilterClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius"));
    struct Params_K2_GetRandomLocationInNavigableRadius {
        UObject* WorldContextObject; // 0x0
        FVector Origin; // 0x8
        FVector RandomLocation; // 0x14
        float Radius; // 0x20
        char pad_24[0x4];
        ANavigationData* NavData; // 0x28
        UClass* FilterClass; // 0x30
        bool ReturnValue; // 0x38
    }; // Size: 0x39
    Params_K2_GetRandomLocationInNavigableRadius params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Origin = (FVector)Origin;
    params.RandomLocation = (FVector)RandomLocation;
    params.Radius = (float)Radius;
    params.NavData = (ANavigationData*)NavData;
    params.FilterClass = (UClass*)FilterClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Origin = params.Origin;
    RandomLocation = params.RandomLocation;
    return (bool)params.ReturnValue;
}
bool UNavigationSystemV1::IsNavigationBeingBuiltOrLocked(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked"));
    struct Params_IsNavigationBeingBuiltOrLocked {
        UObject* WorldContextObject; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsNavigationBeingBuiltOrLocked params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UNavigationPath* UNavigationSystemV1::FindPathToLocationSynchronously(UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, AActor* PathfindingContext, UClass* FilterClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously"));
    struct Params_FindPathToLocationSynchronously {
        UObject* WorldContextObject; // 0x0
        FVector PathStart; // 0x8
        FVector PathEnd; // 0x14
        AActor* PathfindingContext; // 0x20
        UClass* FilterClass; // 0x28
        UNavigationPath* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_FindPathToLocationSynchronously params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PathStart = (FVector)PathStart;
    params.PathEnd = (FVector)PathEnd;
    params.PathfindingContext = (AActor*)PathfindingContext;
    params.FilterClass = (UClass*)FilterClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PathStart = params.PathStart;
    PathEnd = params.PathEnd;
    return (UNavigationPath*)params.ReturnValue;
}
bool UNavigationSystemV1::IsNavigationBeingBuilt(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt"));
    struct Params_IsNavigationBeingBuilt {
        UObject* WorldContextObject; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsNavigationBeingBuilt params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UNavigationSystemV1::GetRandomReachablePointInRadius(UObject* WorldContextObject, FVector& Origin, float Radius, ANavigationData* NavData, UClass* FilterClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius"));
    struct Params_GetRandomReachablePointInRadius {
        UObject* WorldContextObject; // 0x0
        FVector Origin; // 0x8
        float Radius; // 0x14
        ANavigationData* NavData; // 0x18
        UClass* FilterClass; // 0x20
        FVector ReturnValue; // 0x28
    }; // Size: 0x34
    Params_GetRandomReachablePointInRadius params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Origin = (FVector)Origin;
    params.Radius = (float)Radius;
    params.NavData = (ANavigationData*)NavData;
    params.FilterClass = (UClass*)FilterClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Origin = params.Origin;
    return (FVector)params.ReturnValue;
}
FVector UNavigationSystemV1::GetRandomPointInNavigableRadius(UObject* WorldContextObject, FVector& Origin, float Radius, ANavigationData* NavData, UClass* FilterClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius"));
    struct Params_GetRandomPointInNavigableRadius {
        UObject* WorldContextObject; // 0x0
        FVector Origin; // 0x8
        float Radius; // 0x14
        ANavigationData* NavData; // 0x18
        UClass* FilterClass; // 0x20
        FVector ReturnValue; // 0x28
    }; // Size: 0x34
    Params_GetRandomPointInNavigableRadius params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Origin = (FVector)Origin;
    params.Radius = (float)Radius;
    params.NavData = (ANavigationData*)NavData;
    params.FilterClass = (UClass*)FilterClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Origin = params.Origin;
    return (FVector)params.ReturnValue;
}
ENavigationQueryResult::Type UNavigationSystemV1::GetPathCost(UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, float& PathCost, ANavigationData* NavData, UClass* FilterClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.GetPathCost"));
    struct Params_GetPathCost {
        UObject* WorldContextObject; // 0x0
        FVector PathStart; // 0x8
        FVector PathEnd; // 0x14
        float PathCost; // 0x20
        char pad_24[0x4];
        ANavigationData* NavData; // 0x28
        UClass* FilterClass; // 0x30
        ENavigationQueryResult::Type ReturnValue; // 0x38
    }; // Size: 0x39
    Params_GetPathCost params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PathStart = (FVector)PathStart;
    params.PathEnd = (FVector)PathEnd;
    params.PathCost = (float)PathCost;
    params.NavData = (ANavigationData*)NavData;
    params.FilterClass = (UClass*)FilterClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PathStart = params.PathStart;
    PathEnd = params.PathEnd;
    PathCost = params.PathCost;
    return (ENavigationQueryResult::Type)params.ReturnValue;
}
UNavigationSystemV1* UNavigationSystemV1::GetNavigationSystem(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.GetNavigationSystem"));
    struct Params_GetNavigationSystem {
        UObject* WorldContextObject; // 0x0
        UNavigationSystemV1* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetNavigationSystem params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UNavigationSystemV1*)params.ReturnValue;
}
UNavigationPath* UNavigationSystemV1::FindPathToActorSynchronously(UObject* WorldContextObject, FVector& PathStart, AActor* GoalActor, float TetherDistance, AActor* PathfindingContext, UClass* FilterClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously"));
    struct Params_FindPathToActorSynchronously {
        UObject* WorldContextObject; // 0x0
        FVector PathStart; // 0x8
        char pad_14[0x4];
        AActor* GoalActor; // 0x18
        float TetherDistance; // 0x20
        char pad_24[0x4];
        AActor* PathfindingContext; // 0x28
        UClass* FilterClass; // 0x30
        UNavigationPath* ReturnValue; // 0x38
    }; // Size: 0x40
    Params_FindPathToActorSynchronously params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PathStart = (FVector)PathStart;
    params.GoalActor = (AActor*)GoalActor;
    params.TetherDistance = (float)TetherDistance;
    params.PathfindingContext = (AActor*)PathfindingContext;
    params.FilterClass = (UClass*)FilterClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PathStart = params.PathStart;
    return (UNavigationPath*)params.ReturnValue;
}
