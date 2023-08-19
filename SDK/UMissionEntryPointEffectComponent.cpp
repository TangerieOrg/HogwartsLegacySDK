#include "UFunction.hpp"
#include "UMissionEntryPointEffectComponent.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraSystem.hpp"
#include "UPrimitiveComponent.hpp"
UMissionEntryPointEffectComponent* UMissionEntryPointEffectComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MissionEntryPointEffectComponent");
    return (UMissionEntryPointEffectComponent*)res;
}
void UMissionEntryPointEffectComponent::Enable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionEntryPointEffectComponent.Enable"));
    struct Params_Enable {
    }; // Size: 0x0
    Params_Enable params{};
    ProcessEvent(func, &params);
}
void UMissionEntryPointEffectComponent::Disable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionEntryPointEffectComponent.Disable"));
    struct Params_Disable {
    }; // Size: 0x0
    Params_Disable params{};
    ProcessEvent(func, &params);
}
