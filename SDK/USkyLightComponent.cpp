#include "AActor.hpp"
#include "EOcclusionCombineMode.hpp"
#include "ESkyLightSourceType.hpp"
#include "FColor.hpp"
#include "FLinearColor.hpp"
#include "UFunction.hpp"
#include "ULightComponentBase.hpp"
#include "USkyLightComponent.hpp"
#include "UTextureCube.hpp"
USkyLightComponent* USkyLightComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SkyLightComponent");
    return (USkyLightComponent*)res;
}
void USkyLightComponent::SetOcclusionContrast(float InOcclusionContrast) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyLightComponent.SetOcclusionContrast"));
    struct Params_SetOcclusionContrast {
        float InOcclusionContrast; // 0x0
    }; // Size: 0x4
    Params_SetOcclusionContrast params{};
    params.InOcclusionContrast = (float)InOcclusionContrast;
    ProcessEvent(func, &params);
}
void USkyLightComponent::SetVolumetricScatteringIntensity(float NewIntensity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyLightComponent.SetVolumetricScatteringIntensity"));
    struct Params_SetVolumetricScatteringIntensity {
        float NewIntensity; // 0x0
    }; // Size: 0x4
    Params_SetVolumetricScatteringIntensity params{};
    params.NewIntensity = (float)NewIntensity;
    ProcessEvent(func, &params);
}
void USkyLightComponent::SetOcclusionTint(FColor& InTint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyLightComponent.SetOcclusionTint"));
    struct Params_SetOcclusionTint {
        FColor InTint; // 0x0
    }; // Size: 0x4
    Params_SetOcclusionTint params{};
    params.InTint = (FColor)InTint;
    ProcessEvent(func, &params);
    InTint = params.InTint;
}
void USkyLightComponent::SetMinOcclusion(float InMinOcclusion) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyLightComponent.SetMinOcclusion"));
    struct Params_SetMinOcclusion {
        float InMinOcclusion; // 0x0
    }; // Size: 0x4
    Params_SetMinOcclusion params{};
    params.InMinOcclusion = (float)InMinOcclusion;
    ProcessEvent(func, &params);
}
void USkyLightComponent::SetOcclusionExponent(float InOcclusionExponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyLightComponent.SetOcclusionExponent"));
    struct Params_SetOcclusionExponent {
        float InOcclusionExponent; // 0x0
    }; // Size: 0x4
    Params_SetOcclusionExponent params{};
    params.InOcclusionExponent = (float)InOcclusionExponent;
    ProcessEvent(func, &params);
}
void USkyLightComponent::SetLowerHemisphereColor(FLinearColor& InLowerHemisphereColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyLightComponent.SetLowerHemisphereColor"));
    struct Params_SetLowerHemisphereColor {
        FLinearColor InLowerHemisphereColor; // 0x0
    }; // Size: 0x10
    Params_SetLowerHemisphereColor params{};
    params.InLowerHemisphereColor = (FLinearColor)InLowerHemisphereColor;
    ProcessEvent(func, &params);
    InLowerHemisphereColor = params.InLowerHemisphereColor;
}
void USkyLightComponent::SetLightColor(FLinearColor NewLightColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyLightComponent.SetLightColor"));
    struct Params_SetLightColor {
        FLinearColor NewLightColor; // 0x0
    }; // Size: 0x10
    Params_SetLightColor params{};
    params.NewLightColor = (FLinearColor)NewLightColor;
    ProcessEvent(func, &params);
}
void USkyLightComponent::SetIntensity(float NewIntensity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyLightComponent.SetIntensity"));
    struct Params_SetIntensity {
        float NewIntensity; // 0x0
    }; // Size: 0x4
    Params_SetIntensity params{};
    params.NewIntensity = (float)NewIntensity;
    ProcessEvent(func, &params);
}
void USkyLightComponent::SetIndirectLightingIntensity(float NewIntensity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyLightComponent.SetIndirectLightingIntensity"));
    struct Params_SetIndirectLightingIntensity {
        float NewIntensity; // 0x0
    }; // Size: 0x4
    Params_SetIndirectLightingIntensity params{};
    params.NewIntensity = (float)NewIntensity;
    ProcessEvent(func, &params);
}
void USkyLightComponent::SetCubemapBlend(UTextureCube* SourceCubemap, UTextureCube* DestinationCubemap, float InBlendFraction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyLightComponent.SetCubemapBlend"));
    struct Params_SetCubemapBlend {
        UTextureCube* SourceCubemap; // 0x0
        UTextureCube* DestinationCubemap; // 0x8
        float InBlendFraction; // 0x10
    }; // Size: 0x14
    Params_SetCubemapBlend params{};
    params.SourceCubemap = (UTextureCube*)SourceCubemap;
    params.DestinationCubemap = (UTextureCube*)DestinationCubemap;
    params.InBlendFraction = (float)InBlendFraction;
    ProcessEvent(func, &params);
}
void USkyLightComponent::SetCubemap(UTextureCube* NewCubemap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyLightComponent.SetCubemap"));
    struct Params_SetCubemap {
        UTextureCube* NewCubemap; // 0x0
    }; // Size: 0x8
    Params_SetCubemap params{};
    params.NewCubemap = (UTextureCube*)NewCubemap;
    ProcessEvent(func, &params);
}
void USkyLightComponent::RecaptureSky() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyLightComponent.RecaptureSky"));
    struct Params_RecaptureSky {
    }; // Size: 0x0
    Params_RecaptureSky params{};
    ProcessEvent(func, &params);
}
