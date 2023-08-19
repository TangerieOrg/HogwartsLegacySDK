#include "AActor.hpp"
#include "AMercunaNavOctree.hpp"
#include "EMercunaMoveResult\Type.hpp"
#include "FAIRequestID.hpp"
#include "FLatentActionInfo.hpp"
#include "FMercunaNavigationConfiguration.hpp"
#include "FMercunaPawnUsageFlags.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UMercunaNavigationComponent.hpp"
#include "UObject.hpp"
void UMercunaNavigationComponent::ClearAvoidanceExclusions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.ClearAvoidanceExclusions"));
    struct Params_ClearAvoidanceExclusions {
    }; // Size: 0x0
    Params_ClearAvoidanceExclusions params{};
    ProcessEvent(func, &params);
}
void UMercunaNavigationComponent::SetUsageFlags(FMercunaPawnUsageFlags& UsageFlags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.SetUsageFlags"));
    struct Params_SetUsageFlags {
        FMercunaPawnUsageFlags UsageFlags; // 0x0
    }; // Size: 0x8
    Params_SetUsageFlags params{};
    params.UsageFlags = (FMercunaPawnUsageFlags)UsageFlags;
    ProcessEvent(func, &params);
    UsageFlags = params.UsageFlags;
}
void UMercunaNavigationComponent::TrackActor(AActor* Actor, float Distance, float Speed, bool SkipCheckNav) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.TrackActor"));
    struct Params_TrackActor {
        AActor* Actor; // 0x0
        float Distance; // 0x8
        float Speed; // 0xc
        bool SkipCheckNav; // 0x10
    }; // Size: 0x11
    Params_TrackActor params{};
    params.Actor = (AActor*)Actor;
    params.Distance = (float)Distance;
    params.Speed = (float)Speed;
    params.SkipCheckNav = (bool)SkipCheckNav;
    ProcessEvent(func, &params);
}
UMercunaNavigationComponent* UMercunaNavigationComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MercunaNavigationComponent");
    return (UMercunaNavigationComponent*)res;
}
void UMercunaNavigationComponent::ResumeNavigation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.ResumeNavigation"));
    struct Params_ResumeNavigation {
    }; // Size: 0x0
    Params_ResumeNavigation params{};
    ProcessEvent(func, &params);
}
void UMercunaNavigationComponent::Stop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.Stop"));
    struct Params_Stop {
    }; // Size: 0x0
    Params_Stop params{};
    ProcessEvent(func, &params);
}
void UMercunaNavigationComponent::CheckReachable(FVector Point, bool& Success, UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.CheckReachable"));
    struct Params_CheckReachable {
        FVector Point; // 0x0
        bool Success; // 0xc
        char pad_d[0x3];
        UObject* WorldContextObject; // 0x10
        FLatentActionInfo LatentInfo; // 0x18
    }; // Size: 0x30
    Params_CheckReachable params{};
    params.Point = (FVector)Point;
    params.Success = (bool)Success;
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    ProcessEvent(func, &params);
    Success = params.Success;
}
void UMercunaNavigationComponent::SetNavOctree(AMercunaNavOctree* NavOctree) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.SetNavOctree"));
    struct Params_SetNavOctree {
        AMercunaNavOctree* NavOctree; // 0x0
    }; // Size: 0x8
    Params_SetNavOctree params{};
    params.NavOctree = (AMercunaNavOctree*)NavOctree;
    ProcessEvent(func, &params);
}
void UMercunaNavigationComponent::SetEnabled(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.SetEnabled"));
    struct Params_SetEnabled {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_SetEnabled params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void UMercunaNavigationComponent::SetAvoidanceAgainst(AActor* Actor, bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.SetAvoidanceAgainst"));
    struct Params_SetAvoidanceAgainst {
        AActor* Actor; // 0x0
        bool Enable; // 0x8
    }; // Size: 0x9
    Params_SetAvoidanceAgainst params{};
    params.Actor = (AActor*)Actor;
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void UMercunaNavigationComponent::PauseNavigation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.PauseNavigation"));
    struct Params_PauseNavigation {
    }; // Size: 0x0
    Params_PauseNavigation params{};
    ProcessEvent(func, &params);
}
void UMercunaNavigationComponent::MoveToLocations(TArray<FVector>& Destinations, float EndDistance, float Speed, bool UsePartialPath, bool SkipCheckNav) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.MoveToLocations"));
    struct Params_MoveToLocations {
        TArray<FVector> Destinations; // 0x0
        float EndDistance; // 0x10
        float Speed; // 0x14
        bool UsePartialPath; // 0x18
        bool SkipCheckNav; // 0x19
    }; // Size: 0x1a
    Params_MoveToLocations params{};
    params.Destinations = (TArray<FVector>)Destinations;
    params.EndDistance = (float)EndDistance;
    params.Speed = (float)Speed;
    params.UsePartialPath = (bool)UsePartialPath;
    params.SkipCheckNav = (bool)SkipCheckNav;
    ProcessEvent(func, &params);
    Destinations = params.Destinations;
}
void UMercunaNavigationComponent::MoveToLocation(FVector& Destination, float EndDistance, float Speed, bool UsePartialPath, bool SkipCheckNav) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.MoveToLocation"));
    struct Params_MoveToLocation {
        FVector Destination; // 0x0
        float EndDistance; // 0xc
        float Speed; // 0x10
        bool UsePartialPath; // 0x14
        bool SkipCheckNav; // 0x15
    }; // Size: 0x16
    Params_MoveToLocation params{};
    params.Destination = (FVector)Destination;
    params.EndDistance = (float)EndDistance;
    params.Speed = (float)Speed;
    params.UsePartialPath = (bool)UsePartialPath;
    params.SkipCheckNav = (bool)SkipCheckNav;
    ProcessEvent(func, &params);
    Destination = params.Destination;
}
void UMercunaNavigationComponent::MoveToActor(AActor* Actor, float EndDistance, float Speed, bool UsePartialPath, bool SkipCheckNav) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.MoveToActor"));
    struct Params_MoveToActor {
        AActor* Actor; // 0x0
        float EndDistance; // 0x8
        float Speed; // 0xc
        bool UsePartialPath; // 0x10
        bool SkipCheckNav; // 0x11
    }; // Size: 0x12
    Params_MoveToActor params{};
    params.Actor = (AActor*)Actor;
    params.EndDistance = (float)EndDistance;
    params.Speed = (float)Speed;
    params.UsePartialPath = (bool)UsePartialPath;
    params.SkipCheckNav = (bool)SkipCheckNav;
    ProcessEvent(func, &params);
}
void UMercunaNavigationComponent::MercunaMoveComplete__DelegateSignature(FAIRequestID RequestID, EMercunaMoveResult::Type Result) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Mercuna.MercunaNavigationComponent.MercunaMoveComplete__DelegateSignature"));
    struct Params_MercunaMoveComplete__DelegateSignature {
        FAIRequestID RequestID; // 0x0
        EMercunaMoveResult::Type Result; // 0x4
    }; // Size: 0x5
    Params_MercunaMoveComplete__DelegateSignature params{};
    params.RequestID = (FAIRequestID)RequestID;
    params.Result = (EMercunaMoveResult::Type)Result;
    ProcessEvent(func, &params);
}
void UMercunaNavigationComponent::Configure(FMercunaNavigationConfiguration& NewConfiguration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.Configure"));
    struct Params_Configure {
        FMercunaNavigationConfiguration NewConfiguration; // 0x0
    }; // Size: 0x20
    Params_Configure params{};
    params.NewConfiguration = (FMercunaNavigationConfiguration)NewConfiguration;
    ProcessEvent(func, &params);
    NewConfiguration = params.NewConfiguration;
}
void UMercunaNavigationComponent::LookInDirection(FVector Direction, float MaxPitch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.LookInDirection"));
    struct Params_LookInDirection {
        FVector Direction; // 0x0
        float MaxPitch; // 0xc
    }; // Size: 0x10
    Params_LookInDirection params{};
    params.Direction = (FVector)Direction;
    params.MaxPitch = (float)MaxPitch;
    ProcessEvent(func, &params);
}
void UMercunaNavigationComponent::IsReachable(FVector Point, bool& Success, UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.IsReachable"));
    struct Params_IsReachable {
        FVector Point; // 0x0
        bool Success; // 0xc
        char pad_d[0x3];
        UObject* WorldContextObject; // 0x10
        FLatentActionInfo LatentInfo; // 0x18
    }; // Size: 0x30
    Params_IsReachable params{};
    params.Point = (FVector)Point;
    params.Success = (bool)Success;
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    ProcessEvent(func, &params);
    Success = params.Success;
}
void UMercunaNavigationComponent::LookAt(AActor* Actor, float MaxPitch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.LookAt"));
    struct Params_LookAt {
        AActor* Actor; // 0x0
        float MaxPitch; // 0x8
    }; // Size: 0xc
    Params_LookAt params{};
    params.Actor = (AActor*)Actor;
    params.MaxPitch = (float)MaxPitch;
    ProcessEvent(func, &params);
}
void UMercunaNavigationComponent::GetPathInfo(bool& Valid, float& DistanceToEnd, FVector& NextPathPoint, bool& bIsFinalPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.GetPathInfo"));
    struct Params_GetPathInfo {
        bool Valid; // 0x0
        char pad_1[0x3];
        float DistanceToEnd; // 0x4
        FVector NextPathPoint; // 0x8
        bool bIsFinalPoint; // 0x14
    }; // Size: 0x15
    Params_GetPathInfo params{};
    params.Valid = (bool)Valid;
    params.DistanceToEnd = (float)DistanceToEnd;
    params.NextPathPoint = (FVector)NextPathPoint;
    params.bIsFinalPoint = (bool)bIsFinalPoint;
    ProcessEvent(func, &params);
    Valid = params.Valid;
    DistanceToEnd = params.DistanceToEnd;
    NextPathPoint = params.NextPathPoint;
    bIsFinalPoint = params.bIsFinalPoint;
}
void UMercunaNavigationComponent::ConfigureMovement(bool bUsePathfinding, bool bUseDynamicAvoidance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.ConfigureMovement"));
    struct Params_ConfigureMovement {
        bool bUsePathfinding; // 0x0
        bool bUseDynamicAvoidance; // 0x1
    }; // Size: 0x2
    Params_ConfigureMovement params{};
    params.bUsePathfinding = (bool)bUsePathfinding;
    params.bUseDynamicAvoidance = (bool)bUseDynamicAvoidance;
    ProcessEvent(func, &params);
}
AMercunaNavOctree* UMercunaNavigationComponent::GetNavOctree() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.GetNavOctree"));
    struct Params_GetNavOctree {
        AMercunaNavOctree* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetNavOctree params{};
    ProcessEvent(func, &params);
    return (AMercunaNavOctree*)params.ReturnValue;
}
void UMercunaNavigationComponent::CancelMovement() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.CancelMovement"));
    struct Params_CancelMovement {
    }; // Size: 0x0
    Params_CancelMovement params{};
    ProcessEvent(func, &params);
}
void UMercunaNavigationComponent::CancelLookAt() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.CancelLookAt"));
    struct Params_CancelLookAt {
    }; // Size: 0x0
    Params_CancelLookAt params{};
    ProcessEvent(func, &params);
}
void UMercunaNavigationComponent::AddDestinationLocation(FVector NextDestination) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaNavigationComponent.AddDestinationLocation"));
    struct Params_AddDestinationLocation {
        FVector NextDestination; // 0x0
    }; // Size: 0xc
    Params_AddDestinationLocation params{};
    params.NextDestination = (FVector)NextDestination;
    ProcessEvent(func, &params);
}
