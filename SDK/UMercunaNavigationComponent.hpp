#pragma once
#include <cstdint>
#include "EMercunaMoveResult\Type.hpp"
#include "FAIRequestID.hpp"
#include "FLatentActionInfo.hpp"
#include "FMercunaNavigationConfiguration.hpp"
#include "FMercunaPawnUsageFlags.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
class AMercunaNavOctree;
class AActor;
class UObject;
#pragma pack(push, 1)
class UMercunaNavigationComponent : public UActorComponent {
public:
    char pad_c8[0x10];
    FMercunaNavigationConfiguration Configuration; // 0xd8
    AMercunaNavOctree* NavOctree; // 0xf8
    bool Pathfinding; // 0x100
    bool DynamicAvoidance; // 0x101
    char pad_102[0x2];
    FMercunaPawnUsageFlags UsageFlags; // 0x104
    char pad_10c[0x3c];
    static UMercunaNavigationComponent* StaticClass();
    void TrackActor(AActor* Actor, float Distance, float Speed, bool SkipCheckNav);
    void Stop();
    void SetUsageFlags(FMercunaPawnUsageFlags& UsageFlags);
    void SetNavOctree(AMercunaNavOctree* NavOctree);
    void SetEnabled(bool bEnable);
    void SetAvoidanceAgainst(AActor* Actor, bool Enable);
    void ResumeNavigation();
    void PauseNavigation();
    void MoveToLocations(TArray<FVector>& Destinations, float EndDistance, float Speed, bool UsePartialPath, bool SkipCheckNav);
    void MoveToLocation(FVector& Destination, float EndDistance, float Speed, bool UsePartialPath, bool SkipCheckNav);
    void MoveToActor(AActor* Actor, float EndDistance, float Speed, bool UsePartialPath, bool SkipCheckNav);
    void MercunaMoveComplete__DelegateSignature(FAIRequestID RequestID, EMercunaMoveResult::Type Result);
    void LookInDirection(FVector Direction, float MaxPitch);
    void LookAt(AActor* Actor, float MaxPitch);
    void IsReachable(FVector Point, bool& Success, UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    void GetPathInfo(bool& Valid, float& DistanceToEnd, FVector& NextPathPoint, bool& bIsFinalPoint);
    AMercunaNavOctree* GetNavOctree();
    void ConfigureMovement(bool bUsePathfinding, bool bUseDynamicAvoidance);
    void Configure(FMercunaNavigationConfiguration& NewConfiguration);
    void ClearAvoidanceExclusions();
    void CheckReachable(FVector Point, bool& Success, UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    void CancelMovement();
    void CancelLookAt();
    void AddDestinationLocation(FVector NextDestination);
}; // Size: 0x148
#pragma pack(pop)
