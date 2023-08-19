#include "ASceneRigActor.hpp"
#include "ETimeRigInitializingBehavior.hpp"
#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UInitializeSceneRigActor.hpp"
UInitializeSceneRigActor* UInitializeSceneRigActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.InitializeSceneRigActor");
    return (UInitializeSceneRigActor*)res;
}
UInitializeSceneRigActor* UInitializeSceneRigActor::Initialize(ASceneRigActor* SceneRigActor, ETimeRigInitializingBehavior InitializingBehaviorType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.InitializeSceneRigActor.Initialize"));
    struct Params_Initialize {
        ASceneRigActor* SceneRigActor; // 0x0
        ETimeRigInitializingBehavior InitializingBehaviorType; // 0x8
        char pad_9[0x7];
        UInitializeSceneRigActor* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Initialize params{};
    params.SceneRigActor = (ASceneRigActor*)SceneRigActor;
    params.InitializingBehaviorType = (ETimeRigInitializingBehavior)InitializingBehaviorType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UInitializeSceneRigActor*)params.ReturnValue;
}
