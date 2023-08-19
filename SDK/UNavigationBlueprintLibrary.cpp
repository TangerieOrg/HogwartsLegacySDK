#include "AActor.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UNavigationBlueprintLibrary.hpp"
#include "UObject.hpp"
void UNavigationBlueprintLibrary::RefreshObjectStateInfoActorObstacles(AActor* TargetActor, bool bForceDynamicSpawnedFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NavigationBlueprintLibrary.RefreshObjectStateInfoActorObstacles"));
    struct Params_RefreshObjectStateInfoActorObstacles {
        AActor* TargetActor; // 0x0
        bool bForceDynamicSpawnedFlag; // 0x8
    }; // Size: 0x9
    Params_RefreshObjectStateInfoActorObstacles params{};
    params.TargetActor = (AActor*)TargetActor;
    params.bForceDynamicSpawnedFlag = (bool)bForceDynamicSpawnedFlag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UNavigationBlueprintLibrary* UNavigationBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NavigationBlueprintLibrary");
    return (UNavigationBlueprintLibrary*)res;
}
void UNavigationBlueprintLibrary::UpdateNavigationObstacles(AActor* TargetActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NavigationBlueprintLibrary.UpdateNavigationObstacles"));
    struct Params_UpdateNavigationObstacles {
        AActor* TargetActor; // 0x0
    }; // Size: 0x8
    Params_UpdateNavigationObstacles params{};
    params.TargetActor = (AActor*)TargetActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UNavigationBlueprintLibrary::SetCanEverAffectNavigation(UActorComponent* ActorComponent, bool bCanAffectNavigation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NavigationBlueprintLibrary.SetCanEverAffectNavigation"));
    struct Params_SetCanEverAffectNavigation {
        UActorComponent* ActorComponent; // 0x0
        bool bCanAffectNavigation; // 0x8
    }; // Size: 0x9
    Params_SetCanEverAffectNavigation params{};
    params.ActorComponent = (UActorComponent*)ActorComponent;
    params.bCanAffectNavigation = (bool)bCanAffectNavigation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UNavigationBlueprintLibrary::TraceWater(UObject* WorldContextObject, FVector& TraceStart, FVector& TraceEnd, float Radius, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, FHitResult& OutHit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NavigationBlueprintLibrary.TraceWater"));
    struct Params_TraceWater {
        UObject* WorldContextObject; // 0x0
        FVector TraceStart; // 0x8
        FVector TraceEnd; // 0x14
        float Radius; // 0x20
        bool bTraceComplex; // 0x24
        char pad_25[0x3];
        TArray<AActor*> ActorsToIgnore; // 0x28
        bool bIgnoreSelf; // 0x38
        char pad_39[0x3];
        FHitResult OutHit; // 0x3c
        bool ReturnValue; // 0xc4
    }; // Size: 0xc5
    Params_TraceWater params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.TraceStart = (FVector)TraceStart;
    params.TraceEnd = (FVector)TraceEnd;
    params.Radius = (float)Radius;
    params.bTraceComplex = (bool)bTraceComplex;
    params.ActorsToIgnore = (TArray<AActor*>)ActorsToIgnore;
    params.bIgnoreSelf = (bool)bIgnoreSelf;
    params.OutHit = (FHitResult)OutHit;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TraceStart = params.TraceStart;
    TraceEnd = params.TraceEnd;
    ActorsToIgnore = params.ActorsToIgnore;
    OutHit = params.OutHit;
    return (bool)params.ReturnValue;
}
void UNavigationBlueprintLibrary::SwitchDynamicNavigation(AActor* TargetActor, bool bBlock) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NavigationBlueprintLibrary.SwitchDynamicNavigation"));
    struct Params_SwitchDynamicNavigation {
        AActor* TargetActor; // 0x0
        bool bBlock; // 0x8
    }; // Size: 0x9
    Params_SwitchDynamicNavigation params{};
    params.TargetActor = (AActor*)TargetActor;
    params.bBlock = (bool)bBlock;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UNavigationBlueprintLibrary::SetObjectStateInfoObstacleComponentActive(AActor* TargetActor, bool bActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NavigationBlueprintLibrary.SetObjectStateInfoObstacleComponentActive"));
    struct Params_SetObjectStateInfoObstacleComponentActive {
        AActor* TargetActor; // 0x0
        bool bActive; // 0x8
    }; // Size: 0x9
    Params_SetObjectStateInfoObstacleComponentActive params{};
    params.TargetActor = (AActor*)TargetActor;
    params.bActive = (bool)bActive;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
