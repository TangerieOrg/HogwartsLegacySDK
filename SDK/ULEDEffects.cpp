#include "FColor.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "ULEDEffects.hpp"
#include "ULEDFadeEffect.hpp"
ULEDEffects* ULEDEffects::StaticClass() {
    static auto res = find_uobject("Class /Script/Toolset.LEDEffects");
    return (ULEDEffects*)res;
}
void ULEDEffects::SetColor(int32_t& ControllerId, FColor& Color) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.LEDEffects.SetColor"));
    struct Params_SetColor {
        int32_t ControllerId; // 0x0
        FColor Color; // 0x4
    }; // Size: 0x8
    Params_SetColor params{};
    params.ControllerId = (int32_t)ControllerId;
    params.Color = (FColor)Color;
    ProcessEvent(func, &params);
    ControllerId = params.ControllerId;
    Color = params.Color;
}
void ULEDEffects::ResetAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.LEDEffects.ResetAll"));
    struct Params_ResetAll {
    }; // Size: 0x0
    Params_ResetAll params{};
    ProcessEvent(func, &params);
}
void ULEDEffects::ResetLED(int32_t& ControllerId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.LEDEffects.ResetLED"));
    struct Params_ResetLED {
        int32_t ControllerId; // 0x0
    }; // Size: 0x4
    Params_ResetLED params{};
    params.ControllerId = (int32_t)ControllerId;
    ProcessEvent(func, &params);
    ControllerId = params.ControllerId;
}
bool ULEDEffects::GetActiveColor(FColor& Color) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.LEDEffects.GetActiveColor"));
    struct Params_GetActiveColor {
        FColor Color; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_GetActiveColor params{};
    params.Color = (FColor)Color;
    ProcessEvent(func, &params);
    Color = params.Color;
    return (bool)params.ReturnValue;
}
