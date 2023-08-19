#include "ESkyAtmosphereTransformMode.hpp"
#include "FColor.hpp"
#include "FGuid.hpp"
#include "FLinearColor.hpp"
#include "FTentDistribution.hpp"
#include "FVector.hpp"
#include "UDirectionalLightComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "USkyAtmosphereComponent.hpp"
#include "UTexture2D.hpp"
USkyAtmosphereComponent* USkyAtmosphereComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SkyAtmosphereComponent");
    return (USkyAtmosphereComponent*)res;
}
void USkyAtmosphereComponent::SetRayleighExponentialDistribution(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetRayleighExponentialDistribution"));
    struct Params_SetRayleighExponentialDistribution {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetRayleighExponentialDistribution params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetHeightFogContributionInscattering(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetHeightFogContributionInscattering"));
    struct Params_SetHeightFogContributionInscattering {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetHeightFogContributionInscattering params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetTransmittanceMinLightElevationAngle(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetTransmittanceMinLightElevationAngle"));
    struct Params_SetTransmittanceMinLightElevationAngle {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetTransmittanceMinLightElevationAngle params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetRayleighScattering(FLinearColor NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetRayleighScattering"));
    struct Params_SetRayleighScattering {
        FLinearColor NewValue; // 0x0
    }; // Size: 0x10
    Params_SetRayleighScattering params{};
    params.NewValue = (FLinearColor)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetMieScatteringScale(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetMieScatteringScale"));
    struct Params_SetMieScatteringScale {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetMieScatteringScale params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetSkyLuminanceFactor(FLinearColor NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetSkyLuminanceFactor"));
    struct Params_SetSkyLuminanceFactor {
        FLinearColor NewValue; // 0x0
    }; // Size: 0x10
    Params_SetSkyLuminanceFactor params{};
    params.NewValue = (FLinearColor)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetRayleighScatteringScale(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetRayleighScatteringScale"));
    struct Params_SetRayleighScatteringScale {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetRayleighScatteringScale params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
FLinearColor USkyAtmosphereComponent::GetAtmosphereTransmitanceOnGroundAtPlanetTop(UDirectionalLightComponent* DirectionalLight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.GetAtmosphereTransmitanceOnGroundAtPlanetTop"));
    struct Params_GetAtmosphereTransmitanceOnGroundAtPlanetTop {
        UDirectionalLightComponent* DirectionalLight; // 0x0
        FLinearColor ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetAtmosphereTransmitanceOnGroundAtPlanetTop params{};
    params.DirectionalLight = (UDirectionalLightComponent*)DirectionalLight;
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
void USkyAtmosphereComponent::SetOtherAbsorption(FLinearColor NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetOtherAbsorption"));
    struct Params_SetOtherAbsorption {
        FLinearColor NewValue; // 0x0
    }; // Size: 0x10
    Params_SetOtherAbsorption params{};
    params.NewValue = (FLinearColor)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetSkyDesaturation(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetSkyDesaturation"));
    struct Params_SetSkyDesaturation {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetSkyDesaturation params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetOtherAbsorptionScale(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetOtherAbsorptionScale"));
    struct Params_SetOtherAbsorptionScale {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetOtherAbsorptionScale params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetMultiScatteringFactor(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetMultiScatteringFactor"));
    struct Params_SetMultiScatteringFactor {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetMultiScatteringFactor params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetMieScattering(FLinearColor NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetMieScattering"));
    struct Params_SetMieScattering {
        FLinearColor NewValue; // 0x0
    }; // Size: 0x10
    Params_SetMieScattering params{};
    params.NewValue = (FLinearColor)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetMieExponentialDistribution(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetMieExponentialDistribution"));
    struct Params_SetMieExponentialDistribution {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetMieExponentialDistribution params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetHorizonToZenithColorationTexture(UTexture2D* NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetHorizonToZenithColorationTexture"));
    struct Params_SetHorizonToZenithColorationTexture {
        UTexture2D* NewValue; // 0x0
    }; // Size: 0x8
    Params_SetHorizonToZenithColorationTexture params{};
    params.NewValue = (UTexture2D*)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetMieAnisotropy(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetMieAnisotropy"));
    struct Params_SetMieAnisotropy {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetMieAnisotropy params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetHorizonToZenithFogIntensity(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetHorizonToZenithFogIntensity"));
    struct Params_SetHorizonToZenithFogIntensity {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetHorizonToZenithFogIntensity params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetMieAbsorptionScale(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetMieAbsorptionScale"));
    struct Params_SetMieAbsorptionScale {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetMieAbsorptionScale params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetMieAbsorption(FLinearColor NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetMieAbsorption"));
    struct Params_SetMieAbsorption {
        FLinearColor NewValue; // 0x0
    }; // Size: 0x10
    Params_SetMieAbsorption params{};
    params.NewValue = (FLinearColor)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetHorizonToZenithFogOpticalDepthScale(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetHorizonToZenithFogOpticalDepthScale"));
    struct Params_SetHorizonToZenithFogOpticalDepthScale {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetHorizonToZenithFogOpticalDepthScale params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetHorizonToZenithFogOpticalDepthPower(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetHorizonToZenithFogOpticalDepthPower"));
    struct Params_SetHorizonToZenithFogOpticalDepthPower {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetHorizonToZenithFogOpticalDepthPower params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetHeightFogContributionDesaturation(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetHeightFogContributionDesaturation"));
    struct Params_SetHeightFogContributionDesaturation {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetHeightFogContributionDesaturation params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetHorizonToZenithFogDesaturation(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetHorizonToZenithFogDesaturation"));
    struct Params_SetHorizonToZenithFogDesaturation {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetHorizonToZenithFogDesaturation params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetHorizonToZenithColorationU(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetHorizonToZenithColorationU"));
    struct Params_SetHorizonToZenithColorationU {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetHorizonToZenithColorationU params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetHorizonToZenithColorationIntensity(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetHorizonToZenithColorationIntensity"));
    struct Params_SetHorizonToZenithColorationIntensity {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetHorizonToZenithColorationIntensity params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetHorizonToZenithColorationDesaturation(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetHorizonToZenithColorationDesaturation"));
    struct Params_SetHorizonToZenithColorationDesaturation {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetHorizonToZenithColorationDesaturation params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetHeightFogContribution(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetHeightFogContribution"));
    struct Params_SetHeightFogContribution {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetHeightFogContribution params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetHeightFogContributionDirectionalInscaterring(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetHeightFogContributionDirectionalInscaterring"));
    struct Params_SetHeightFogContributionDirectionalInscaterring {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetHeightFogContributionDirectionalInscaterring params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetHeightFogContributionDesaturationInscattering(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetHeightFogContributionDesaturationInscattering"));
    struct Params_SetHeightFogContributionDesaturationInscattering {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetHeightFogContributionDesaturationInscattering params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetHeightFogContributionDesaturationDirectionalInscattering(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetHeightFogContributionDesaturationDirectionalInscattering"));
    struct Params_SetHeightFogContributionDesaturationDirectionalInscattering {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetHeightFogContributionDesaturationDirectionalInscattering params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetHeightFogAccurateInscatteringColor(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetHeightFogAccurateInscatteringColor"));
    struct Params_SetHeightFogAccurateInscatteringColor {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetHeightFogAccurateInscatteringColor params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetAtmosphereHeight(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetAtmosphereHeight"));
    struct Params_SetAtmosphereHeight {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetAtmosphereHeight params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetAerialPespectiveViewDistanceScale(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetAerialPespectiveViewDistanceScale"));
    struct Params_SetAerialPespectiveViewDistanceScale {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetAerialPespectiveViewDistanceScale params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::SetAerialPerspectiveStartDepth(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.SetAerialPerspectiveStartDepth"));
    struct Params_SetAerialPerspectiveStartDepth {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetAerialPerspectiveStartDepth params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USkyAtmosphereComponent::OverrideAtmosphereLightDirection(int32_t AtmosphereLightIndex, FVector& LightDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyAtmosphereComponent.OverrideAtmosphereLightDirection"));
    struct Params_OverrideAtmosphereLightDirection {
        int32_t AtmosphereLightIndex; // 0x0
        FVector LightDirection; // 0x4
    }; // Size: 0x10
    Params_OverrideAtmosphereLightDirection params{};
    params.AtmosphereLightIndex = (int32_t)AtmosphereLightIndex;
    params.LightDirection = (FVector)LightDirection;
    ProcessEvent(func, &params);
    LightDirection = params.LightDirection;
}
