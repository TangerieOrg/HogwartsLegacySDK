#include "AActor.hpp"
#include "UActor_FromDOV.hpp"
#include "UActor_FromDOV_SpawnedCallback.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UActor_FromDOV_SpawnedCallback* UActor_FromDOV_SpawnedCallback::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_FromDOV_SpawnedCallback");
    return (UActor_FromDOV_SpawnedCallback*)res;
}
void UActor_FromDOV_SpawnedCallback::ObjectSpawnCallback(AActor* SpawnedActor, FName& GroupName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Actor_FromDOV_SpawnedCallback.ObjectSpawnCallback"));
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
