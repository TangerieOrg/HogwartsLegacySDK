#include "UForceFeedbackComponent.hpp"
#include "UFunction.hpp"
#include "UPhoenixForceFeedbackComponent.hpp"
UPhoenixForceFeedbackComponent* UPhoenixForceFeedbackComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixForceFeedbackComponent");
    return (UPhoenixForceFeedbackComponent*)res;
}
void UPhoenixForceFeedbackComponent::SetCadenceMultiplier(float NewCadenceMultiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixForceFeedbackComponent.SetCadenceMultiplier"));
    struct Params_SetCadenceMultiplier {
        float NewCadenceMultiplier; // 0x0
    }; // Size: 0x4
    Params_SetCadenceMultiplier params{};
    params.NewCadenceMultiplier = (float)NewCadenceMultiplier;
    ProcessEvent(func, &params);
}
