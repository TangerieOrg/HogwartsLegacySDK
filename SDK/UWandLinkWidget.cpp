#include "ESlateVisibility.hpp"
#include "EWandLinkInputType.hpp"
#include "EWandLinkMiniGameType.hpp"
#include "UFunction.hpp"
#include "UUserWidget.hpp"
#include "UWandLinkWidget.hpp"
void UWandLinkWidget::SetMiniGameVisibility(EWandLinkMiniGameType MiniGameType, ESlateVisibility InVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkWidget.SetMiniGameVisibility"));
    struct Params_SetMiniGameVisibility {
        EWandLinkMiniGameType MiniGameType; // 0x0
        ESlateVisibility InVisibility; // 0x1
    }; // Size: 0x2
    Params_SetMiniGameVisibility params{};
    params.MiniGameType = (EWandLinkMiniGameType)MiniGameType;
    params.InVisibility = (ESlateVisibility)InVisibility;
    ProcessEvent(func, &params);
}
UWandLinkWidget* UWandLinkWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WandLinkWidget");
    return (UWandLinkWidget*)res;
}
void UWandLinkWidget::SuccessMeterFilled(EWandLinkInputType InputType, EWandLinkInputType SuccessInputType, EWandLinkMiniGameType MiniGameType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkWidget.SuccessMeterFilled"));
    struct Params_SuccessMeterFilled {
        EWandLinkInputType InputType; // 0x0
        EWandLinkInputType SuccessInputType; // 0x1
        EWandLinkMiniGameType MiniGameType; // 0x2
    }; // Size: 0x3
    Params_SuccessMeterFilled params{};
    params.InputType = (EWandLinkInputType)InputType;
    params.SuccessInputType = (EWandLinkInputType)SuccessInputType;
    params.MiniGameType = (EWandLinkMiniGameType)MiniGameType;
    ProcessEvent(func, &params);
}
void UWandLinkWidget::Start() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkWidget.Start"));
    struct Params_Start {
    }; // Size: 0x0
    Params_Start params{};
    ProcessEvent(func, &params);
}
void UWandLinkWidget::SuccessButtonPressed(EWandLinkInputType InputType, EWandLinkInputType SuccessInputType, EWandLinkMiniGameType MiniGameType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkWidget.SuccessButtonPressed"));
    struct Params_SuccessButtonPressed {
        EWandLinkInputType InputType; // 0x0
        EWandLinkInputType SuccessInputType; // 0x1
        EWandLinkMiniGameType MiniGameType; // 0x2
    }; // Size: 0x3
    Params_SuccessButtonPressed params{};
    params.InputType = (EWandLinkInputType)InputType;
    params.SuccessInputType = (EWandLinkInputType)SuccessInputType;
    params.MiniGameType = (EWandLinkMiniGameType)MiniGameType;
    ProcessEvent(func, &params);
}
void UWandLinkWidget::SetButtonVisibility(EWandLinkInputType InputType, ESlateVisibility InVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkWidget.SetButtonVisibility"));
    struct Params_SetButtonVisibility {
        EWandLinkInputType InputType; // 0x0
        ESlateVisibility InVisibility; // 0x1
    }; // Size: 0x2
    Params_SetButtonVisibility params{};
    params.InputType = (EWandLinkInputType)InputType;
    params.InVisibility = (ESlateVisibility)InVisibility;
    ProcessEvent(func, &params);
}
void UWandLinkWidget::SuccessButtonFailed(EWandLinkInputType InputType, EWandLinkInputType SuccessInputType, EWandLinkMiniGameType MiniGameType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkWidget.SuccessButtonFailed"));
    struct Params_SuccessButtonFailed {
        EWandLinkInputType InputType; // 0x0
        EWandLinkInputType SuccessInputType; // 0x1
        EWandLinkMiniGameType MiniGameType; // 0x2
    }; // Size: 0x3
    Params_SuccessButtonFailed params{};
    params.InputType = (EWandLinkInputType)InputType;
    params.SuccessInputType = (EWandLinkInputType)SuccessInputType;
    params.MiniGameType = (EWandLinkMiniGameType)MiniGameType;
    ProcessEvent(func, &params);
}
float UWandLinkWidget::GetWandLinkPercentage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkWidget.GetWandLinkPercentage"));
    struct Params_GetWandLinkPercentage {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetWandLinkPercentage params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UWandLinkWidget::GetSuccessRatio() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkWidget.GetSuccessRatio"));
    struct Params_GetSuccessRatio {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSuccessRatio params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UWandLinkWidget::End() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkWidget.End"));
    struct Params_End {
    }; // Size: 0x0
    Params_End params{};
    ProcessEvent(func, &params);
}
