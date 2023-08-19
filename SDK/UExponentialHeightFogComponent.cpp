#include "FColor.hpp"
#include "FExponentialHeightFogData.hpp"
#include "FExponentialHeightFogVolumetricLightingShadowsRange.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UExponentialHeightFogComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "UTexture.hpp"
#include "UTextureCube.hpp"
UExponentialHeightFogComponent* UExponentialHeightFogComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ExponentialHeightFogComponent");
    return (UExponentialHeightFogComponent*)res;
}
void UExponentialHeightFogComponent::SetDirectionalInscatteringExponent(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringExponent"));
    struct Params_SetDirectionalInscatteringExponent {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetDirectionalInscatteringExponent params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetDensityMapDensityRange(FVector2D Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetDensityMapDensityRange"));
    struct Params_SetDensityMapDensityRange {
        FVector2D Value; // 0x0
    }; // Size: 0x8
    Params_SetDensityMapDensityRange params{};
    params.Value = (FVector2D)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetFogInscatteringColorDirLightLuminanceModulate(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetFogInscatteringColorDirLightLuminanceModulate"));
    struct Params_SetFogInscatteringColorDirLightLuminanceModulate {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetFogInscatteringColorDirLightLuminanceModulate params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetVolumetricLightingShadowsMinimum(FExponentialHeightFogVolumetricLightingShadowsRange NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricLightingShadowsMinimum"));
    struct Params_SetVolumetricLightingShadowsMinimum {
        FExponentialHeightFogVolumetricLightingShadowsRange NewValue; // 0x0
    }; // Size: 0x10
    Params_SetVolumetricLightingShadowsMinimum params{};
    params.NewValue = (FExponentialHeightFogVolumetricLightingShadowsRange)NewValue;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::wSetUseSkylight(bool Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.wSetUseSkylight"));
    struct Params_wSetUseSkylight {
        bool Value; // 0x0
    }; // Size: 0x1
    Params_wSetUseSkylight params{};
    params.Value = (bool)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetVolumetricLightingDirectionalLightScattering(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricLightingDirectionalLightScattering"));
    struct Params_SetVolumetricLightingDirectionalLightScattering {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetVolumetricLightingDirectionalLightScattering params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetFalloffStartMap(UTexture* Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetFalloffStartMap"));
    struct Params_SetFalloffStartMap {
        UTexture* Value; // 0x0
    }; // Size: 0x8
    Params_SetFalloffStartMap params{};
    params.Value = (UTexture*)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::wSetInscatteringColorCubemapFactor(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.wSetInscatteringColorCubemapFactor"));
    struct Params_wSetInscatteringColorCubemapFactor {
        float Value; // 0x0
    }; // Size: 0x4
    Params_wSetInscatteringColorCubemapFactor params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetWindFactor(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetWindFactor"));
    struct Params_SetWindFactor {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetWindFactor params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetOverrideLightDirection(FVector NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetOverrideLightDirection"));
    struct Params_SetOverrideLightDirection {
        FVector NewValue; // 0x0
    }; // Size: 0xc
    Params_SetOverrideLightDirection params{};
    params.NewValue = (FVector)NewValue;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetVolumetricLightingCloudShadowsMinimum(FExponentialHeightFogVolumetricLightingShadowsRange NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricLightingCloudShadowsMinimum"));
    struct Params_SetVolumetricLightingCloudShadowsMinimum {
        FExponentialHeightFogVolumetricLightingShadowsRange NewValue; // 0x0
    }; // Size: 0x10
    Params_SetVolumetricLightingCloudShadowsMinimum params{};
    params.NewValue = (FExponentialHeightFogVolumetricLightingShadowsRange)NewValue;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetVolumetricLightingDirectionalLightDesaturation(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricLightingDirectionalLightDesaturation"));
    struct Params_SetVolumetricLightingDirectionalLightDesaturation {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetVolumetricLightingDirectionalLightDesaturation params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetVolumetricInscatteringContribution(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricInscatteringContribution"));
    struct Params_SetVolumetricInscatteringContribution {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetVolumetricInscatteringContribution params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetMinDensityFactor(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetMinDensityFactor"));
    struct Params_SetMinDensityFactor {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetMinDensityFactor params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetVolumetricFogScatteringDistribution(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricFogScatteringDistribution"));
    struct Params_SetVolumetricFogScatteringDistribution {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetVolumetricFogScatteringDistribution params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetVolumetricFogHeightFogNearStartDistance(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricFogHeightFogNearStartDistance"));
    struct Params_SetVolumetricFogHeightFogNearStartDistance {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetVolumetricFogHeightFogNearStartDistance params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetVolumetricFogExtinctionScale(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricFogExtinctionScale"));
    struct Params_SetVolumetricFogExtinctionScale {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetVolumetricFogExtinctionScale params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetNonDirectionalInscatteringColorDistance(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetNonDirectionalInscatteringColorDistance"));
    struct Params_SetNonDirectionalInscatteringColorDistance {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetNonDirectionalInscatteringColorDistance params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetDirectionalInscatteringColor(FLinearColor Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringColor"));
    struct Params_SetDirectionalInscatteringColor {
        FLinearColor Value; // 0x0
    }; // Size: 0x10
    Params_SetDirectionalInscatteringColor params{};
    params.Value = (FLinearColor)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetVolumetricFogHeightFogNearFullDistance(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricFogHeightFogNearFullDistance"));
    struct Params_SetVolumetricFogHeightFogNearFullDistance {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetVolumetricFogHeightFogNearFullDistance params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetDensityMultiplierMap(UTexture* Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetDensityMultiplierMap"));
    struct Params_SetDensityMultiplierMap {
        UTexture* Value; // 0x0
    }; // Size: 0x8
    Params_SetDensityMultiplierMap params{};
    params.Value = (UTexture*)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetVolumetricFogHeightFogColorationBlendStrength(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricFogHeightFogColorationBlendStrength"));
    struct Params_SetVolumetricFogHeightFogColorationBlendStrength {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetVolumetricFogHeightFogColorationBlendStrength params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetVolumetricFogHeightFogColorationBlendStartDistance(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricFogHeightFogColorationBlendStartDistance"));
    struct Params_SetVolumetricFogHeightFogColorationBlendStartDistance {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetVolumetricFogHeightFogColorationBlendStartDistance params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetVolumetricFogHeightFogColorationBlendFullDistance(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricFogHeightFogColorationBlendFullDistance"));
    struct Params_SetVolumetricFogHeightFogColorationBlendFullDistance {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetVolumetricFogHeightFogColorationBlendFullDistance params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetFogDensity(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetFogDensity"));
    struct Params_SetFogDensity {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetFogDensity params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetDirectionalInscatteringColorDirLightLuminanceModulate(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringColorDirLightLuminanceModulate"));
    struct Params_SetDirectionalInscatteringColorDirLightLuminanceModulate {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetDirectionalInscatteringColorDirLightLuminanceModulate params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetVolumetricFogEmissive(FLinearColor NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricFogEmissive"));
    struct Params_SetVolumetricFogEmissive {
        FLinearColor NewValue; // 0x0
    }; // Size: 0x10
    Params_SetVolumetricFogEmissive params{};
    params.NewValue = (FLinearColor)NewValue;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetStartDistance(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetStartDistance"));
    struct Params_SetStartDistance {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetStartDistance params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetVolumetricFogDistance(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricFogDistance"));
    struct Params_SetVolumetricFogDistance {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetVolumetricFogDistance params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetDirectionalInscatteringStartDistance(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringStartDistance"));
    struct Params_SetDirectionalInscatteringStartDistance {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetDirectionalInscatteringStartDistance params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetVolumetricFogAlbedo(FColor NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricFogAlbedo"));
    struct Params_SetVolumetricFogAlbedo {
        FColor NewValue; // 0x0
    }; // Size: 0x4
    Params_SetVolumetricFogAlbedo params{};
    params.NewValue = (FColor)NewValue;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetFogMaxOpacity(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetFogMaxOpacity"));
    struct Params_SetFogMaxOpacity {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetFogMaxOpacity params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetNoiseMinFactor(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetNoiseMinFactor"));
    struct Params_SetNoiseMinFactor {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetNoiseMinFactor params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetVolumetricFog(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricFog"));
    struct Params_SetVolumetricFog {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetVolumetricFog params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetVolumetricDirectionalInscatteringContribution(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricDirectionalInscatteringContribution"));
    struct Params_SetVolumetricDirectionalInscatteringContribution {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetVolumetricDirectionalInscatteringContribution params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetOverrideLightLuminance(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetOverrideLightLuminance"));
    struct Params_SetOverrideLightLuminance {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetOverrideLightLuminance params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetScatteringDistributionInterpStart(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetScatteringDistributionInterpStart"));
    struct Params_SetScatteringDistributionInterpStart {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetScatteringDistributionInterpStart params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetScatteringDistributionInterpEnd(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetScatteringDistributionInterpEnd"));
    struct Params_SetScatteringDistributionInterpEnd {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetScatteringDistributionInterpEnd params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetDensityTweakingLightingThreshold(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetDensityTweakingLightingThreshold"));
    struct Params_SetDensityTweakingLightingThreshold {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetDensityTweakingLightingThreshold params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetMaxScatteringDistribution(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetMaxScatteringDistribution"));
    struct Params_SetMaxScatteringDistribution {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetMaxScatteringDistribution params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetHighQualityDistance(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetHighQualityDistance"));
    struct Params_SetHighQualityDistance {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetHighQualityDistance params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetNoiseTilingSize(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetNoiseTilingSize"));
    struct Params_SetNoiseTilingSize {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetNoiseTilingSize params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetEnableVariableScatteringDistribution(bool Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetEnableVariableScatteringDistribution"));
    struct Params_SetEnableVariableScatteringDistribution {
        bool Value; // 0x0
    }; // Size: 0x1
    Params_SetEnableVariableScatteringDistribution params{};
    params.Value = (bool)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetDensityMapFalloffLengthRange(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetDensityMapFalloffLengthRange"));
    struct Params_SetDensityMapFalloffLengthRange {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetDensityMapFalloffLengthRange params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetNoiseSmoothStepMin(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetNoiseSmoothStepMin"));
    struct Params_SetNoiseSmoothStepMin {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetNoiseSmoothStepMin params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetNoiseSmoothStepMax(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetNoiseSmoothStepMax"));
    struct Params_SetNoiseSmoothStepMax {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetNoiseSmoothStepMax params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetNoiseMaxFactor(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetNoiseMaxFactor"));
    struct Params_SetNoiseMaxFactor {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetNoiseMaxFactor params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetMinScatteringDistribution(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetMinScatteringDistribution"));
    struct Params_SetMinScatteringDistribution {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetMinScatteringDistribution params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetDistantFogCloudShadowsMinimum(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetDistantFogCloudShadowsMinimum"));
    struct Params_SetDistantFogCloudShadowsMinimum {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetDistantFogCloudShadowsMinimum params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetFullyDirectionalInscatteringColorDistance(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetFullyDirectionalInscatteringColorDistance"));
    struct Params_SetFullyDirectionalInscatteringColorDistance {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetFullyDirectionalInscatteringColorDistance params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetInscatteringTextureTint(FLinearColor Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetInscatteringTextureTint"));
    struct Params_SetInscatteringTextureTint {
        FLinearColor Value; // 0x0
    }; // Size: 0x10
    Params_SetInscatteringTextureTint params{};
    params.Value = (FLinearColor)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetDensityMapOrigin(FVector2D Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetDensityMapOrigin"));
    struct Params_SetDensityMapOrigin {
        FVector2D Value; // 0x0
    }; // Size: 0x8
    Params_SetDensityMapOrigin params{};
    params.Value = (FVector2D)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetInscatteringColorCubemapAngle(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetInscatteringColorCubemapAngle"));
    struct Params_SetInscatteringColorCubemapAngle {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetInscatteringColorCubemapAngle params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetInscatteringColorCubemap(UTextureCube* Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetInscatteringColorCubemap"));
    struct Params_SetInscatteringColorCubemap {
        UTextureCube* Value; // 0x0
    }; // Size: 0x8
    Params_SetInscatteringColorCubemap params{};
    params.Value = (UTextureCube*)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetDensityMapSize(FVector2D Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetDensityMapSize"));
    struct Params_SetDensityMapSize {
        FVector2D Value; // 0x0
    }; // Size: 0x8
    Params_SetDensityMapSize params{};
    params.Value = (FVector2D)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetFullDensityDistance(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetFullDensityDistance"));
    struct Params_SetFullDensityDistance {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetFullDensityDistance params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetFogInscatteringColor(FLinearColor Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetFogInscatteringColor"));
    struct Params_SetFogInscatteringColor {
        FLinearColor Value; // 0x0
    }; // Size: 0x10
    Params_SetFogInscatteringColor params{};
    params.Value = (FLinearColor)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetFogHeightFalloff(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetFogHeightFalloff"));
    struct Params_SetFogHeightFalloff {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetFogHeightFalloff params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetFogCutoffDistance(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetFogCutoffDistance"));
    struct Params_SetFogCutoffDistance {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetFogCutoffDistance params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetEmptyCellSkyOcclusion(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetEmptyCellSkyOcclusion"));
    struct Params_SetEmptyCellSkyOcclusion {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetEmptyCellSkyOcclusion params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetDensityMapFalloffStartRange(FVector2D Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetDensityMapFalloffStartRange"));
    struct Params_SetDensityMapFalloffStartRange {
        FVector2D Value; // 0x0
    }; // Size: 0x8
    Params_SetDensityMapFalloffStartRange params{};
    params.Value = (FVector2D)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetDensityTweakingMinPercentage(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetDensityTweakingMinPercentage"));
    struct Params_SetDensityTweakingMinPercentage {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetDensityTweakingMinPercentage params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::SetAliasingReduction(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.SetAliasingReduction"));
    struct Params_SetAliasingReduction {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetAliasingReduction params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::ClearOverrideLightLuminance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.ClearOverrideLightLuminance"));
    struct Params_ClearOverrideLightLuminance {
    }; // Size: 0x0
    Params_ClearOverrideLightLuminance params{};
    ProcessEvent(func, &params);
}
void UExponentialHeightFogComponent::ClearOverrideLightDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFogComponent.ClearOverrideLightDirection"));
    struct Params_ClearOverrideLightDirection {
    }; // Size: 0x0
    Params_ClearOverrideLightDirection params{};
    ProcessEvent(func, &params);
}
