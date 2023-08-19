#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "UFunction.hpp"
#include "UPopupScreen.hpp"
#include "USystemMenuWidget.hpp"
#include "UTabPageWidget.hpp"
USystemMenuWidget* USystemMenuWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SystemMenuWidget");
    return (USystemMenuWidget*)res;
}
bool USystemMenuWidget::SettingsNeedExitConfirmed(FString& OutConfirmTitle, FString& OutConfirmDesc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SystemMenuWidget.SettingsNeedExitConfirmed"));
    struct Params_SettingsNeedExitConfirmed {
        FString OutConfirmTitle; // 0x0
        FString OutConfirmDesc; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_SettingsNeedExitConfirmed params{};
    params.OutConfirmTitle = (FString)OutConfirmTitle;
    params.OutConfirmDesc = (FString)OutConfirmDesc;
    ProcessEvent(func, &params);
    OutConfirmTitle = params.OutConfirmTitle;
    OutConfirmDesc = params.OutConfirmDesc;
    return (bool)params.ReturnValue;
}
void USystemMenuWidget::ShowGraphicsConfirmDialog(float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SystemMenuWidget.ShowGraphicsConfirmDialog"));
    struct Params_ShowGraphicsConfirmDialog {
        float Duration; // 0x0
    }; // Size: 0x4
    Params_ShowGraphicsConfirmDialog params{};
    params.Duration = (float)Duration;
    ProcessEvent(func, &params);
}
void USystemMenuWidget::ShowLoadSaveResultPopup(FString ResultMessage, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SystemMenuWidget.ShowLoadSaveResultPopup"));
    struct Params_ShowLoadSaveResultPopup {
        FString ResultMessage; // 0x0
        float Duration; // 0x10
    }; // Size: 0x14
    Params_ShowLoadSaveResultPopup params{};
    params.ResultMessage = (FString)ResultMessage;
    params.Duration = (float)Duration;
    ProcessEvent(func, &params);
}
void USystemMenuWidget::OnExitPopupGone() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SystemMenuWidget.OnExitPopupGone"));
    struct Params_OnExitPopupGone {
    }; // Size: 0x0
    Params_OnExitPopupGone params{};
    ProcessEvent(func, &params);
}
bool USystemMenuWidget::ExecuteSave(int32_t CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SystemMenuWidget.ExecuteSave"));
    struct Params_ExecuteSave {
        int32_t CharacterID; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_ExecuteSave params{};
    params.CharacterID = (int32_t)CharacterID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USystemMenuWidget::HandleConfirmExitDialog(EUMGInputAction ExitAction, EInputEvent ExitEvent, FString TitleText, FString DescText) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SystemMenuWidget.HandleConfirmExitDialog"));
    struct Params_HandleConfirmExitDialog {
        EUMGInputAction ExitAction; // 0x0
        EInputEvent ExitEvent; // 0x1
        char pad_2[0x6];
        FString TitleText; // 0x8
        FString DescText; // 0x18
    }; // Size: 0x28
    Params_HandleConfirmExitDialog params{};
    params.ExitAction = (EUMGInputAction)ExitAction;
    params.ExitEvent = (EInputEvent)ExitEvent;
    params.TitleText = (FString)TitleText;
    params.DescText = (FString)DescText;
    ProcessEvent(func, &params);
}
void USystemMenuWidget::OnExitPopupDismissed(UPopupScreen* Popup, int32_t ConfirmationResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SystemMenuWidget.OnExitPopupDismissed"));
    struct Params_OnExitPopupDismissed {
        UPopupScreen* Popup; // 0x0
        int32_t ConfirmationResult; // 0x8
    }; // Size: 0xc
    Params_OnExitPopupDismissed params{};
    params.Popup = (UPopupScreen*)Popup;
    params.ConfirmationResult = (int32_t)ConfirmationResult;
    ProcessEvent(func, &params);
}
bool USystemMenuWidget::ExecuteLoad(FString Filename, int32_t CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SystemMenuWidget.ExecuteLoad"));
    struct Params_ExecuteLoad {
        FString Filename; // 0x0
        int32_t CharacterID; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_ExecuteLoad params{};
    params.Filename = (FString)Filename;
    params.CharacterID = (int32_t)CharacterID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
