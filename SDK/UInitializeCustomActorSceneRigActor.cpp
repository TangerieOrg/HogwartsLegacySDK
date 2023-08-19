#include "AActor.hpp"
#include "ASceneRigActor.hpp"
#include "ETimeRigInitializingBehavior.hpp"
#include "UFunction.hpp"
#include "UInitializeCustomActorSceneRigActor.hpp"
#include "UInitializeSceneRigActor.hpp"
UInitializeCustomActorSceneRigActor* UInitializeCustomActorSceneRigActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.InitializeCustomActorSceneRigActor");
    return (UInitializeCustomActorSceneRigActor*)res;
}
UInitializeCustomActorSceneRigActor* UInitializeCustomActorSceneRigActor::InitializeWithCustomActor(ASceneRigActor* SceneRigActor, AActor* CustomActor, ETimeRigInitializingBehavior InitializingBehaviorType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.InitializeCustomActorSceneRigActor.InitializeWithCustomActor"));
    struct Params_InitializeWithCustomActor {
        ASceneRigActor* SceneRigActor; // 0x0
        AActor* CustomActor; // 0x8
        ETimeRigInitializingBehavior InitializingBehaviorType; // 0x10
        char pad_11[0x7];
        UInitializeCustomActorSceneRigActor* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_InitializeWithCustomActor params{};
    params.SceneRigActor = (ASceneRigActor*)SceneRigActor;
    params.CustomActor = (AActor*)CustomActor;
    params.InitializingBehaviorType = (ETimeRigInitializingBehavior)InitializingBehaviorType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UInitializeCustomActorSceneRigActor*)params.ReturnValue;
}
