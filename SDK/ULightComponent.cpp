#include "ELightCullingPriority.hpp"
#include "FColor.hpp"
#include "FLightingChannels.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "ULightComponent.hpp"
#include "ULightComponentBase.hpp"
#include "UMaterialInterface.hpp"
#include "UTexture.hpp"
#include "UTextureLightProfile.hpp"
void ULightComponent::SetShadowBias(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetShadowBias"));
    struct Params_SetShadowBias {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetShadowBias params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void ULightComponent::SetVolumetricScatteringIntensity(float NewIntensity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetVolumetricScatteringIntensity"));
    struct Params_SetVolumetricScatteringIntensity {
        float NewIntensity; // 0x0
    }; // Size: 0x4
    Params_SetVolumetricScatteringIntensity params{};
    params.NewIntensity = (float)NewIntensity;
    ProcessEvent(func, &params);
}
void ULightComponent::SetwbCastShadowOnMovable(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetwbCastShadowOnMovable"));
    struct Params_SetwbCastShadowOnMovable {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetwbCastShadowOnMovable params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void ULightComponent::SetBloomScale(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetBloomScale"));
    struct Params_SetBloomScale {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetBloomScale params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
ULightComponent* ULightComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightComponent");
    return (ULightComponent*)res;
}
void ULightComponent::SetTransmission(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetTransmission"));
    struct Params_SetTransmission {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetTransmission params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
bool ULightComponent::ClearEditorPreviewColor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.ClearEditorPreviewColor"));
    struct Params_ClearEditorPreviewColor {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ClearEditorPreviewColor params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ULightComponent::SetIESBrightnessScale(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetIESBrightnessScale"));
    struct Params_SetIESBrightnessScale {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetIESBrightnessScale params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void ULightComponent::SetwbDoNotCacheShadows(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetwbDoNotCacheShadows"));
    struct Params_SetwbDoNotCacheShadows {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetwbDoNotCacheShadows params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void ULightComponent::SetUseTemperature(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetUseTemperature"));
    struct Params_SetUseTemperature {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetUseTemperature params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void ULightComponent::SetUseIESBrightness(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetUseIESBrightness"));
    struct Params_SetUseIESBrightness {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetUseIESBrightness params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void ULightComponent::SetTemperature(float NewTemperature) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetTemperature"));
    struct Params_SetTemperature {
        float NewTemperature; // 0x0
    }; // Size: 0x4
    Params_SetTemperature params{};
    params.NewTemperature = (float)NewTemperature;
    ProcessEvent(func, &params);
}
void ULightComponent::SetSpecularScale(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetSpecularScale"));
    struct Params_SetSpecularScale {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetSpecularScale params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void ULightComponent::SetShadowSlopeBias(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetShadowSlopeBias"));
    struct Params_SetShadowSlopeBias {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetShadowSlopeBias params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void ULightComponent::SetMinDistance(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetMinDistance"));
    struct Params_SetMinDistance {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetMinDistance params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void ULightComponent::SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetLightingChannels"));
    struct Params_SetLightingChannels {
        bool bChannel0; // 0x0
        bool bChannel1; // 0x1
        bool bChannel2; // 0x2
    }; // Size: 0x3
    Params_SetLightingChannels params{};
    params.bChannel0 = (bool)bChannel0;
    params.bChannel1 = (bool)bChannel1;
    params.bChannel2 = (bool)bChannel2;
    ProcessEvent(func, &params);
}
void ULightComponent::SetMaxDrawDistance(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetMaxDrawDistance"));
    struct Params_SetMaxDrawDistance {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetMaxDrawDistance params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void ULightComponent::SetMaxDistanceFadeRange(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetMaxDistanceFadeRange"));
    struct Params_SetMaxDistanceFadeRange {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetMaxDistanceFadeRange params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void ULightComponent::SetLightIntensityFColor(float NewIntensity, FColor NewLightColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetLightIntensityFColor"));
    struct Params_SetLightIntensityFColor {
        float NewIntensity; // 0x0
        FColor NewLightColor; // 0x4
    }; // Size: 0x8
    Params_SetLightIntensityFColor params{};
    params.NewIntensity = (float)NewIntensity;
    params.NewLightColor = (FColor)NewLightColor;
    ProcessEvent(func, &params);
}
void ULightComponent::SetLightIntensityColor(float NewIntensity, FLinearColor NewLightColor, bool bSRGB) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetLightIntensityColor"));
    struct Params_SetLightIntensityColor {
        float NewIntensity; // 0x0
        FLinearColor NewLightColor; // 0x4
        bool bSRGB; // 0x14
    }; // Size: 0x15
    Params_SetLightIntensityColor params{};
    params.NewIntensity = (float)NewIntensity;
    params.NewLightColor = (FLinearColor)NewLightColor;
    params.bSRGB = (bool)bSRGB;
    ProcessEvent(func, &params);
}
bool ULightComponent::SetEditorPreviewIntensity(float NewIntensity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetEditorPreviewIntensity"));
    struct Params_SetEditorPreviewIntensity {
        float NewIntensity; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_SetEditorPreviewIntensity params{};
    params.NewIntensity = (float)NewIntensity;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ULightComponent::SetLightFunctionScale(FVector NewLightFunctionScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetLightFunctionScale"));
    struct Params_SetLightFunctionScale {
        FVector NewLightFunctionScale; // 0x0
    }; // Size: 0xc
    Params_SetLightFunctionScale params{};
    params.NewLightFunctionScale = (FVector)NewLightFunctionScale;
    ProcessEvent(func, &params);
}
void ULightComponent::SetLightFunctionMaterial(UMaterialInterface* NewLightFunctionMaterial) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetLightFunctionMaterial"));
    struct Params_SetLightFunctionMaterial {
        UMaterialInterface* NewLightFunctionMaterial; // 0x0
    }; // Size: 0x8
    Params_SetLightFunctionMaterial params{};
    params.NewLightFunctionMaterial = (UMaterialInterface*)NewLightFunctionMaterial;
    ProcessEvent(func, &params);
}
void ULightComponent::SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetLightFunctionFadeDistance"));
    struct Params_SetLightFunctionFadeDistance {
        float NewLightFunctionFadeDistance; // 0x0
    }; // Size: 0x4
    Params_SetLightFunctionFadeDistance params{};
    params.NewLightFunctionFadeDistance = (float)NewLightFunctionFadeDistance;
    ProcessEvent(func, &params);
}
void ULightComponent::SetLightFunctionDisabledBrightness(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetLightFunctionDisabledBrightness"));
    struct Params_SetLightFunctionDisabledBrightness {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetLightFunctionDisabledBrightness params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void ULightComponent::SetLightFColor(FColor NewLightColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetLightFColor"));
    struct Params_SetLightFColor {
        FColor NewLightColor; // 0x0
    }; // Size: 0x4
    Params_SetLightFColor params{};
    params.NewLightColor = (FColor)NewLightColor;
    ProcessEvent(func, &params);
}
void ULightComponent::SetCastShadowsFromMovableObjectsOnly(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetCastShadowsFromMovableObjectsOnly"));
    struct Params_SetCastShadowsFromMovableObjectsOnly {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_SetCastShadowsFromMovableObjectsOnly params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void ULightComponent::SetLightColor(FLinearColor NewLightColor, bool bSRGB) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetLightColor"));
    struct Params_SetLightColor {
        FLinearColor NewLightColor; // 0x0
        bool bSRGB; // 0x10
    }; // Size: 0x11
    Params_SetLightColor params{};
    params.NewLightColor = (FLinearColor)NewLightColor;
    params.bSRGB = (bool)bSRGB;
    ProcessEvent(func, &params);
}
void ULightComponent::SetIntensity(float NewIntensity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetIntensity"));
    struct Params_SetIntensity {
        float NewIntensity; // 0x0
    }; // Size: 0x4
    Params_SetIntensity params{};
    params.NewIntensity = (float)NewIntensity;
    ProcessEvent(func, &params);
}
void ULightComponent::SetIndirectLightingIntensity(float NewIntensity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetIndirectLightingIntensity"));
    struct Params_SetIndirectLightingIntensity {
        float NewIntensity; // 0x0
    }; // Size: 0x4
    Params_SetIndirectLightingIntensity params{};
    params.NewIntensity = (float)NewIntensity;
    ProcessEvent(func, &params);
}
void ULightComponent::SetAffectDynamicIndirectLighting(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetAffectDynamicIndirectLighting"));
    struct Params_SetAffectDynamicIndirectLighting {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetAffectDynamicIndirectLighting params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void ULightComponent::SetIESTexture(UTextureLightProfile* NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetIESTexture"));
    struct Params_SetIESTexture {
        UTextureLightProfile* NewValue; // 0x0
    }; // Size: 0x8
    Params_SetIESTexture params{};
    params.NewValue = (UTextureLightProfile*)NewValue;
    ProcessEvent(func, &params);
}
void ULightComponent::SetForceCachedShadowsForMovablePrimitives(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetForceCachedShadowsForMovablePrimitives"));
    struct Params_SetForceCachedShadowsForMovablePrimitives {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetForceCachedShadowsForMovablePrimitives params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
bool ULightComponent::SetEditorPreviewColor(FLinearColor NewLightColor, bool bSRGB) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetEditorPreviewColor"));
    struct Params_SetEditorPreviewColor {
        FLinearColor NewLightColor; // 0x0
        bool bSRGB; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_SetEditorPreviewColor params{};
    params.NewLightColor = (FLinearColor)NewLightColor;
    params.bSRGB = (bool)bSRGB;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ULightComponent::SetEnableLightShaftBloom(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetEnableLightShaftBloom"));
    struct Params_SetEnableLightShaftBloom {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetEnableLightShaftBloom params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
bool ULightComponent::SetEditorPreviewIntensityColor(float NewIntensity, FLinearColor NewLightColor, bool bSRGB) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetEditorPreviewIntensityColor"));
    struct Params_SetEditorPreviewIntensityColor {
        float NewIntensity; // 0x0
        FLinearColor NewLightColor; // 0x4
        bool bSRGB; // 0x14
        bool ReturnValue; // 0x15
    }; // Size: 0x16
    Params_SetEditorPreviewIntensityColor params{};
    params.NewIntensity = (float)NewIntensity;
    params.NewLightColor = (FLinearColor)NewLightColor;
    params.bSRGB = (bool)bSRGB;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ULightComponent::SetDynamicLightColor(FLinearColor NewLightColor, bool bSRGB) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetDynamicLightColor"));
    struct Params_SetDynamicLightColor {
        FLinearColor NewLightColor; // 0x0
        bool bSRGB; // 0x10
    }; // Size: 0x11
    Params_SetDynamicLightColor params{};
    params.NewLightColor = (FLinearColor)NewLightColor;
    params.bSRGB = (bool)bSRGB;
    ProcessEvent(func, &params);
}
void ULightComponent::SetBloomTint(FColor NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetBloomTint"));
    struct Params_SetBloomTint {
        FColor NewValue; // 0x0
    }; // Size: 0x4
    Params_SetBloomTint params{};
    params.NewValue = (FColor)NewValue;
    ProcessEvent(func, &params);
}
void ULightComponent::SetDynamicIntensity(float NewIntensity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetDynamicIntensity"));
    struct Params_SetDynamicIntensity {
        float NewIntensity; // 0x0
    }; // Size: 0x4
    Params_SetDynamicIntensity params{};
    params.NewIntensity = (float)NewIntensity;
    ProcessEvent(func, &params);
}
void ULightComponent::SetCastShadowsFromStaticObjectsOnly(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetCastShadowsFromStaticObjectsOnly"));
    struct Params_SetCastShadowsFromStaticObjectsOnly {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_SetCastShadowsFromStaticObjectsOnly params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void ULightComponent::SetBloomThreshold(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetBloomThreshold"));
    struct Params_SetBloomThreshold {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetBloomThreshold params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void ULightComponent::SetBloomMaxBrightness(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetBloomMaxBrightness"));
    struct Params_SetBloomMaxBrightness {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetBloomMaxBrightness params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void ULightComponent::SetAffectTranslucentLighting(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.SetAffectTranslucentLighting"));
    struct Params_SetAffectTranslucentLighting {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetAffectTranslucentLighting params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
bool ULightComponent::ClearEditorPreviewIntensityColor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.ClearEditorPreviewIntensityColor"));
    struct Params_ClearEditorPreviewIntensityColor {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ClearEditorPreviewIntensityColor params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ULightComponent::ClearEditorPreviewIntensity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LightComponent.ClearEditorPreviewIntensity"));
    struct Params_ClearEditorPreviewIntensity {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ClearEditorPreviewIntensity params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
