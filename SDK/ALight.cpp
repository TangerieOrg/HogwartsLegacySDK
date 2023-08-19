#include "AActor.hpp"
#include "ALight.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "ULightComponent.hpp"
#include "UMaterialInterface.hpp"
ALight* ALight::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Light");
    return (ALight*)res;
}
void ALight::SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Light.SetLightFunctionFadeDistance"));
    struct Params_SetLightFunctionFadeDistance {
        float NewLightFunctionFadeDistance; // 0x0
    }; // Size: 0x4
    Params_SetLightFunctionFadeDistance params{};
    params.NewLightFunctionFadeDistance = (float)NewLightFunctionFadeDistance;
    ProcessEvent(func, &params);
}
void ALight::ToggleEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Light.ToggleEnabled"));
    struct Params_ToggleEnabled {
    }; // Size: 0x0
    Params_ToggleEnabled params{};
    ProcessEvent(func, &params);
}
void ALight::SetLightFunctionScale(FVector NewLightFunctionScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Light.SetLightFunctionScale"));
    struct Params_SetLightFunctionScale {
        FVector NewLightFunctionScale; // 0x0
    }; // Size: 0xc
    Params_SetLightFunctionScale params{};
    params.NewLightFunctionScale = (FVector)NewLightFunctionScale;
    ProcessEvent(func, &params);
}
void ALight::SetCastShadows(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Light.SetCastShadows"));
    struct Params_SetCastShadows {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetCastShadows params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void ALight::SetEnabled(bool bSetEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Light.SetEnabled"));
    struct Params_SetEnabled {
        bool bSetEnabled; // 0x0
    }; // Size: 0x1
    Params_SetEnabled params{};
    params.bSetEnabled = (bool)bSetEnabled;
    ProcessEvent(func, &params);
}
void ALight::SetLightFunctionMaterial(UMaterialInterface* NewLightFunctionMaterial) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Light.SetLightFunctionMaterial"));
    struct Params_SetLightFunctionMaterial {
        UMaterialInterface* NewLightFunctionMaterial; // 0x0
    }; // Size: 0x8
    Params_SetLightFunctionMaterial params{};
    params.NewLightFunctionMaterial = (UMaterialInterface*)NewLightFunctionMaterial;
    ProcessEvent(func, &params);
}
void ALight::SetLightColor(FLinearColor NewLightColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Light.SetLightColor"));
    struct Params_SetLightColor {
        FLinearColor NewLightColor; // 0x0
    }; // Size: 0x10
    Params_SetLightColor params{};
    params.NewLightColor = (FLinearColor)NewLightColor;
    ProcessEvent(func, &params);
}
void ALight::SetBrightness(float NewBrightness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Light.SetBrightness"));
    struct Params_SetBrightness {
        float NewBrightness; // 0x0
    }; // Size: 0x4
    Params_SetBrightness params{};
    params.NewBrightness = (float)NewBrightness;
    ProcessEvent(func, &params);
}
void ALight::SetAffectTranslucentLighting(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Light.SetAffectTranslucentLighting"));
    struct Params_SetAffectTranslucentLighting {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetAffectTranslucentLighting params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void ALight::OnRep_bEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Light.OnRep_bEnabled"));
    struct Params_OnRep_bEnabled {
    }; // Size: 0x0
    Params_OnRep_bEnabled params{};
    ProcessEvent(func, &params);
}
bool ALight::IsEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Light.IsEnabled"));
    struct Params_IsEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FLinearColor ALight::GetLightColor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Light.GetLightColor"));
    struct Params_GetLightColor {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetLightColor params{};
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
float ALight::GetBrightness() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Light.GetBrightness"));
    struct Params_GetBrightness {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBrightness params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
