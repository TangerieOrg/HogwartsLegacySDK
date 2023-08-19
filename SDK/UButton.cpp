#include "EButtonClickMethod\Type.hpp"
#include "EButtonPressMethod\Type.hpp"
#include "EButtonTouchMethod\Type.hpp"
#include "FButtonStyle.hpp"
#include "FLinearColor.hpp"
#include "UButton.hpp"
#include "UContentWidget.hpp"
#include "UFunction.hpp"
#include "USlateWidgetStyleAsset.hpp"
void UButton::SetClickMethod(EButtonClickMethod::Type InClickMethod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Button.SetClickMethod"));
    struct Params_SetClickMethod {
        EButtonClickMethod::Type InClickMethod; // 0x0
    }; // Size: 0x1
    Params_SetClickMethod params{};
    params.InClickMethod = (EButtonClickMethod::Type)InClickMethod;
    ProcessEvent(func, &params);
}
void UButton::SetPressMethod(EButtonPressMethod::Type InPressMethod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Button.SetPressMethod"));
    struct Params_SetPressMethod {
        EButtonPressMethod::Type InPressMethod; // 0x0
    }; // Size: 0x1
    Params_SetPressMethod params{};
    params.InPressMethod = (EButtonPressMethod::Type)InPressMethod;
    ProcessEvent(func, &params);
}
UButton* UButton::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.Button");
    return (UButton*)res;
}
void UButton::SetTouchMethod(EButtonTouchMethod::Type InTouchMethod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Button.SetTouchMethod"));
    struct Params_SetTouchMethod {
        EButtonTouchMethod::Type InTouchMethod; // 0x0
    }; // Size: 0x1
    Params_SetTouchMethod params{};
    params.InTouchMethod = (EButtonTouchMethod::Type)InTouchMethod;
    ProcessEvent(func, &params);
}
void UButton::SetColorAndOpacity(FLinearColor InColorAndOpacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Button.SetColorAndOpacity"));
    struct Params_SetColorAndOpacity {
        FLinearColor InColorAndOpacity; // 0x0
    }; // Size: 0x10
    Params_SetColorAndOpacity params{};
    params.InColorAndOpacity = (FLinearColor)InColorAndOpacity;
    ProcessEvent(func, &params);
}
void UButton::SetStyle(FButtonStyle& InStyle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Button.SetStyle"));
    struct Params_SetStyle {
        FButtonStyle InStyle; // 0x0
    }; // Size: 0x278
    Params_SetStyle params{};
    params.InStyle = (FButtonStyle)InStyle;
    ProcessEvent(func, &params);
    InStyle = params.InStyle;
}
void UButton::SetBackgroundColor(FLinearColor InBackgroundColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Button.SetBackgroundColor"));
    struct Params_SetBackgroundColor {
        FLinearColor InBackgroundColor; // 0x0
    }; // Size: 0x10
    Params_SetBackgroundColor params{};
    params.InBackgroundColor = (FLinearColor)InBackgroundColor;
    ProcessEvent(func, &params);
}
bool UButton::IsPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Button.IsPressed"));
    struct Params_IsPressed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPressed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
