#include "FColor.hpp"
#include "FLightmassDirectionalLightSettings.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UDirectionalLightComponent.hpp"
#include "UFunction.hpp"
#include "ULightComponent.hpp"
UDirectionalLightComponent* UDirectionalLightComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DirectionalLightComponent");
    return (UDirectionalLightComponent*)res;
}
void UDirectionalLightComponent::SetAtmosphereSunLightIndex(int32_t NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DirectionalLightComponent.SetAtmosphereSunLightIndex"));
    struct Params_SetAtmosphereSunLightIndex {
        int32_t NewValue; // 0x0
    }; // Size: 0x4
    Params_SetAtmosphereSunLightIndex params{};
    params.NewValue = (int32_t)NewValue;
    ProcessEvent(func, &params);
}
void UDirectionalLightComponent::SetShadowDistanceFadeoutFraction(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DirectionalLightComponent.SetShadowDistanceFadeoutFraction"));
    struct Params_SetShadowDistanceFadeoutFraction {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetShadowDistanceFadeoutFraction params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UDirectionalLightComponent::SetPseudoLight(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DirectionalLightComponent.SetPseudoLight"));
    struct Params_SetPseudoLight {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetPseudoLight params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void UDirectionalLightComponent::SetShadowAmount(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DirectionalLightComponent.SetShadowAmount"));
    struct Params_SetShadowAmount {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetShadowAmount params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UDirectionalLightComponent::SetLightShaftOverrideDirection(FVector NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DirectionalLightComponent.SetLightShaftOverrideDirection"));
    struct Params_SetLightShaftOverrideDirection {
        FVector NewValue; // 0x0
    }; // Size: 0xc
    Params_SetLightShaftOverrideDirection params{};
    params.NewValue = (FVector)NewValue;
    ProcessEvent(func, &params);
}
void UDirectionalLightComponent::SetOcclusionMaskDarkness(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DirectionalLightComponent.SetOcclusionMaskDarkness"));
    struct Params_SetOcclusionMaskDarkness {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetOcclusionMaskDarkness params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UDirectionalLightComponent::SetEnableLightShaftOcclusion(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DirectionalLightComponent.SetEnableLightShaftOcclusion"));
    struct Params_SetEnableLightShaftOcclusion {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetEnableLightShaftOcclusion params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void UDirectionalLightComponent::SetOcclusionDepthRange(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DirectionalLightComponent.SetOcclusionDepthRange"));
    struct Params_SetOcclusionDepthRange {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetOcclusionDepthRange params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UDirectionalLightComponent::SetDynamicShadowDistanceStationaryLight(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DirectionalLightComponent.SetDynamicShadowDistanceStationaryLight"));
    struct Params_SetDynamicShadowDistanceStationaryLight {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetDynamicShadowDistanceStationaryLight params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UDirectionalLightComponent::SetDynamicShadowDistanceMovableLight(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DirectionalLightComponent.SetDynamicShadowDistanceMovableLight"));
    struct Params_SetDynamicShadowDistanceMovableLight {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetDynamicShadowDistanceMovableLight params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UDirectionalLightComponent::SetDynamicShadowCascades(int32_t NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DirectionalLightComponent.SetDynamicShadowCascades"));
    struct Params_SetDynamicShadowCascades {
        int32_t NewValue; // 0x0
    }; // Size: 0x4
    Params_SetDynamicShadowCascades params{};
    params.NewValue = (int32_t)NewValue;
    ProcessEvent(func, &params);
}
void UDirectionalLightComponent::SetCloudShadowOnSurfaceStrength(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DirectionalLightComponent.SetCloudShadowOnSurfaceStrength"));
    struct Params_SetCloudShadowOnSurfaceStrength {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetCloudShadowOnSurfaceStrength params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UDirectionalLightComponent::SetCloudShadowMinMax(FVector2D NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DirectionalLightComponent.SetCloudShadowMinMax"));
    struct Params_SetCloudShadowMinMax {
        FVector2D NewValue; // 0x0
    }; // Size: 0x8
    Params_SetCloudShadowMinMax params{};
    params.NewValue = (FVector2D)NewValue;
    ProcessEvent(func, &params);
}
void UDirectionalLightComponent::SetCascadeTransitionFraction(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DirectionalLightComponent.SetCascadeTransitionFraction"));
    struct Params_SetCascadeTransitionFraction {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetCascadeTransitionFraction params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UDirectionalLightComponent::SetCascadeDistributionExponent(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DirectionalLightComponent.SetCascadeDistributionExponent"));
    struct Params_SetCascadeDistributionExponent {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetCascadeDistributionExponent params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UDirectionalLightComponent::SetAtmosphereSunLightPriority(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DirectionalLightComponent.SetAtmosphereSunLightPriority"));
    struct Params_SetAtmosphereSunLightPriority {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetAtmosphereSunLightPriority params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UDirectionalLightComponent::SetAtmosphereSunLight(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DirectionalLightComponent.SetAtmosphereSunLight"));
    struct Params_SetAtmosphereSunLight {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetAtmosphereSunLight params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
