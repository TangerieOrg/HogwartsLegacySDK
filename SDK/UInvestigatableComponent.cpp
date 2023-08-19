#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UInvestigatableComponent.hpp"
UInvestigatableComponent* UInvestigatableComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InvestigatableComponent");
    return (UInvestigatableComponent*)res;
}
bool UInvestigatableComponent::GetInvestigatable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InvestigatableComponent.GetInvestigatable"));
    struct Params_GetInvestigatable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetInvestigatable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
