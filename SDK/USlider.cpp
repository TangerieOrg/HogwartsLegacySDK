#include "EOrientation.hpp"
#include "FLinearColor.hpp"
#include "FSliderStyle.hpp"
#include "UFunction.hpp"
#include "USlider.hpp"
#include "UWidget.hpp"
USlider* USlider::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.Slider");
    return (USlider*)res;
}
void USlider::SetValue(float InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Slider.SetValue"));
    struct Params_SetValue {
        float InValue; // 0x0
    }; // Size: 0x4
    Params_SetValue params{};
    params.InValue = (float)InValue;
    ProcessEvent(func, &params);
}
void USlider::SetStepSize(float InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Slider.SetStepSize"));
    struct Params_SetStepSize {
        float InValue; // 0x0
    }; // Size: 0x4
    Params_SetStepSize params{};
    params.InValue = (float)InValue;
    ProcessEvent(func, &params);
}
void USlider::SetMinValue(float InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Slider.SetMinValue"));
    struct Params_SetMinValue {
        float InValue; // 0x0
    }; // Size: 0x4
    Params_SetMinValue params{};
    params.InValue = (float)InValue;
    ProcessEvent(func, &params);
}
void USlider::SetSliderHandleColor(FLinearColor InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Slider.SetSliderHandleColor"));
    struct Params_SetSliderHandleColor {
        FLinearColor InValue; // 0x0
    }; // Size: 0x10
    Params_SetSliderHandleColor params{};
    params.InValue = (FLinearColor)InValue;
    ProcessEvent(func, &params);
}
void USlider::SetLocked(bool InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Slider.SetLocked"));
    struct Params_SetLocked {
        bool InValue; // 0x0
    }; // Size: 0x1
    Params_SetLocked params{};
    params.InValue = (bool)InValue;
    ProcessEvent(func, &params);
}
void USlider::SetSliderBarColor(FLinearColor InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Slider.SetSliderBarColor"));
    struct Params_SetSliderBarColor {
        FLinearColor InValue; // 0x0
    }; // Size: 0x10
    Params_SetSliderBarColor params{};
    params.InValue = (FLinearColor)InValue;
    ProcessEvent(func, &params);
}
void USlider::SetMaxValue(float InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Slider.SetMaxValue"));
    struct Params_SetMaxValue {
        float InValue; // 0x0
    }; // Size: 0x4
    Params_SetMaxValue params{};
    params.InValue = (float)InValue;
    ProcessEvent(func, &params);
}
void USlider::SetIndentHandle(bool InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Slider.SetIndentHandle"));
    struct Params_SetIndentHandle {
        bool InValue; // 0x0
    }; // Size: 0x1
    Params_SetIndentHandle params{};
    params.InValue = (bool)InValue;
    ProcessEvent(func, &params);
}
float USlider::GetValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Slider.GetValue"));
    struct Params_GetValue {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetValue params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float USlider::GetNormalizedValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Slider.GetNormalizedValue"));
    struct Params_GetNormalizedValue {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNormalizedValue params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
