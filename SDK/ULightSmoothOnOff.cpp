#include "FRuntimeFloatCurve.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "ULightSmoothOnOff.hpp"
void ULightSmoothOnOff::Initialize(float Intensity, bool Visible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightSmoothOnOff.Initialize"));
    struct Params_Initialize {
        float Intensity; // 0x0
        bool Visible; // 0x4
    }; // Size: 0x5
    Params_Initialize params{};
    params.Intensity = (float)Intensity;
    params.Visible = (bool)Visible;
    ProcessEvent(func, &params);
}
ULightSmoothOnOff* ULightSmoothOnOff::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightSmoothOnOff");
    return (ULightSmoothOnOff*)res;
}
bool ULightSmoothOnOff::IsOn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightSmoothOnOff.IsOn"));
    struct Params_IsOn {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsOn params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ULightSmoothOnOff::IsOnSmoothed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightSmoothOnOff.IsOnSmoothed"));
    struct Params_IsOnSmoothed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsOnSmoothed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ULightSmoothOnOff::TurnOnOff(bool On, bool smooth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightSmoothOnOff.TurnOnOff"));
    struct Params_TurnOnOff {
        bool On; // 0x0
        bool smooth; // 0x1
    }; // Size: 0x2
    Params_TurnOnOff params{};
    params.On = (bool)On;
    params.smooth = (bool)smooth;
    ProcessEvent(func, &params);
}
void ULightSmoothOnOff::SetIntensity(float NewIntensity, bool Filter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightSmoothOnOff.SetIntensity"));
    struct Params_SetIntensity {
        float NewIntensity; // 0x0
        bool Filter; // 0x4
    }; // Size: 0x5
    Params_SetIntensity params{};
    params.NewIntensity = (float)NewIntensity;
    params.Filter = (bool)Filter;
    ProcessEvent(func, &params);
}
float ULightSmoothOnOff::GetIntensity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightSmoothOnOff.GetIntensity"));
    struct Params_GetIntensity {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetIntensity params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ULightSmoothOnOff::GetSmoothedIntensity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightSmoothOnOff.GetSmoothedIntensity"));
    struct Params_GetSmoothedIntensity {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSmoothedIntensity params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ULightSmoothOnOff::AbortFadeOn(bool abortFade) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightSmoothOnOff.AbortFadeOn"));
    struct Params_AbortFadeOn {
        bool abortFade; // 0x0
    }; // Size: 0x1
    Params_AbortFadeOn params{};
    params.abortFade = (bool)abortFade;
    ProcessEvent(func, &params);
}
void ULightSmoothOnOff::AbortFadeOff(bool abortFade) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LightSmoothOnOff.AbortFadeOff"));
    struct Params_AbortFadeOff {
        bool abortFade; // 0x0
    }; // Size: 0x1
    Params_AbortFadeOff params{};
    params.abortFade = (bool)abortFade;
    ProcessEvent(func, &params);
}
