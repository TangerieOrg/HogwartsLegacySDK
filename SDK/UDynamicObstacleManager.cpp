#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "UDynamicObstacleManager.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UWorld.hpp"
UDynamicObstacleManager* UDynamicObstacleManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DynamicObstacleManager");
    return (UDynamicObstacleManager*)res;
}
UDynamicObstacleManager* UDynamicObstacleManager::Get(UWorld* World) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObstacleManager.Get"));
    struct Params_Get {
        UWorld* World; // 0x0
        UDynamicObstacleManager* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Get params{};
    params.World = (UWorld*)World;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UDynamicObstacleManager*)params.ReturnValue;
}
void UDynamicObstacleManager::OnActorEndPlay(AActor* DestroyedActor, EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObstacleManager.OnActorEndPlay"));
    struct Params_OnActorEndPlay {
        AActor* DestroyedActor; // 0x0
        EEndPlayReason::Type EndPlayReason; // 0x8
    }; // Size: 0x9
    Params_OnActorEndPlay params{};
    params.DestroyedActor = (AActor*)DestroyedActor;
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void UDynamicObstacleManager::OnActorDestroyed(AActor* DestroyedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObstacleManager.OnActorDestroyed"));
    struct Params_OnActorDestroyed {
        AActor* DestroyedActor; // 0x0
    }; // Size: 0x8
    Params_OnActorDestroyed params{};
    params.DestroyedActor = (AActor*)DestroyedActor;
    ProcessEvent(func, &params);
}
UDynamicObstacleManager* UDynamicObstacleManager::GetDynamicObstacleManager(UObject* WorldContext) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObstacleManager.GetDynamicObstacleManager"));
    struct Params_GetDynamicObstacleManager {
        UObject* WorldContext; // 0x0
        UDynamicObstacleManager* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetDynamicObstacleManager params{};
    params.WorldContext = (UObject*)WorldContext;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UDynamicObstacleManager*)params.ReturnValue;
}
