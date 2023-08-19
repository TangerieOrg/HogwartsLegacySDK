#include "UFluidSimRadialForceComponent.hpp"
#include "UFunction.hpp"
#include "USphereComponent.hpp"
UFluidSimRadialForceComponent* UFluidSimRadialForceComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/FluidSim.FluidSimRadialForceComponent");
    return (UFluidSimRadialForceComponent*)res;
}
void UFluidSimRadialForceComponent::SetRadialForce(float ForceIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimRadialForceComponent.SetRadialForce"));
    struct Params_SetRadialForce {
        float ForceIn; // 0x0
    }; // Size: 0x4
    Params_SetRadialForce params{};
    params.ForceIn = (float)ForceIn;
    ProcessEvent(func, &params);
}
float UFluidSimRadialForceComponent::GetRadialForce() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimRadialForceComponent.GetRadialForce"));
    struct Params_GetRadialForce {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRadialForce params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
