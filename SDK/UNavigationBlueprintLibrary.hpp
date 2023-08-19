#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class AActor;
class UObject;
class UActorComponent;
struct FVector;
struct FHitResult;
#pragma pack(push, 1)
class UNavigationBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UNavigationBlueprintLibrary* StaticClass();
    static void UpdateNavigationObstacles(AActor* TargetActor);
    static bool TraceWater(UObject* WorldContextObject, FVector& TraceStart, FVector& TraceEnd, float Radius, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, FHitResult& OutHit);
    static void SwitchDynamicNavigation(AActor* TargetActor, bool bBlock);
    static void SetObjectStateInfoObstacleComponentActive(AActor* TargetActor, bool bActive);
    static void SetCanEverAffectNavigation(UActorComponent* ActorComponent, bool bCanAffectNavigation);
    static void RefreshObjectStateInfoActorObstacles(AActor* TargetActor, bool bForceDynamicSpawnedFlag);
}; // Size: 0x28
#pragma pack(pop)
