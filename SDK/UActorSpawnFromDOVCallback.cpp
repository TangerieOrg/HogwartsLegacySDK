#include "AActor.hpp"
#include "UActorSpawnFromDOVCallback.hpp"
#include "UActor_SpawnFromDOVBase.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UActorSpawnFromDOVCallback* UActorSpawnFromDOVCallback::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ActorSpawnFromDOVCallback");
    return (UActorSpawnFromDOVCallback*)res;
}
void UActorSpawnFromDOVCallback::ObjectSpawnCallback(AActor* SpawnedActor, FName& GroupName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActorSpawnFromDOVCallback.ObjectSpawnCallback"));
    struct Params_ObjectSpawnCallback {
        AActor* SpawnedActor; // 0x0
        FName GroupName; // 0x8
    }; // Size: 0x10
    Params_ObjectSpawnCallback params{};
    params.SpawnedActor = (AActor*)SpawnedActor;
    params.GroupName = (FName)GroupName;
    ProcessEvent(func, &params);
    GroupName = params.GroupName;
}
