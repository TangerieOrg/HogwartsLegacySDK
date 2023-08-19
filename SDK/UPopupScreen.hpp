#pragma once
#include <cstdint>
#include "FInputActionHoldInfo.hpp"
#include "FLegendItemData.hpp"
#include "UScreen.hpp"
class UUserWidget;
class UPhoenixUserWidget;
#pragma pack(push, 1)
class UPopupScreen : public UScreen {
public:
    char pad_370[0x30];
    int32_t PopupID; // 0x3a0
    char pad_3a4[0x4];
    TArray<FInputActionHoldInfo> CachedCompletionActions; // 0x3a8
    bool bCachedUsesWaitIndicator; // 0x3b8
    bool bPausedTheGame; // 0x3b9
    bool bAutoCloseOnButtonPress; // 0x3ba
    bool bPopupClosedEventSent; // 0x3bb
    char pad_3bc[0x4];
    static UPopupScreen* StaticClass();
    void SetPopupUsesWaitIndicator(bool bUsesWaitIndicator);
    void SetPopupTitle(FString TitleString);
    void SetPopupLegendItems(TArray<FLegendItemData>& LegendItems);
    void SetPopupDescription(FString DescriptionString, bool isTranslated);
    void SetPopupContentWidget(UUserWidget* ContentWidget);
    void SetPopupCompletionActions(TArray<FInputActionHoldInfo>& CompletionActions);
    void SetCachedUsesWaitIndicator(bool bUsesWaitIndicator);
    void SetCachedCompletionActions(TArray<FInputActionHoldInfo>& CompletionActions);
    void SetAutoCloseOnButtonPress(bool bInAutoCloseOnButtonPress);
    void PopupRemovedEvent__DelegateSignature();
    void PopupButtonPressCompleted(int32_t CompletionActionIndex);
    void PopupButtonEvent__DelegateSignature(UPopupScreen* PopupScreen, int32_t CompletionActionIndex);
    void OpenPopup(bool bPauseTheGame);
    void OnPopupOutroEnded(UPhoenixUserWidget* PhoenixWidget, int32_t OutroType);
    int32_t GetPopupID();
    void ClosePopup(int32_t CompletionActionIndex);
}; // Size: 0x3c0
#pragma pack(pop)
