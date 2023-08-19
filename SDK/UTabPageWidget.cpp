#include "FKey.hpp"
#include "FLegendItemData.hpp"
#include "UFunction.hpp"
#include "ULegendItem.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UTabPageWidget.hpp"
UTabPageWidget* UTabPageWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TabPageWidget");
    return (UTabPageWidget*)res;
}
void UTabPageWidget::OnLegendItemHoldEnd(ULegendItem* LegendItem, bool HoldWasCompleted) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TabPageWidget.OnLegendItemHoldEnd"));
    struct Params_OnLegendItemHoldEnd {
        ULegendItem* LegendItem; // 0x0
        bool HoldWasCompleted; // 0x8
    }; // Size: 0x9
    Params_OnLegendItemHoldEnd params{};
    params.LegendItem = (ULegendItem*)LegendItem;
    params.HoldWasCompleted = (bool)HoldWasCompleted;
    ProcessEvent(func, &params);
}
void UTabPageWidget::SetTabParentWidget(UPhoenixUserWidget* InTabParentWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TabPageWidget.SetTabParentWidget"));
    struct Params_SetTabParentWidget {
        UPhoenixUserWidget* InTabParentWidget; // 0x0
    }; // Size: 0x8
    Params_SetTabParentWidget params{};
    params.InTabParentWidget = (UPhoenixUserWidget*)InTabParentWidget;
    ProcessEvent(func, &params);
}
void UTabPageWidget::LeaveFromPage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TabPageWidget.LeaveFromPage"));
    struct Params_LeaveFromPage {
    }; // Size: 0x0
    Params_LeaveFromPage params{};
    ProcessEvent(func, &params);
}
bool UTabPageWidget::HandleInput(FKey Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TabPageWidget.HandleInput"));
    struct Params_HandleInput {
        FKey Input; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_HandleInput params{};
    params.Input = (FKey)Input;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTabPageWidget::GoToPage(TArray<FString>& DestinationStack) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TabPageWidget.GoToPage"));
    struct Params_GoToPage {
        TArray<FString> DestinationStack; // 0x0
    }; // Size: 0x10
    Params_GoToPage params{};
    params.DestinationStack = (TArray<FString>)DestinationStack;
    ProcessEvent(func, &params);
    DestinationStack = params.DestinationStack;
}
