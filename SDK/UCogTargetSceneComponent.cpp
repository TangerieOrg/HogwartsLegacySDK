#include "AActor.hpp"
#include "UCogTargetSceneComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
void UCogTargetSceneComponent::OnCharacterLoadComplete(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CogTargetSceneComponent.OnCharacterLoadComplete"));
    struct Params_OnCharacterLoadComplete {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_OnCharacterLoadComplete params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
UCogTargetSceneComponent* UCogTargetSceneComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogTargetSceneComponent");
    return (UCogTargetSceneComponent*)res;
}
void UCogTargetSceneComponent::CogTargetSceneComponent_DebugDraw(bool bInFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CogTargetSceneComponent.CogTargetSceneComponent_DebugDraw"));
    struct Params_CogTargetSceneComponent_DebugDraw {
        bool bInFlag; // 0x0
    }; // Size: 0x1
    Params_CogTargetSceneComponent_DebugDraw params{};
    params.bInFlag = (bool)bInFlag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
