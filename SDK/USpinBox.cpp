#include "ETextCommit\Type.hpp"
#include "ETextJustify\Type.hpp"
#include "FSlateColor.hpp"
#include "FSlateFontInfo.hpp"
#include "FSpinBoxStyle.hpp"
#include "UFunction.hpp"
#include "USlateWidgetStyleAsset.hpp"
#include "USpinBox.hpp"
#include "UWidget.hpp"
USpinBox* USpinBox::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.SpinBox");
    return (USpinBox*)res;
}
void USpinBox::SetValue(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.SetValue"));
    struct Params_SetValue {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetValue params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USpinBox::SetMinValue(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.SetMinValue"));
    struct Params_SetMinValue {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetMinValue params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
float USpinBox::GetMinSliderValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.GetMinSliderValue"));
    struct Params_GetMinSliderValue {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMinSliderValue params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void USpinBox::SetMinSliderValue(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.SetMinSliderValue"));
    struct Params_SetMinSliderValue {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetMinSliderValue params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USpinBox::SetMaxFractionalDigits(int32_t NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.SetMaxFractionalDigits"));
    struct Params_SetMaxFractionalDigits {
        int32_t NewValue; // 0x0
    }; // Size: 0x4
    Params_SetMaxFractionalDigits params{};
    params.NewValue = (int32_t)NewValue;
    ProcessEvent(func, &params);
}
void USpinBox::OnSpinBoxValueChangedEvent__DelegateSignature(float InValue) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature"));
    struct Params_OnSpinBoxValueChangedEvent__DelegateSignature {
        float InValue; // 0x0
    }; // Size: 0x4
    Params_OnSpinBoxValueChangedEvent__DelegateSignature params{};
    params.InValue = (float)InValue;
    ProcessEvent(func, &params);
}
void USpinBox::SetMinFractionalDigits(int32_t NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.SetMinFractionalDigits"));
    struct Params_SetMinFractionalDigits {
        int32_t NewValue; // 0x0
    }; // Size: 0x4
    Params_SetMinFractionalDigits params{};
    params.NewValue = (int32_t)NewValue;
    ProcessEvent(func, &params);
}
void USpinBox::SetMaxValue(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.SetMaxValue"));
    struct Params_SetMaxValue {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetMaxValue params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USpinBox::SetMaxSliderValue(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.SetMaxSliderValue"));
    struct Params_SetMaxSliderValue {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetMaxSliderValue params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USpinBox::SetForegroundColor(FSlateColor InForegroundColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.SetForegroundColor"));
    struct Params_SetForegroundColor {
        FSlateColor InForegroundColor; // 0x0
    }; // Size: 0x28
    Params_SetForegroundColor params{};
    params.InForegroundColor = (FSlateColor)InForegroundColor;
    ProcessEvent(func, &params);
}
void USpinBox::SetDelta(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.SetDelta"));
    struct Params_SetDelta {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetDelta params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void USpinBox::SetAlwaysUsesDeltaSnap(bool bNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.SetAlwaysUsesDeltaSnap"));
    struct Params_SetAlwaysUsesDeltaSnap {
        bool bNewValue; // 0x0
    }; // Size: 0x1
    Params_SetAlwaysUsesDeltaSnap params{};
    params.bNewValue = (bool)bNewValue;
    ProcessEvent(func, &params);
}
void USpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit::Type CommitMethod) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature"));
    struct Params_OnSpinBoxValueCommittedEvent__DelegateSignature {
        float InValue; // 0x0
        ETextCommit::Type CommitMethod; // 0x4
    }; // Size: 0x5
    Params_OnSpinBoxValueCommittedEvent__DelegateSignature params{};
    params.InValue = (float)InValue;
    params.CommitMethod = (ETextCommit::Type)CommitMethod;
    ProcessEvent(func, &params);
}
void USpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature"));
    struct Params_OnSpinBoxBeginSliderMovement__DelegateSignature {
    }; // Size: 0x0
    Params_OnSpinBoxBeginSliderMovement__DelegateSignature params{};
    ProcessEvent(func, &params);
}
int32_t USpinBox::GetMinFractionalDigits() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.GetMinFractionalDigits"));
    struct Params_GetMinFractionalDigits {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMinFractionalDigits params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float USpinBox::GetValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.GetValue"));
    struct Params_GetValue {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetValue params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float USpinBox::GetMinValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.GetMinValue"));
    struct Params_GetMinValue {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMinValue params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float USpinBox::GetMaxValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.GetMaxValue"));
    struct Params_GetMaxValue {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxValue params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float USpinBox::GetMaxSliderValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.GetMaxSliderValue"));
    struct Params_GetMaxSliderValue {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxSliderValue params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t USpinBox::GetMaxFractionalDigits() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.GetMaxFractionalDigits"));
    struct Params_GetMaxFractionalDigits {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxFractionalDigits params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void USpinBox::ClearMinValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.ClearMinValue"));
    struct Params_ClearMinValue {
    }; // Size: 0x0
    Params_ClearMinValue params{};
    ProcessEvent(func, &params);
}
float USpinBox::GetDelta() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.GetDelta"));
    struct Params_GetDelta {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDelta params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool USpinBox::GetAlwaysUsesDeltaSnap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.GetAlwaysUsesDeltaSnap"));
    struct Params_GetAlwaysUsesDeltaSnap {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAlwaysUsesDeltaSnap params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USpinBox::ClearMinSliderValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.ClearMinSliderValue"));
    struct Params_ClearMinSliderValue {
    }; // Size: 0x0
    Params_ClearMinSliderValue params{};
    ProcessEvent(func, &params);
}
void USpinBox::ClearMaxValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.ClearMaxValue"));
    struct Params_ClearMaxValue {
    }; // Size: 0x0
    Params_ClearMaxValue params{};
    ProcessEvent(func, &params);
}
void USpinBox::ClearMaxSliderValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SpinBox.ClearMaxSliderValue"));
    struct Params_ClearMaxSliderValue {
    }; // Size: 0x0
    Params_ClearMaxSliderValue params{};
    ProcessEvent(func, &params);
}
