#include "EButtonClickMethod\Type.hpp"
#include "EButtonPressMethod\Type.hpp"
#include "EButtonTouchMethod\Type.hpp"
#include "ECheckBoxState.hpp"
#include "EHorizontalAlignment.hpp"
#include "FCheckBoxStyle.hpp"
#include "FMargin.hpp"
#include "FSlateColor.hpp"
#include "UCheckBox.hpp"
#include "UContentWidget.hpp"
#include "UFunction.hpp"
#include "USlateBrushAsset.hpp"
#include "USlateWidgetStyleAsset.hpp"
void UCheckBox::SetClickMethod(EButtonClickMethod::Type InClickMethod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CheckBox.SetClickMethod"));
    struct Params_SetClickMethod {
        EButtonClickMethod::Type InClickMethod; // 0x0
    }; // Size: 0x1
    Params_SetClickMethod params{};
    params.InClickMethod = (EButtonClickMethod::Type)InClickMethod;
    ProcessEvent(func, &params);
}
UCheckBox* UCheckBox::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.CheckBox");
    return (UCheckBox*)res;
}
void UCheckBox::SetTouchMethod(EButtonTouchMethod::Type InTouchMethod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CheckBox.SetTouchMethod"));
    struct Params_SetTouchMethod {
        EButtonTouchMethod::Type InTouchMethod; // 0x0
    }; // Size: 0x1
    Params_SetTouchMethod params{};
    params.InTouchMethod = (EButtonTouchMethod::Type)InTouchMethod;
    ProcessEvent(func, &params);
}
bool UCheckBox::IsChecked() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CheckBox.IsChecked"));
    struct Params_IsChecked {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsChecked params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCheckBox::SetPressMethod(EButtonPressMethod::Type InPressMethod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CheckBox.SetPressMethod"));
    struct Params_SetPressMethod {
        EButtonPressMethod::Type InPressMethod; // 0x0
    }; // Size: 0x1
    Params_SetPressMethod params{};
    params.InPressMethod = (EButtonPressMethod::Type)InPressMethod;
    ProcessEvent(func, &params);
}
void UCheckBox::SetIsChecked(bool InIsChecked) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CheckBox.SetIsChecked"));
    struct Params_SetIsChecked {
        bool InIsChecked; // 0x0
    }; // Size: 0x1
    Params_SetIsChecked params{};
    params.InIsChecked = (bool)InIsChecked;
    ProcessEvent(func, &params);
}
void UCheckBox::SetCheckedState(ECheckBoxState InCheckedState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CheckBox.SetCheckedState"));
    struct Params_SetCheckedState {
        ECheckBoxState InCheckedState; // 0x0
    }; // Size: 0x1
    Params_SetCheckedState params{};
    params.InCheckedState = (ECheckBoxState)InCheckedState;
    ProcessEvent(func, &params);
}
bool UCheckBox::IsPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CheckBox.IsPressed"));
    struct Params_IsPressed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPressed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ECheckBoxState UCheckBox::GetCheckedState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CheckBox.GetCheckedState"));
    struct Params_GetCheckedState {
        ECheckBoxState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCheckedState params{};
    ProcessEvent(func, &params);
    return (ECheckBoxState)params.ReturnValue;
}
