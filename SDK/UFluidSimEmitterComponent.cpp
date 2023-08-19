#include "FFluidSimEmitterParams.hpp"
#include "FVector4.hpp"
#include "UFluidSimEmitterComponent.hpp"
#include "UFunction.hpp"
#include "UStaticMeshComponent.hpp"
void UFluidSimEmitterComponent::SetMotionVectorStrength(float MotionVectorStrengthIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimEmitterComponent.SetMotionVectorStrength"));
    struct Params_SetMotionVectorStrength {
        float MotionVectorStrengthIn; // 0x0
    }; // Size: 0x4
    Params_SetMotionVectorStrength params{};
    params.MotionVectorStrengthIn = (float)MotionVectorStrengthIn;
    ProcessEvent(func, &params);
}
UFluidSimEmitterComponent* UFluidSimEmitterComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/FluidSim.FluidSimEmitterComponent");
    return (UFluidSimEmitterComponent*)res;
}
float UFluidSimEmitterComponent::GetEmitterMultiplier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimEmitterComponent.GetEmitterMultiplier"));
    struct Params_GetEmitterMultiplier {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetEmitterMultiplier params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UFluidSimEmitterComponent::GetEmitterBias() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimEmitterComponent.GetEmitterBias"));
    struct Params_GetEmitterBias {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetEmitterBias params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UFluidSimEmitterComponent::SetEmitterPos(FVector4& EmitterPosIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimEmitterComponent.SetEmitterPos"));
    struct Params_SetEmitterPos {
        FVector4 EmitterPosIn; // 0x0
    }; // Size: 0x10
    Params_SetEmitterPos params{};
    params.EmitterPosIn = (FVector4)EmitterPosIn;
    ProcessEvent(func, &params);
    EmitterPosIn = params.EmitterPosIn;
}
void UFluidSimEmitterComponent::SetEmitterMultiplier(float EmitterMultiplierIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimEmitterComponent.SetEmitterMultiplier"));
    struct Params_SetEmitterMultiplier {
        float EmitterMultiplierIn; // 0x0
    }; // Size: 0x4
    Params_SetEmitterMultiplier params{};
    params.EmitterMultiplierIn = (float)EmitterMultiplierIn;
    ProcessEvent(func, &params);
}
void UFluidSimEmitterComponent::SetEmitterBias(float EmitterBiasIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimEmitterComponent.SetEmitterBias"));
    struct Params_SetEmitterBias {
        float EmitterBiasIn; // 0x0
    }; // Size: 0x4
    Params_SetEmitterBias params{};
    params.EmitterBiasIn = (float)EmitterBiasIn;
    ProcessEvent(func, &params);
}
void UFluidSimEmitterComponent::SetEmitterDir(FVector4& EmitterDirIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimEmitterComponent.SetEmitterDir"));
    struct Params_SetEmitterDir {
        FVector4 EmitterDirIn; // 0x0
    }; // Size: 0x10
    Params_SetEmitterDir params{};
    params.EmitterDirIn = (FVector4)EmitterDirIn;
    ProcessEvent(func, &params);
    EmitterDirIn = params.EmitterDirIn;
}
float UFluidSimEmitterComponent::GetMotionVectorStrength() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimEmitterComponent.GetMotionVectorStrength"));
    struct Params_GetMotionVectorStrength {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMotionVectorStrength params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector4 UFluidSimEmitterComponent::GetEmitterDir() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimEmitterComponent.GetEmitterDir"));
    struct Params_GetEmitterDir {
        FVector4 ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetEmitterDir params{};
    ProcessEvent(func, &params);
    return (FVector4)params.ReturnValue;
}
