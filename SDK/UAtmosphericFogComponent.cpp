#include "FAtmospherePrecomputeFullParameters.hpp"
#include "FAtmospherePrecomputeParameters.hpp"
#include "FColor.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UAtmosphericFogComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "UTexture2D.hpp"
void UAtmosphericFogComponent::SetTwilightNightFogPower(float NewFogPower) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetTwilightNightFogPower"));
    struct Params_SetTwilightNightFogPower {
        float NewFogPower; // 0x0
    }; // Size: 0x4
    Params_SetTwilightNightFogPower params{};
    params.NewFogPower = (float)NewFogPower;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetTwilightNightFogVNear(float NewFogVNear) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetTwilightNightFogVNear"));
    struct Params_SetTwilightNightFogVNear {
        float NewFogVNear; // 0x0
    }; // Size: 0x4
    Params_SetTwilightNightFogVNear params{};
    params.NewFogVNear = (float)NewFogVNear;
    ProcessEvent(func, &params);
}
UAtmosphericFogComponent* UAtmosphericFogComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AtmosphericFogComponent");
    return (UAtmosphericFogComponent*)res;
}
void UAtmosphericFogComponent::SetTwilightNightIntensity(float NewIntensity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetTwilightNightIntensity"));
    struct Params_SetTwilightNightIntensity {
        float NewIntensity; // 0x0
    }; // Size: 0x4
    Params_SetTwilightNightIntensity params{};
    params.NewIntensity = (float)NewIntensity;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::StartPrecompute() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.StartPrecompute"));
    struct Params_StartPrecompute {
    }; // Size: 0x0
    Params_StartPrecompute params{};
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetTwilightNightFogStart(float NewFogStart) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetTwilightNightFogStart"));
    struct Params_SetTwilightNightFogStart {
        float NewFogStart; // 0x0
    }; // Size: 0x4
    Params_SetTwilightNightFogStart params{};
    params.NewFogStart = (float)NewFogStart;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetTwilightNightModColor(FLinearColor NewModColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetTwilightNightModColor"));
    struct Params_SetTwilightNightModColor {
        FLinearColor NewModColor; // 0x0
    }; // Size: 0x10
    Params_SetTwilightNightModColor params{};
    params.NewModColor = (FLinearColor)NewModColor;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::DisableGroundScattering(bool NewGroundScattering) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.DisableGroundScattering"));
    struct Params_DisableGroundScattering {
        bool NewGroundScattering; // 0x0
    }; // Size: 0x1
    Params_DisableGroundScattering params{};
    params.NewGroundScattering = (bool)NewGroundScattering;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetTwilightNightFogVFar(float NewFogVFar) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetTwilightNightFogVFar"));
    struct Params_SetTwilightNightFogVFar {
        float NewFogVFar; // 0x0
    }; // Size: 0x4
    Params_SetTwilightNightFogVFar params{};
    params.NewFogVFar = (float)NewFogVFar;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetGroundOffset(float NewGroundOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetGroundOffset"));
    struct Params_SetGroundOffset {
        float NewGroundOffset; // 0x0
    }; // Size: 0x4
    Params_SetGroundOffset params{};
    params.NewGroundOffset = (float)NewGroundOffset;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetPrecomputeParamsFull(FAtmospherePrecomputeFullParameters FullParameters, int32_t MaxScatteringOrder, int32_t InscatterAltitudeSampleNum) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetPrecomputeParamsFull"));
    struct Params_SetPrecomputeParamsFull {
        FAtmospherePrecomputeFullParameters FullParameters; // 0x0
        int32_t MaxScatteringOrder; // 0x28
        int32_t InscatterAltitudeSampleNum; // 0x2c
    }; // Size: 0x30
    Params_SetPrecomputeParamsFull params{};
    params.FullParameters = (FAtmospherePrecomputeFullParameters)FullParameters;
    params.MaxScatteringOrder = (int32_t)MaxScatteringOrder;
    params.InscatterAltitudeSampleNum = (int32_t)InscatterAltitudeSampleNum;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetTwilightNightFogIntensity(float NewFogIntensity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetTwilightNightFogIntensity"));
    struct Params_SetTwilightNightFogIntensity {
        float NewFogIntensity; // 0x0
    }; // Size: 0x4
    Params_SetTwilightNightFogIntensity params{};
    params.NewFogIntensity = (float)NewFogIntensity;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetTwilightNightFogEnd(float NewFogEnd) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetTwilightNightFogEnd"));
    struct Params_SetTwilightNightFogEnd {
        float NewFogEnd; // 0x0
    }; // Size: 0x4
    Params_SetTwilightNightFogEnd params{};
    params.NewFogEnd = (float)NewFogEnd;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetDesaturation(float NewDesaturation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetDesaturation"));
    struct Params_SetDesaturation {
        float NewDesaturation; // 0x0
    }; // Size: 0x4
    Params_SetDesaturation params{};
    params.NewDesaturation = (float)NewDesaturation;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetTwilightNightFogDesaturation(float NewFogDesaturation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetTwilightNightFogDesaturation"));
    struct Params_SetTwilightNightFogDesaturation {
        float NewFogDesaturation; // 0x0
    }; // Size: 0x4
    Params_SetTwilightNightFogDesaturation params{};
    params.NewFogDesaturation = (float)NewFogDesaturation;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetTwilightNightDesaturation(float NewDesaturation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetTwilightNightDesaturation"));
    struct Params_SetTwilightNightDesaturation {
        float NewDesaturation; // 0x0
    }; // Size: 0x4
    Params_SetTwilightNightDesaturation params{};
    params.NewDesaturation = (float)NewDesaturation;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetAltitudeScale(float NewAltitudeScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetAltitudeScale"));
    struct Params_SetAltitudeScale {
        float NewAltitudeScale; // 0x0
    }; // Size: 0x4
    Params_SetAltitudeScale params{};
    params.NewAltitudeScale = (float)NewAltitudeScale;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetTwilightNightColorationVBase(float NewVBase) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetTwilightNightColorationVBase"));
    struct Params_SetTwilightNightColorationVBase {
        float NewVBase; // 0x0
    }; // Size: 0x4
    Params_SetTwilightNightColorationVBase params{};
    params.NewVBase = (float)NewVBase;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetDistanceScale(float NewDistanceScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetDistanceScale"));
    struct Params_SetDistanceScale {
        float NewDistanceScale; // 0x0
    }; // Size: 0x4
    Params_SetDistanceScale params{};
    params.NewDistanceScale = (float)NewDistanceScale;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetTwilightNightColorationU(float NewU) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetTwilightNightColorationU"));
    struct Params_SetTwilightNightColorationU {
        float NewU; // 0x0
    }; // Size: 0x4
    Params_SetTwilightNightColorationU params{};
    params.NewU = (float)NewU;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetTwilightNightColorationTexture(UTexture2D* NewTexture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetTwilightNightColorationTexture"));
    struct Params_SetTwilightNightColorationTexture {
        UTexture2D* NewTexture; // 0x0
    }; // Size: 0x8
    Params_SetTwilightNightColorationTexture params{};
    params.NewTexture = (UTexture2D*)NewTexture;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetSunMultiplier(float NewSunMultiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetSunMultiplier"));
    struct Params_SetSunMultiplier {
        float NewSunMultiplier; // 0x0
    }; // Size: 0x4
    Params_SetSunMultiplier params{};
    params.NewSunMultiplier = (float)NewSunMultiplier;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetStartDistance(float NewStartDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetStartDistance"));
    struct Params_SetStartDistance {
        float NewStartDistance; // 0x0
    }; // Size: 0x4
    Params_SetStartDistance params{};
    params.NewStartDistance = (float)NewStartDistance;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetSunDiscScale(float NewSunDiscScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetSunDiscScale"));
    struct Params_SetSunDiscScale {
        float NewSunDiscScale; // 0x0
    }; // Size: 0x4
    Params_SetSunDiscScale params{};
    params.NewSunDiscScale = (float)NewSunDiscScale;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetPrecomputeParams(float DensityHeight, int32_t MaxScatteringOrder, int32_t InscatterAltitudeSampleNum) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetPrecomputeParams"));
    struct Params_SetPrecomputeParams {
        float DensityHeight; // 0x0
        int32_t MaxScatteringOrder; // 0x4
        int32_t InscatterAltitudeSampleNum; // 0x8
    }; // Size: 0xc
    Params_SetPrecomputeParams params{};
    params.DensityHeight = (float)DensityHeight;
    params.MaxScatteringOrder = (int32_t)MaxScatteringOrder;
    params.InscatterAltitudeSampleNum = (int32_t)InscatterAltitudeSampleNum;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetGroundFogDesaturation(float NewGroundFogDesaturation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetGroundFogDesaturation"));
    struct Params_SetGroundFogDesaturation {
        float NewGroundFogDesaturation; // 0x0
    }; // Size: 0x4
    Params_SetGroundFogDesaturation params{};
    params.NewGroundFogDesaturation = (float)NewGroundFogDesaturation;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetFogMultiplier(float NewFogMultiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetFogMultiplier"));
    struct Params_SetFogMultiplier {
        float NewFogMultiplier; // 0x0
    }; // Size: 0x4
    Params_SetFogMultiplier params{};
    params.NewFogMultiplier = (float)NewFogMultiplier;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetDistanceOffset(float NewDistanceOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetDistanceOffset"));
    struct Params_SetDistanceOffset {
        float NewDistanceOffset; // 0x0
    }; // Size: 0x4
    Params_SetDistanceOffset params{};
    params.NewDistanceOffset = (float)NewDistanceOffset;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetDensityOffset(float NewDensityOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetDensityOffset"));
    struct Params_SetDensityOffset {
        float NewDensityOffset; // 0x0
    }; // Size: 0x4
    Params_SetDensityOffset params{};
    params.NewDensityOffset = (float)NewDensityOffset;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetDefaultBrightness(float NewBrightness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetDefaultBrightness"));
    struct Params_SetDefaultBrightness {
        float NewBrightness; // 0x0
    }; // Size: 0x4
    Params_SetDefaultBrightness params{};
    params.NewBrightness = (float)NewBrightness;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetDensityMultiplier(float NewDensityMultiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetDensityMultiplier"));
    struct Params_SetDensityMultiplier {
        float NewDensityMultiplier; // 0x0
    }; // Size: 0x4
    Params_SetDensityMultiplier params{};
    params.NewDensityMultiplier = (float)NewDensityMultiplier;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetDefaultSunDirection(FVector NewSunDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetDefaultSunDirection"));
    struct Params_SetDefaultSunDirection {
        FVector NewSunDirection; // 0x0
    }; // Size: 0xc
    Params_SetDefaultSunDirection params{};
    params.NewSunDirection = (FVector)NewSunDirection;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::SetDefaultLightColor(FLinearColor NewLightColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.SetDefaultLightColor"));
    struct Params_SetDefaultLightColor {
        FLinearColor NewLightColor; // 0x0
    }; // Size: 0x10
    Params_SetDefaultLightColor params{};
    params.NewLightColor = (FLinearColor)NewLightColor;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::IgnoreSceneSunlight(bool NewIgnoreSceneSunlight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.IgnoreSceneSunlight"));
    struct Params_IgnoreSceneSunlight {
        bool NewIgnoreSceneSunlight; // 0x0
    }; // Size: 0x1
    Params_IgnoreSceneSunlight params{};
    params.NewIgnoreSceneSunlight = (bool)NewIgnoreSceneSunlight;
    ProcessEvent(func, &params);
}
void UAtmosphericFogComponent::DisableSunDisk(bool NewSunDisk) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AtmosphericFogComponent.DisableSunDisk"));
    struct Params_DisableSunDisk {
        bool NewSunDisk; // 0x0
    }; // Size: 0x1
    Params_DisableSunDisk params{};
    params.NewSunDisk = (bool)NewSunDisk;
    ProcessEvent(func, &params);
}
