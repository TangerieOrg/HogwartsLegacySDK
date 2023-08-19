#include "FLinearColor.hpp"
#include "FSynth2DSliderStyle.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "USynth2DSlider.hpp"
#include "UWidget.hpp"
FVector2D USynth2DSlider::GetValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.Synth2DSlider.GetValue"));
    struct Params_GetValue {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetValue params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
USynth2DSlider* USynth2DSlider::StaticClass() {
    static auto res = find_uobject("Class /Script/Synthesis.Synth2DSlider");
    return (USynth2DSlider*)res;
}
void USynth2DSlider::SetValue(FVector2D InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.Synth2DSlider.SetValue"));
    struct Params_SetValue {
        FVector2D InValue; // 0x0
    }; // Size: 0x8
    Params_SetValue params{};
    params.InValue = (FVector2D)InValue;
    ProcessEvent(func, &params);
}
void USynth2DSlider::SetLocked(bool InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.Synth2DSlider.SetLocked"));
    struct Params_SetLocked {
        bool InValue; // 0x0
    }; // Size: 0x1
    Params_SetLocked params{};
    params.InValue = (bool)InValue;
    ProcessEvent(func, &params);
}
void USynth2DSlider::SetStepSize(float InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.Synth2DSlider.SetStepSize"));
    struct Params_SetStepSize {
        float InValue; // 0x0
    }; // Size: 0x4
    Params_SetStepSize params{};
    params.InValue = (float)InValue;
    ProcessEvent(func, &params);
}
void USynth2DSlider::SetIndentHandle(bool InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.Synth2DSlider.SetIndentHandle"));
    struct Params_SetIndentHandle {
        bool InValue; // 0x0
    }; // Size: 0x1
    Params_SetIndentHandle params{};
    params.InValue = (bool)InValue;
    ProcessEvent(func, &params);
}
void USynth2DSlider::SetSliderHandleColor(FLinearColor InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Synthesis.Synth2DSlider.SetSliderHandleColor"));
    struct Params_SetSliderHandleColor {
        FLinearColor InValue; // 0x0
    }; // Size: 0x10
    Params_SetSliderHandleColor params{};
    params.InValue = (FLinearColor)InValue;
    ProcessEvent(func, &params);
}
