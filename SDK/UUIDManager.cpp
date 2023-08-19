#include "AActor.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UUIDManager.hpp"
UUIDManager* UUIDManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UIDManager");
    return (UUIDManager*)res;
}
void UUIDManager::OnActorDestroyed(AActor* DestroyedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIDManager.OnActorDestroyed"));
    struct Params_OnActorDestroyed {
        AActor* DestroyedActor; // 0x0
    }; // Size: 0x8
    Params_OnActorDestroyed params{};
    params.DestroyedActor = (AActor*)DestroyedActor;
    ProcessEvent(func, &params);
}
