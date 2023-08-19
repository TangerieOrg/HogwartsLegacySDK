#include "FLinearColor.hpp"
#include "UAnimatedLightsAPI.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "ULightComponent.hpp"
bool UAnimatedLightsAPI::GetAnimatedLightColorIntensity(ULightComponent* Light, FLinearColor& Color, float& Intensity, bool bGetEvenIfNotAnimated) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimatedLights.AnimatedLightsAPI.GetAnimatedLightColorIntensity"));
    struct Params_GetAnimatedLightColorIntensity {
        ULightComponent* Light; // 0x0
        FLinearColor Color; // 0x8
        float Intensity; // 0x18
        bool bGetEvenIfNotAnimated; // 0x1c
        bool ReturnValue; // 0x1d
    }; // Size: 0x1e
    Params_GetAnimatedLightColorIntensity params{};
    params.Light = (ULightComponent*)Light;
    params.Color = (FLinearColor)Color;
    params.Intensity = (float)Intensity;
    params.bGetEvenIfNotAnimated = (bool)bGetEvenIfNotAnimated;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Color = params.Color;
    Intensity = params.Intensity;
    return (bool)params.ReturnValue;
}
UAnimatedLightsAPI* UAnimatedLightsAPI::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimatedLights.AnimatedLightsAPI");
    return (UAnimatedLightsAPI*)res;
}
bool UAnimatedLightsAPI::SetAnimatedLightColorIntensity(ULightComponent* Light, FLinearColor Color, float Intensity, bool bSetEvenIfNotAnimated) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimatedLights.AnimatedLightsAPI.SetAnimatedLightColorIntensity"));
    struct Params_SetAnimatedLightColorIntensity {
        ULightComponent* Light; // 0x0
        FLinearColor Color; // 0x8
        float Intensity; // 0x18
        bool bSetEvenIfNotAnimated; // 0x1c
        bool ReturnValue; // 0x1d
    }; // Size: 0x1e
    Params_SetAnimatedLightColorIntensity params{};
    params.Light = (ULightComponent*)Light;
    params.Color = (FLinearColor)Color;
    params.Intensity = (float)Intensity;
    params.bSetEvenIfNotAnimated = (bool)bSetEvenIfNotAnimated;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAnimatedLightsAPI::SetAnimatedLightIntensity(ULightComponent* Light, float Intensity, bool bSetEvenIfNotAnimated) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimatedLights.AnimatedLightsAPI.SetAnimatedLightIntensity"));
    struct Params_SetAnimatedLightIntensity {
        ULightComponent* Light; // 0x0
        float Intensity; // 0x8
        bool bSetEvenIfNotAnimated; // 0xc
        bool ReturnValue; // 0xd
    }; // Size: 0xe
    Params_SetAnimatedLightIntensity params{};
    params.Light = (ULightComponent*)Light;
    params.Intensity = (float)Intensity;
    params.bSetEvenIfNotAnimated = (bool)bSetEvenIfNotAnimated;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAnimatedLightsAPI::SetAnimatedLightColor(ULightComponent* Light, FLinearColor Color, bool bSetEvenIfNotAnimated) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimatedLights.AnimatedLightsAPI.SetAnimatedLightColor"));
    struct Params_SetAnimatedLightColor {
        ULightComponent* Light; // 0x0
        FLinearColor Color; // 0x8
        bool bSetEvenIfNotAnimated; // 0x18
        bool ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_SetAnimatedLightColor params{};
    params.Light = (ULightComponent*)Light;
    params.Color = (FLinearColor)Color;
    params.bSetEvenIfNotAnimated = (bool)bSetEvenIfNotAnimated;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAnimatedLightsAPI::IsAnimatedLight(ULightComponent* Light, bool& bIsAnimatedLight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimatedLights.AnimatedLightsAPI.IsAnimatedLight"));
    struct Params_IsAnimatedLight {
        ULightComponent* Light; // 0x0
        bool bIsAnimatedLight; // 0x8
    }; // Size: 0x9
    Params_IsAnimatedLight params{};
    params.Light = (ULightComponent*)Light;
    params.bIsAnimatedLight = (bool)bIsAnimatedLight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsAnimatedLight = params.bIsAnimatedLight;
}
bool UAnimatedLightsAPI::GetAnimatedLightIntensity(ULightComponent* Light, float& Intensity, bool bGetEvenIfNotAnimated) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimatedLights.AnimatedLightsAPI.GetAnimatedLightIntensity"));
    struct Params_GetAnimatedLightIntensity {
        ULightComponent* Light; // 0x0
        float Intensity; // 0x8
        bool bGetEvenIfNotAnimated; // 0xc
        bool ReturnValue; // 0xd
    }; // Size: 0xe
    Params_GetAnimatedLightIntensity params{};
    params.Light = (ULightComponent*)Light;
    params.Intensity = (float)Intensity;
    params.bGetEvenIfNotAnimated = (bool)bGetEvenIfNotAnimated;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Intensity = params.Intensity;
    return (bool)params.ReturnValue;
}
bool UAnimatedLightsAPI::GetAnimatedLightColor(ULightComponent* Light, FLinearColor& Color, bool bGetEvenIfNotAnimated) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimatedLights.AnimatedLightsAPI.GetAnimatedLightColor"));
    struct Params_GetAnimatedLightColor {
        ULightComponent* Light; // 0x0
        FLinearColor Color; // 0x8
        bool bGetEvenIfNotAnimated; // 0x18
        bool ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_GetAnimatedLightColor params{};
    params.Light = (ULightComponent*)Light;
    params.Color = (FLinearColor)Color;
    params.bGetEvenIfNotAnimated = (bool)bGetEvenIfNotAnimated;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Color = params.Color;
    return (bool)params.ReturnValue;
}
