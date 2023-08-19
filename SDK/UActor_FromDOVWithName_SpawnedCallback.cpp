#include "AActor.hpp"
#include "UActor_FromDOVWithName.hpp"
#include "UActor_FromDOVWithName_SpawnedCallback.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UActor_FromDOVWithName_SpawnedCallback* UActor_FromDOVWithName_SpawnedCallback::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_FromDOVWithName_SpawnedCallback");
    return (UActor_FromDOVWithName_SpawnedCallback*)res;
}
void UActor_FromDOVWithName_SpawnedCallback::ObjectSpawnCallback(AActor* SpawnedActor, FName& GroupName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Actor_FromDOVWithName_SpawnedCallback.ObjectSpawnCallback"));
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
