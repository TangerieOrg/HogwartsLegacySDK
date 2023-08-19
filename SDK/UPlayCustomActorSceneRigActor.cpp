#include "AActor.hpp"
#include "ASceneRigActor.hpp"
#include "ETimeRigInitializingBehavior.hpp"
#include "UFunction.hpp"
#include "UPlayCustomActorSceneRigActor.hpp"
#include "UPlaySceneRigActor.hpp"
UPlayCustomActorSceneRigActor* UPlayCustomActorSceneRigActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.PlayCustomActorSceneRigActor");
    return (UPlayCustomActorSceneRigActor*)res;
}
UPlayCustomActorSceneRigActor* UPlayCustomActorSceneRigActor::PlaySceneRigWithCustomActor(ASceneRigActor* SceneRigActor, AActor* CustomActor, ETimeRigInitializingBehavior InitializingBehaviorType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.PlayCustomActorSceneRigActor.PlaySceneRigWithCustomActor"));
    struct Params_PlaySceneRigWithCustomActor {
        ASceneRigActor* SceneRigActor; // 0x0
        AActor* CustomActor; // 0x8
        ETimeRigInitializingBehavior InitializingBehaviorType; // 0x10
        char pad_11[0x7];
        UPlayCustomActorSceneRigActor* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_PlaySceneRigWithCustomActor params{};
    params.SceneRigActor = (ASceneRigActor*)SceneRigActor;
    params.CustomActor = (AActor*)CustomActor;
    params.InitializingBehaviorType = (ETimeRigInitializingBehavior)InitializingBehaviorType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UPlayCustomActorSceneRigActor*)params.ReturnValue;
}
