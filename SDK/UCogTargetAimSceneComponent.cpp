#include "UCogTargetAimSceneComponent.hpp"
#include "UCogTargetSceneComponent.hpp"
#include "UFunction.hpp"
UCogTargetAimSceneComponent* UCogTargetAimSceneComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogTargetAimSceneComponent");
    return (UCogTargetAimSceneComponent*)res;
}
void UCogTargetAimSceneComponent::TimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CogTargetAimSceneComponent.TimerExpired"));
    struct Params_TimerExpired {
    }; // Size: 0x0
    Params_TimerExpired params{};
    ProcessEvent(func, &params);
}
