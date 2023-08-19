#include "EEmissiveAdaptationOverrideState.hpp"
#include "UActorComponent.hpp"
#include "UEmissiveAdaptationOverrideComponent.hpp"
#include "UFunction.hpp"
UEmissiveAdaptationOverrideComponent* UEmissiveAdaptationOverrideComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EmissiveAdaptationOverrideComponent");
    return (UEmissiveAdaptationOverrideComponent*)res;
}
void UEmissiveAdaptationOverrideComponent::SetState(EEmissiveAdaptationOverrideState NewState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EmissiveAdaptationOverrideComponent.SetState"));
    struct Params_SetState {
        EEmissiveAdaptationOverrideState NewState; // 0x0
    }; // Size: 0x1
    Params_SetState params{};
    params.NewState = (EEmissiveAdaptationOverrideState)NewState;
    ProcessEvent(func, &params);
}
void UEmissiveAdaptationOverrideComponent::GetState(EEmissiveAdaptationOverrideState& CurrentState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EmissiveAdaptationOverrideComponent.GetState"));
    struct Params_GetState {
        EEmissiveAdaptationOverrideState CurrentState; // 0x0
    }; // Size: 0x1
    Params_GetState params{};
    params.CurrentState = (EEmissiveAdaptationOverrideState)CurrentState;
    ProcessEvent(func, &params);
    CurrentState = params.CurrentState;
}
void UEmissiveAdaptationOverrideComponent::Reset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EmissiveAdaptationOverrideComponent.Reset"));
    struct Params_Reset {
    }; // Size: 0x0
    Params_Reset params{};
    ProcessEvent(func, &params);
}
