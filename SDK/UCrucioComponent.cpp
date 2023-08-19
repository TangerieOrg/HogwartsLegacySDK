#include "UCrucioComponent.hpp"
#include "UDamageOverTime.hpp"
#include "UFunction.hpp"
UCrucioComponent* UCrucioComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CrucioComponent");
    return (UCrucioComponent*)res;
}
void UCrucioComponent::SetupDelegate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CrucioComponent.SetupDelegate"));
    struct Params_SetupDelegate {
    }; // Size: 0x0
    Params_SetupDelegate params{};
    ProcessEvent(func, &params);
}
