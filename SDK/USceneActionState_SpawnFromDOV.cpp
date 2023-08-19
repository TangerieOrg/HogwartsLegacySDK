#include "AActor.hpp"
#include "UFunction.hpp"
#include "USceneActionState_SpawnFromDOV.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_SpawnFromDOV* USceneActionState_SpawnFromDOV::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_SpawnFromDOV");
    return (USceneActionState_SpawnFromDOV*)res;
}
void USceneActionState_SpawnFromDOV::SpawnCallback(AActor* SpawnedActor, FName& GroupName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_SpawnFromDOV.SpawnCallback"));
    struct Params_SpawnCallback {
        AActor* SpawnedActor; // 0x0
        FName GroupName; // 0x8
    }; // Size: 0x10
    Params_SpawnCallback params{};
    params.SpawnedActor = (AActor*)SpawnedActor;
    params.GroupName = (FName)GroupName;
    ProcessEvent(func, &params);
    GroupName = params.GroupName;
}
