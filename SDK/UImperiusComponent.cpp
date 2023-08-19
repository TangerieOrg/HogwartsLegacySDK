#include "FImperiusData.hpp"
#include "UFunction.hpp"
#include "UImperiusComponent.hpp"
#include "UStateEffectComponent.hpp"
UImperiusComponent* UImperiusComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ImperiusComponent");
    return (UImperiusComponent*)res;
}
void UImperiusComponent::AttachEmitters() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ImperiusComponent.AttachEmitters"));
    struct Params_AttachEmitters {
    }; // Size: 0x0
    Params_AttachEmitters params{};
    ProcessEvent(func, &params);
}
void UImperiusComponent::BP_EndEffect() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ImperiusComponent.BP_EndEffect"));
    struct Params_BP_EndEffect {
    }; // Size: 0x0
    Params_BP_EndEffect params{};
    ProcessEvent(func, &params);
}
