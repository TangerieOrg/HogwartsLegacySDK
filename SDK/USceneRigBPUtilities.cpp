#include "AActor.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "USceneRigBPUtilities.hpp"
USceneRigBPUtilities* USceneRigBPUtilities::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigBPUtilities");
    return (USceneRigBPUtilities*)res;
}
void USceneRigBPUtilities::AddRegisteredActor(AActor* Actor, FName RegisteredActorName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigBPUtilities.AddRegisteredActor"));
    struct Params_AddRegisteredActor {
        AActor* Actor; // 0x0
        FName RegisteredActorName; // 0x8
    }; // Size: 0x10
    Params_AddRegisteredActor params{};
    params.Actor = (AActor*)Actor;
    params.RegisteredActorName = (FName)RegisteredActorName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
