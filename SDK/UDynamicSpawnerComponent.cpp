#include "AActor.hpp"
#include "ADynamicObjectVolume.hpp"
#include "FSpawnInfoGroup.hpp"
#include "UActorComponent.hpp"
#include "UDynamicSpawnerComponent.hpp"
#include "UFunction.hpp"
UDynamicSpawnerComponent* UDynamicSpawnerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DynamicSpawnerComponent");
    return (UDynamicSpawnerComponent*)res;
}
void UDynamicSpawnerComponent::OnSpawnFinished(FName& GroupName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicSpawnerComponent.OnSpawnFinished"));
    struct Params_OnSpawnFinished {
        FName GroupName; // 0x0
    }; // Size: 0x8
    Params_OnSpawnFinished params{};
    params.GroupName = (FName)GroupName;
    ProcessEvent(func, &params);
    GroupName = params.GroupName;
}
void UDynamicSpawnerComponent::OnActorSpawned(AActor* SpawnedActor, FName& GroupName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicSpawnerComponent.OnActorSpawned"));
    struct Params_OnActorSpawned {
        AActor* SpawnedActor; // 0x0
        FName GroupName; // 0x8
    }; // Size: 0x10
    Params_OnActorSpawned params{};
    params.SpawnedActor = (AActor*)SpawnedActor;
    params.GroupName = (FName)GroupName;
    ProcessEvent(func, &params);
    GroupName = params.GroupName;
}
