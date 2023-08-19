#include "FFluidSimParams.hpp"
#include "FVector.hpp"
#include "UCurveLinearColor.hpp"
#include "UFluidSimComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "UTexture2D.hpp"
UFluidSimComponent* UFluidSimComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/FluidSim.FluidSimComponent");
    return (UFluidSimComponent*)res;
}
void UFluidSimComponent::SetSourceDissipation(float SourceDissipationIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.SetSourceDissipation"));
    struct Params_SetSourceDissipation {
        float SourceDissipationIn; // 0x0
    }; // Size: 0x4
    Params_SetSourceDissipation params{};
    params.SourceDissipationIn = (float)SourceDissipationIn;
    ProcessEvent(func, &params);
}
void UFluidSimComponent::SetVelocityDissipation(float VelocityDissipationIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.SetVelocityDissipation"));
    struct Params_SetVelocityDissipation {
        float VelocityDissipationIn; // 0x0
    }; // Size: 0x4
    Params_SetVelocityDissipation params{};
    params.VelocityDissipationIn = (float)VelocityDissipationIn;
    ProcessEvent(func, &params);
}
void UFluidSimComponent::SetBuoyancyGravity(FVector BuoyancyGravityIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.SetBuoyancyGravity"));
    struct Params_SetBuoyancyGravity {
        FVector BuoyancyGravityIn; // 0x0
    }; // Size: 0xc
    Params_SetBuoyancyGravity params{};
    params.BuoyancyGravityIn = (FVector)BuoyancyGravityIn;
    ProcessEvent(func, &params);
}
void UFluidSimComponent::SetColorIntensity(float ColorIntensityIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.SetColorIntensity"));
    struct Params_SetColorIntensity {
        float ColorIntensityIn; // 0x0
    }; // Size: 0x4
    Params_SetColorIntensity params{};
    params.ColorIntensityIn = (float)ColorIntensityIn;
    ProcessEvent(func, &params);
}
void UFluidSimComponent::SetVorticityTrails(float VorticityTrailsIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.SetVorticityTrails"));
    struct Params_SetVorticityTrails {
        float VorticityTrailsIn; // 0x0
    }; // Size: 0x4
    Params_SetVorticityTrails params{};
    params.VorticityTrailsIn = (float)VorticityTrailsIn;
    ProcessEvent(func, &params);
}
void UFluidSimComponent::SetVorticity(float VorticityIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.SetVorticity"));
    struct Params_SetVorticity {
        float VorticityIn; // 0x0
    }; // Size: 0x4
    Params_SetVorticity params{};
    params.VorticityIn = (float)VorticityIn;
    ProcessEvent(func, &params);
}
FVector UFluidSimComponent::GetBuoyancyGravity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.GetBuoyancyGravity"));
    struct Params_GetBuoyancyGravity {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetBuoyancyGravity params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UFluidSimComponent::SetVolumeScale(FVector VolumeScaleIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.SetVolumeScale"));
    struct Params_SetVolumeScale {
        FVector VolumeScaleIn; // 0x0
    }; // Size: 0xc
    Params_SetVolumeScale params{};
    params.VolumeScaleIn = (FVector)VolumeScaleIn;
    ProcessEvent(func, &params);
}
void UFluidSimComponent::SetVolumeMotion(bool VolumeMotionIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.SetVolumeMotion"));
    struct Params_SetVolumeMotion {
        bool VolumeMotionIn; // 0x0
    }; // Size: 0x1
    Params_SetVolumeMotion params{};
    params.VolumeMotionIn = (bool)VolumeMotionIn;
    ProcessEvent(func, &params);
}
float UFluidSimComponent::GetColorIntensity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.GetColorIntensity"));
    struct Params_GetColorIntensity {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetColorIntensity params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UFluidSimComponent::GetTimeStep() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.GetTimeStep"));
    struct Params_GetTimeStep {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTimeStep params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UFluidSimComponent::SetTimeStep(float TimeStepIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.SetTimeStep"));
    struct Params_SetTimeStep {
        float TimeStepIn; // 0x0
    }; // Size: 0x4
    Params_SetTimeStep params{};
    params.TimeStepIn = (float)TimeStepIn;
    ProcessEvent(func, &params);
}
bool UFluidSimComponent::GetFadeEdges() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.GetFadeEdges"));
    struct Params_GetFadeEdges {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetFadeEdges params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UFluidSimComponent::SetMotionVectorStrength(float MotionVectorStrengthIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.SetMotionVectorStrength"));
    struct Params_SetMotionVectorStrength {
        float MotionVectorStrengthIn; // 0x0
    }; // Size: 0x4
    Params_SetMotionVectorStrength params{};
    params.MotionVectorStrengthIn = (float)MotionVectorStrengthIn;
    ProcessEvent(func, &params);
}
void UFluidSimComponent::SetFadeEdges(bool FadeEdgesIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.SetFadeEdges"));
    struct Params_SetFadeEdges {
        bool FadeEdgesIn; // 0x0
    }; // Size: 0x1
    Params_SetFadeEdges params{};
    params.FadeEdgesIn = (bool)FadeEdgesIn;
    ProcessEvent(func, &params);
}
void UFluidSimComponent::SetEnabled(bool EnabledIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.SetEnabled"));
    struct Params_SetEnabled {
        bool EnabledIn; // 0x0
    }; // Size: 0x1
    Params_SetEnabled params{};
    params.EnabledIn = (bool)EnabledIn;
    ProcessEvent(func, &params);
}
void UFluidSimComponent::SetDrawDebugBounds(bool DrawDebugBoundsIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.SetDrawDebugBounds"));
    struct Params_SetDrawDebugBounds {
        bool DrawDebugBoundsIn; // 0x0
    }; // Size: 0x1
    Params_SetDrawDebugBounds params{};
    params.DrawDebugBoundsIn = (bool)DrawDebugBoundsIn;
    ProcessEvent(func, &params);
}
bool UFluidSimComponent::GetVolumeMotion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.GetVolumeMotion"));
    struct Params_GetVolumeMotion {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetVolumeMotion params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UFluidSimComponent::SetDensity(float DensityIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.SetDensity"));
    struct Params_SetDensity {
        float DensityIn; // 0x0
    }; // Size: 0x4
    Params_SetDensity params{};
    params.DensityIn = (float)DensityIn;
    ProcessEvent(func, &params);
}
void UFluidSimComponent::SetComputeDimensions(FVector ComputeDimensionsIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.SetComputeDimensions"));
    struct Params_SetComputeDimensions {
        FVector ComputeDimensionsIn; // 0x0
    }; // Size: 0xc
    Params_SetComputeDimensions params{};
    params.ComputeDimensionsIn = (FVector)ComputeDimensionsIn;
    ProcessEvent(func, &params);
}
void UFluidSimComponent::SetColorCurveScale(float ColorCurveScaleIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.SetColorCurveScale"));
    struct Params_SetColorCurveScale {
        float ColorCurveScaleIn; // 0x0
    }; // Size: 0x4
    Params_SetColorCurveScale params{};
    params.ColorCurveScaleIn = (float)ColorCurveScaleIn;
    ProcessEvent(func, &params);
}
void UFluidSimComponent::SetColorCurve(UCurveLinearColor* ColorCurveIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.SetColorCurve"));
    struct Params_SetColorCurve {
        UCurveLinearColor* ColorCurveIn; // 0x0
    }; // Size: 0x8
    Params_SetColorCurve params{};
    params.ColorCurveIn = (UCurveLinearColor*)ColorCurveIn;
    ProcessEvent(func, &params);
}
float UFluidSimComponent::GetVorticityTrails() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.GetVorticityTrails"));
    struct Params_GetVorticityTrails {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetVorticityTrails params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UFluidSimComponent::GetVorticity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.GetVorticity"));
    struct Params_GetVorticity {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetVorticity params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FVector UFluidSimComponent::GetVolumeScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.GetVolumeScale"));
    struct Params_GetVolumeScale {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetVolumeScale params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UFluidSimComponent::GetVelocityDissipation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.GetVelocityDissipation"));
    struct Params_GetVelocityDissipation {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetVelocityDissipation params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UFluidSimComponent::GetMotionVectorStrength() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.GetMotionVectorStrength"));
    struct Params_GetMotionVectorStrength {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMotionVectorStrength params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UFluidSimComponent::GetEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.GetEnabled"));
    struct Params_GetEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UFluidSimComponent::GetDrawDebugBounds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.GetDrawDebugBounds"));
    struct Params_GetDrawDebugBounds {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDrawDebugBounds params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UFluidSimComponent::GetComputeDimensions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.GetComputeDimensions"));
    struct Params_GetComputeDimensions {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetComputeDimensions params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UFluidSimComponent::GetDensity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.GetDensity"));
    struct Params_GetDensity {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDensity params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UFluidSimComponent::GetColorCurveScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.GetColorCurveScale"));
    struct Params_GetColorCurveScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetColorCurveScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UCurveLinearColor* UFluidSimComponent::GetColorCurve() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FluidSim.FluidSimComponent.GetColorCurve"));
    struct Params_GetColorCurve {
        UCurveLinearColor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetColorCurve params{};
    ProcessEvent(func, &params);
    return (UCurveLinearColor*)params.ReturnValue;
}
