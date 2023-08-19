#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FButtonStyle.hpp"
#include "FInputChord.hpp"
#include "FKey.hpp"
#include "FLinearColor.hpp"
#include "FMargin.hpp"
#include "FSlateFontInfo.hpp"
#include "FTextBlockStyle.hpp"
#include "UWidget.hpp"
#pragma pack(push, 1)
class UInputKeySelector : public UWidget {
public:
    FButtonStyle WidgetStyle; // 0x108
    FTextBlockStyle TextStyle; // 0x380
    FInputChord SelectedKey; // 0x5f0
    FSlateFontInfo Font; // 0x610
    FMargin Margin; // 0x668
    FLinearColor ColorAndOpacity; // 0x678
    char pad_688[0x30];
    bool bAllowModifierKeys; // 0x6b8
    bool bAllowGamepadKeys; // 0x6b9
    char pad_6ba[0x6];
    TArray<FKey> EscapeKeys; // 0x6c0
    char pad_6d0[0x30];
    static UInputKeySelector* StaticClass();
    void SetTextBlockVisibility(ESlateVisibility InVisibility);
    void SetSelectedKey(FInputChord& InSelectedKey);
    void SetNoKeySpecifiedText();
    void SetKeySelectionText();
    void SetEscapeKeys(TArray<FKey>& InKeys);
    void SetAllowModifierKeys(bool bInAllowModifierKeys);
    void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
    void OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void OnIsSelectingKeyChanged__DelegateSignature();
    bool GetIsSelectingKey();
}; // Size: 0x700
#pragma pack(pop)
