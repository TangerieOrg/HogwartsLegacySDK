#include "FInputActionHoldInfo.hpp"
#include "FLegendItemData.hpp"
#include "UFunction.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UPopupScreen.hpp"
#include "UScreen.hpp"
#include "UUserWidget.hpp"
void UPopupScreen::SetPopupUsesWaitIndicator(bool bUsesWaitIndicator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopupScreen.SetPopupUsesWaitIndicator"));
    struct Params_SetPopupUsesWaitIndicator {
        bool bUsesWaitIndicator; // 0x0
    }; // Size: 0x1
    Params_SetPopupUsesWaitIndicator params{};
    params.bUsesWaitIndicator = (bool)bUsesWaitIndicator;
    ProcessEvent(func, &params);
}
UPopupScreen* UPopupScreen::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PopupScreen");
    return (UPopupScreen*)res;
}
void UPopupScreen::SetPopupTitle(FString TitleString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopupScreen.SetPopupTitle"));
    struct Params_SetPopupTitle {
        FString TitleString; // 0x0
    }; // Size: 0x10
    Params_SetPopupTitle params{};
    params.TitleString = (FString)TitleString;
    ProcessEvent(func, &params);
}
void UPopupScreen::SetPopupCompletionActions(TArray<FInputActionHoldInfo>& CompletionActions) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopupScreen.SetPopupCompletionActions"));
    struct Params_SetPopupCompletionActions {
        TArray<FInputActionHoldInfo> CompletionActions; // 0x0
    }; // Size: 0x10
    Params_SetPopupCompletionActions params{};
    params.CompletionActions = (TArray<FInputActionHoldInfo>)CompletionActions;
    ProcessEvent(func, &params);
    CompletionActions = params.CompletionActions;
}
void UPopupScreen::PopupRemovedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.PopupScreen.PopupRemovedEvent__DelegateSignature"));
    struct Params_PopupRemovedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_PopupRemovedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UPopupScreen::SetPopupLegendItems(TArray<FLegendItemData>& LegendItems) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopupScreen.SetPopupLegendItems"));
    struct Params_SetPopupLegendItems {
        TArray<FLegendItemData> LegendItems; // 0x0
    }; // Size: 0x10
    Params_SetPopupLegendItems params{};
    params.LegendItems = (TArray<FLegendItemData>)LegendItems;
    ProcessEvent(func, &params);
    LegendItems = params.LegendItems;
}
void UPopupScreen::SetPopupDescription(FString DescriptionString, bool isTranslated) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopupScreen.SetPopupDescription"));
    struct Params_SetPopupDescription {
        FString DescriptionString; // 0x0
        bool isTranslated; // 0x10
    }; // Size: 0x11
    Params_SetPopupDescription params{};
    params.DescriptionString = (FString)DescriptionString;
    params.isTranslated = (bool)isTranslated;
    ProcessEvent(func, &params);
}
void UPopupScreen::SetPopupContentWidget(UUserWidget* ContentWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopupScreen.SetPopupContentWidget"));
    struct Params_SetPopupContentWidget {
        UUserWidget* ContentWidget; // 0x0
    }; // Size: 0x8
    Params_SetPopupContentWidget params{};
    params.ContentWidget = (UUserWidget*)ContentWidget;
    ProcessEvent(func, &params);
}
void UPopupScreen::SetCachedUsesWaitIndicator(bool bUsesWaitIndicator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopupScreen.SetCachedUsesWaitIndicator"));
    struct Params_SetCachedUsesWaitIndicator {
        bool bUsesWaitIndicator; // 0x0
    }; // Size: 0x1
    Params_SetCachedUsesWaitIndicator params{};
    params.bUsesWaitIndicator = (bool)bUsesWaitIndicator;
    ProcessEvent(func, &params);
}
void UPopupScreen::SetCachedCompletionActions(TArray<FInputActionHoldInfo>& CompletionActions) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopupScreen.SetCachedCompletionActions"));
    struct Params_SetCachedCompletionActions {
        TArray<FInputActionHoldInfo> CompletionActions; // 0x0
    }; // Size: 0x10
    Params_SetCachedCompletionActions params{};
    params.CompletionActions = (TArray<FInputActionHoldInfo>)CompletionActions;
    ProcessEvent(func, &params);
    CompletionActions = params.CompletionActions;
}
void UPopupScreen::SetAutoCloseOnButtonPress(bool bInAutoCloseOnButtonPress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopupScreen.SetAutoCloseOnButtonPress"));
    struct Params_SetAutoCloseOnButtonPress {
        bool bInAutoCloseOnButtonPress; // 0x0
    }; // Size: 0x1
    Params_SetAutoCloseOnButtonPress params{};
    params.bInAutoCloseOnButtonPress = (bool)bInAutoCloseOnButtonPress;
    ProcessEvent(func, &params);
}
void UPopupScreen::PopupButtonPressCompleted(int32_t CompletionActionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopupScreen.PopupButtonPressCompleted"));
    struct Params_PopupButtonPressCompleted {
        int32_t CompletionActionIndex; // 0x0
    }; // Size: 0x4
    Params_PopupButtonPressCompleted params{};
    params.CompletionActionIndex = (int32_t)CompletionActionIndex;
    ProcessEvent(func, &params);
}
void UPopupScreen::PopupButtonEvent__DelegateSignature(UPopupScreen* PopupScreen, int32_t CompletionActionIndex) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.PopupScreen.PopupButtonEvent__DelegateSignature"));
    struct Params_PopupButtonEvent__DelegateSignature {
        UPopupScreen* PopupScreen; // 0x0
        int32_t CompletionActionIndex; // 0x8
    }; // Size: 0xc
    Params_PopupButtonEvent__DelegateSignature params{};
    params.PopupScreen = (UPopupScreen*)PopupScreen;
    params.CompletionActionIndex = (int32_t)CompletionActionIndex;
    ProcessEvent(func, &params);
}
void UPopupScreen::ClosePopup(int32_t CompletionActionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopupScreen.ClosePopup"));
    struct Params_ClosePopup {
        int32_t CompletionActionIndex; // 0x0
    }; // Size: 0x4
    Params_ClosePopup params{};
    params.CompletionActionIndex = (int32_t)CompletionActionIndex;
    ProcessEvent(func, &params);
}
void UPopupScreen::OpenPopup(bool bPauseTheGame) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopupScreen.OpenPopup"));
    struct Params_OpenPopup {
        bool bPauseTheGame; // 0x0
    }; // Size: 0x1
    Params_OpenPopup params{};
    params.bPauseTheGame = (bool)bPauseTheGame;
    ProcessEvent(func, &params);
}
void UPopupScreen::OnPopupOutroEnded(UPhoenixUserWidget* PhoenixWidget, int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopupScreen.OnPopupOutroEnded"));
    struct Params_OnPopupOutroEnded {
        UPhoenixUserWidget* PhoenixWidget; // 0x0
        int32_t OutroType; // 0x8
    }; // Size: 0xc
    Params_OnPopupOutroEnded params{};
    params.PhoenixWidget = (UPhoenixUserWidget*)PhoenixWidget;
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
int32_t UPopupScreen::GetPopupID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PopupScreen.GetPopupID"));
    struct Params_GetPopupID {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPopupID params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
