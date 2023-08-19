#include "AActor.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UGameplayTask.hpp"
#include "UGameplayTask_SpawnActor.hpp"
#include "UObject.hpp"
UGameplayTask_SpawnActor* UGameplayTask_SpawnActor::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayTasks.GameplayTask_SpawnActor");
    return (UGameplayTask_SpawnActor*)res;
}
void UGameplayTask_SpawnActor::SpawnActor() {}
void UGameplayTask_SpawnActor::FinishSpawningActor(UObject* WorldContextObject, AActor* SpawnedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor"));
    struct Params_FinishSpawningActor {
        UObject* WorldContextObject; // 0x0
        AActor* SpawnedActor; // 0x8
    }; // Size: 0x10
    Params_FinishSpawningActor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SpawnedActor = (AActor*)SpawnedActor;
    ProcessEvent(func, &params);
}
bool UGameplayTask_SpawnActor::BeginSpawningActor(UObject* WorldContextObject, AActor*& SpawnedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor"));
    struct Params_BeginSpawningActor {
        UObject* WorldContextObject; // 0x0
        AActor* SpawnedActor; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_BeginSpawningActor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SpawnedActor = (AActor*)SpawnedActor;
    ProcessEvent(func, &params);
    SpawnedActor = params.SpawnedActor;
    return (bool)params.ReturnValue;
}
