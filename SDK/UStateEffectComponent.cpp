#include "AActor.hpp"
#include "ASpellTool.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UMultiFX2_Base.hpp"
#include "UObjectStateInfo.hpp"
#include "UStateEffectComponent.hpp"
void UStateEffectComponent::ResetDuration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StateEffectComponent.ResetDuration"));
    struct Params_ResetDuration {
    }; // Size: 0x0
    Params_ResetDuration params{};
    ProcessEvent(func, &params);
}
UStateEffectComponent* UStateEffectComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StateEffectComponent");
    return (UStateEffectComponent*)res;
}
void UStateEffectComponent::SetDuration(float InDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StateEffectComponent.SetDuration"));
    struct Params_SetDuration {
        float InDuration; // 0x0
    }; // Size: 0x4
    Params_SetDuration params{};
    params.InDuration = (float)InDuration;
    ProcessEvent(func, &params);
}
float UStateEffectComponent::GetRemainingTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StateEffectComponent.GetRemainingTime"));
    struct Params_GetRemainingTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRemainingTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UStateEffectComponent::EndEffect() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StateEffectComponent.EndEffect"));
    struct Params_EndEffect {
    }; // Size: 0x0
    Params_EndEffect params{};
    ProcessEvent(func, &params);
}
