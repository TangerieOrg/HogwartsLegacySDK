#include "ASceneRigActor.hpp"
#include "ETimeRigInitializingBehavior.hpp"
#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UPlaySceneRigActor.hpp"
UPlaySceneRigActor* UPlaySceneRigActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.PlaySceneRigActor");
    return (UPlaySceneRigActor*)res;
}
UPlaySceneRigActor* UPlaySceneRigActor::PlaySceneRig(ASceneRigActor* SceneRigActor, ETimeRigInitializingBehavior InitializingBehaviorType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.PlaySceneRigActor.PlaySceneRig"));
    struct Params_PlaySceneRig {
        ASceneRigActor* SceneRigActor; // 0x0
        ETimeRigInitializingBehavior InitializingBehaviorType; // 0x8
        char pad_9[0x7];
        UPlaySceneRigActor* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_PlaySceneRig params{};
    params.SceneRigActor = (ASceneRigActor*)SceneRigActor;
    params.InitializingBehaviorType = (ETimeRigInitializingBehavior)InitializingBehaviorType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UPlaySceneRigActor*)params.ReturnValue;
}
