#include "AActor.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "USpawnerComponent.hpp"
void USpawnerComponent::StartSpawning(FName& GroupName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DesignerHelper.SpawnerComponent.StartSpawning"));
    struct Params_StartSpawning {
        FName GroupName; // 0x0
    }; // Size: 0x8
    Params_StartSpawning params{};
    params.GroupName = (FName)GroupName;
    ProcessEvent(func, &params);
    GroupName = params.GroupName;
}
USpawnerComponent* USpawnerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/DesignerHelper.SpawnerComponent");
    return (USpawnerComponent*)res;
}
void USpawnerComponent::StopSpawning(FName& GroupName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DesignerHelper.SpawnerComponent.StopSpawning"));
    struct Params_StopSpawning {
        FName GroupName; // 0x0
    }; // Size: 0x8
    Params_StopSpawning params{};
    params.GroupName = (FName)GroupName;
    ProcessEvent(func, &params);
    GroupName = params.GroupName;
}
bool USpawnerComponent::IsSpawning(FName& GroupName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DesignerHelper.SpawnerComponent.IsSpawning"));
    struct Params_IsSpawning {
        FName GroupName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsSpawning params{};
    params.GroupName = (FName)GroupName;
    ProcessEvent(func, &params);
    GroupName = params.GroupName;
    return (bool)params.ReturnValue;
}
void USpawnerComponent::EventOnActorSpawnedAtSpawnLocation(AActor* SpawnedActor, FName& GroupName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DesignerHelper.SpawnerComponent.EventOnActorSpawnedAtSpawnLocation"));
    struct Params_EventOnActorSpawnedAtSpawnLocation {
        AActor* SpawnedActor; // 0x0
        FName GroupName; // 0x8
    }; // Size: 0x10
    Params_EventOnActorSpawnedAtSpawnLocation params{};
    params.SpawnedActor = (AActor*)SpawnedActor;
    params.GroupName = (FName)GroupName;
    ProcessEvent(func, &params);
    GroupName = params.GroupName;
}
void USpawnerComponent::EventOnFinishedSpawningAtSpawnLocation(FName& GroupName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DesignerHelper.SpawnerComponent.EventOnFinishedSpawningAtSpawnLocation"));
    struct Params_EventOnFinishedSpawningAtSpawnLocation {
        FName GroupName; // 0x0
    }; // Size: 0x8
    Params_EventOnFinishedSpawningAtSpawnLocation params{};
    params.GroupName = (FName)GroupName;
    ProcessEvent(func, &params);
    GroupName = params.GroupName;
}
