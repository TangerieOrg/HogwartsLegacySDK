#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "UTabPageWidget.hpp"
class UPopupScreen;
#pragma pack(push, 1)
class USystemMenuWidget : public UTabPageWidget {
public:
    bool HasShownExitConfirmation; // 0x3c8
    char pad_3c9[0x7];
    static USystemMenuWidget* StaticClass();
    void ShowLoadSaveResultPopup(FString ResultMessage, float Duration);
    void ShowGraphicsConfirmDialog(float Duration);
    bool SettingsNeedExitConfirmed(FString& OutConfirmTitle, FString& OutConfirmDesc);
    void OnExitPopupGone();
    void OnExitPopupDismissed(UPopupScreen* Popup, int32_t ConfirmationResult);
    void HandleConfirmExitDialog(EUMGInputAction ExitAction, EInputEvent ExitEvent, FString TitleText, FString DescText);
    bool ExecuteSave(int32_t CharacterID);
    bool ExecuteLoad(FString Filename, int32_t CharacterID);
}; // Size: 0x3d0
#pragma pack(pop)
