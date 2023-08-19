#include "FDeflectionData.hpp"
#include "UDeflectionComponent.hpp"
#include "UFunction.hpp"
#include "UStateEffectComponent.hpp"
UDeflectionComponent* UDeflectionComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DeflectionComponent");
    return (UDeflectionComponent*)res;
}
void UDeflectionComponent::SetupDelegate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DeflectionComponent.SetupDelegate"));
    struct Params_SetupDelegate {
    }; // Size: 0x0
    Params_SetupDelegate params{};
    ProcessEvent(func, &params);
}
