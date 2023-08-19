#include "ELightUnits.hpp"
#include "FLightmassPointLightSettings.hpp"
#include "FWCullingPlane.hpp"
#include "UFunction.hpp"
#include "ULightClippingProvider.hpp"
#include "ULightComponent.hpp"
#include "ULocalLightComponent.hpp"
ULocalLightComponent* ULocalLightComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LocalLightComponent");
    return (ULocalLightComponent*)res;
}
void ULocalLightComponent::SetIntensityUnits(ELightUnits NewIntensityUnits) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LocalLightComponent.SetIntensityUnits"));
    struct Params_SetIntensityUnits {
        ELightUnits NewIntensityUnits; // 0x0
    }; // Size: 0x1
    Params_SetIntensityUnits params{};
    params.NewIntensityUnits = (ELightUnits)NewIntensityUnits;
    ProcessEvent(func, &params);
}
float ULocalLightComponent::GetUnitsConversionFactor(ELightUnits SrcUnits, ELightUnits TargetUnits, float CosHalfConeAngle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LocalLightComponent.GetUnitsConversionFactor"));
    struct Params_GetUnitsConversionFactor {
        ELightUnits SrcUnits; // 0x0
        ELightUnits TargetUnits; // 0x1
        char pad_2[0x2];
        float CosHalfConeAngle; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetUnitsConversionFactor params{};
    params.SrcUnits = (ELightUnits)SrcUnits;
    params.TargetUnits = (ELightUnits)TargetUnits;
    params.CosHalfConeAngle = (float)CosHalfConeAngle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ULocalLightComponent::SetAttenuationRadius(float NewRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.LocalLightComponent.SetAttenuationRadius"));
    struct Params_SetAttenuationRadius {
        float NewRadius; // 0x0
    }; // Size: 0x4
    Params_SetAttenuationRadius params{};
    params.NewRadius = (float)NewRadius;
    ProcessEvent(func, &params);
}
