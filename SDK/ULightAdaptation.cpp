#include "FDynamicLightAdaptationSettings.hpp"
#include "FEmissiveAdaptationFinalState.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "ULightAdaptation.hpp"
#include "ULightAdaptationComponentChildOfLight.hpp"
#include "ULightComponent.hpp"
#include "UObject.hpp"
ULightAdaptation* ULightAdaptation::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.LightAdaptation");
    return (ULightAdaptation*)res;
}
void ULightAdaptation::LightAdaptationIntensityFactor(UObject* WorldContextObject, FDynamicLightAdaptationSettings Settings, float& IntensityFactor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.LightAdaptation.LightAdaptationIntensityFactor"));
    struct Params_LightAdaptationIntensityFactor {
        UObject* WorldContextObject; // 0x0
        FDynamicLightAdaptationSettings Settings; // 0x8
        float IntensityFactor; // 0x68
    }; // Size: 0x6c
    Params_LightAdaptationIntensityFactor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Settings = (FDynamicLightAdaptationSettings)Settings;
    params.IntensityFactor = (float)IntensityFactor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    IntensityFactor = params.IntensityFactor;
}
void ULightAdaptation::LightAdaptationSetIntensity(ULightComponent* LightComponent, float Intensity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.LightAdaptation.LightAdaptationSetIntensity"));
    struct Params_LightAdaptationSetIntensity {
        ULightComponent* LightComponent; // 0x0
        float Intensity; // 0x8
    }; // Size: 0xc
    Params_LightAdaptationSetIntensity params{};
    params.LightComponent = (ULightComponent*)LightComponent;
    params.Intensity = (float)Intensity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULightAdaptation::LightAdaptationRegisterWithIntensity(ULightComponent* LightComponent, FDynamicLightAdaptationSettings Settings, float Intensity, ULightAdaptationComponentChildOfLight*& AdaptationComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.LightAdaptation.LightAdaptationRegisterWithIntensity"));
    struct Params_LightAdaptationRegisterWithIntensity {
        ULightComponent* LightComponent; // 0x0
        FDynamicLightAdaptationSettings Settings; // 0x8
        float Intensity; // 0x68
        char pad_6c[0x4];
        ULightAdaptationComponentChildOfLight* AdaptationComponent; // 0x70
    }; // Size: 0x78
    Params_LightAdaptationRegisterWithIntensity params{};
    params.LightComponent = (ULightComponent*)LightComponent;
    params.Settings = (FDynamicLightAdaptationSettings)Settings;
    params.Intensity = (float)Intensity;
    params.AdaptationComponent = (ULightAdaptationComponentChildOfLight*)AdaptationComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    AdaptationComponent = params.AdaptationComponent;
}
void ULightAdaptation::LightAdaptationRegister(ULightComponent* LightComponent, FDynamicLightAdaptationSettings Settings, ULightAdaptationComponentChildOfLight*& AdaptationComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.LightAdaptation.LightAdaptationRegister"));
    struct Params_LightAdaptationRegister {
        ULightComponent* LightComponent; // 0x0
        FDynamicLightAdaptationSettings Settings; // 0x8
        ULightAdaptationComponentChildOfLight* AdaptationComponent; // 0x68
    }; // Size: 0x70
    Params_LightAdaptationRegister params{};
    params.LightComponent = (ULightComponent*)LightComponent;
    params.Settings = (FDynamicLightAdaptationSettings)Settings;
    params.AdaptationComponent = (ULightAdaptationComponentChildOfLight*)AdaptationComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    AdaptationComponent = params.AdaptationComponent;
}
void ULightAdaptation::LightAdaptationGetIntensity(ULightComponent* LightComponent, float& Intensity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.LightAdaptation.LightAdaptationGetIntensity"));
    struct Params_LightAdaptationGetIntensity {
        ULightComponent* LightComponent; // 0x0
        float Intensity; // 0x8
    }; // Size: 0xc
    Params_LightAdaptationGetIntensity params{};
    params.LightComponent = (ULightComponent*)LightComponent;
    params.Intensity = (float)Intensity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Intensity = params.Intensity;
}
void ULightAdaptation::GetLightAdaptationState(UObject* WorldContextObject, FEmissiveAdaptationFinalState& State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.LightAdaptation.GetLightAdaptationState"));
    struct Params_GetLightAdaptationState {
        UObject* WorldContextObject; // 0x0
        FEmissiveAdaptationFinalState State; // 0x8
    }; // Size: 0x90
    Params_GetLightAdaptationState params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.State = (FEmissiveAdaptationFinalState)State;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    State = params.State;
}
void ULightAdaptation::LightAdaptationDeregister(ULightAdaptationComponentChildOfLight* AdaptationComponent, bool bRestoreIntensity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.LightAdaptation.LightAdaptationDeregister"));
    struct Params_LightAdaptationDeregister {
        ULightAdaptationComponentChildOfLight* AdaptationComponent; // 0x0
        bool bRestoreIntensity; // 0x8
    }; // Size: 0x9
    Params_LightAdaptationDeregister params{};
    params.AdaptationComponent = (ULightAdaptationComponentChildOfLight*)AdaptationComponent;
    params.bRestoreIntensity = (bool)bRestoreIntensity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
