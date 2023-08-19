#pragma once
#include <cstdint>
#include "EVirtualKeyboardDismissAction.hpp"
#include "FEditableTextBoxStyle.hpp"
#include "FLinearColor.hpp"
#include "FSlateFontInfo.hpp"
#include "FTextBlockStyle.hpp"
#include "FVirtualKeyboardOptions.hpp"
#include "UTextLayoutWidget.hpp"
class USlateWidgetStyleAsset;
#pragma pack(push, 1)
class UMultiLineEditableTextBox : public UTextLayoutWidget {
public:
    char pad_128[0x40];
    FEditableTextBoxStyle WidgetStyle; // 0x168
    FTextBlockStyle TextStyle; // 0x960
    bool bIsReadOnly; // 0xbd0
    bool AllowContextMenu; // 0xbd1
    FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xbd2
    EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xbd3
    char pad_bd4[0x4];
    USlateWidgetStyleAsset* Style; // 0xbd8
    FSlateFontInfo Font; // 0xbe0
    FLinearColor ForegroundColor; // 0xc38
    FLinearColor BackgroundColor; // 0xc48
    FLinearColor ReadOnlyForegroundColor; // 0xc58
    char pad_c68[0x30];
    static UMultiLineEditableTextBox* StaticClass();
    void SetTextStyle(FTextBlockStyle& InTextStyle);
    void SetText();
    void SetIsReadOnly(bool bReadOnly);
    void SetHintText();
    void SetError();
    void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature();
    void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature();
    void GetText();
    void GetHintText();
}; // Size: 0xc98
#pragma pack(pop)
