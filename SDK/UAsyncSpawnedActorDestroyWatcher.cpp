#include "AActor.hpp"
#include "UAsyncSpawnedActorDestroyWatcher.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAsyncSpawnedActorDestroyWatcher* UAsyncSpawnedActorDestroyWatcher::StaticClass() {
    static auto res = find_uobject("Class /Script/AsyncActorSpawnController.AsyncSpawnedActorDestroyWatcher");
    return (UAsyncSpawnedActorDestroyWatcher*)res;
}
void UAsyncSpawnedActorDestroyWatcher::OnActorDestroy(AActor* DestroyedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AsyncActorSpawnController.AsyncSpawnedActorDestroyWatcher.OnActorDestroy"));
    struct Params_OnActorDestroy {
        AActor* DestroyedActor; // 0x0
    }; // Size: 0x8
    Params_OnActorDestroy params{};
    params.DestroyedActor = (AActor*)DestroyedActor;
    ProcessEvent(func, &params);
}
