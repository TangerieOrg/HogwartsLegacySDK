#pragma once
#include <cstdint>
#include "EVirtualKeyboardDismissAction.hpp"
#include "FSlateFontInfo.hpp"
#include "FTextBlockStyle.hpp"
#include "FVirtualKeyboardOptions.hpp"
#include "UTextLayoutWidget.hpp"
#pragma pack(push, 1)
class UMultiLineEditableText : public UTextLayoutWidget {
public:
    char pad_128[0x40];
    FTextBlockStyle WidgetStyle; // 0x168
    bool bIsReadOnly; // 0x3d8
    char pad_3d9[0x7];
    FSlateFontInfo Font; // 0x3e0
    bool SelectAllTextWhenFocused; // 0x438
    bool ClearTextSelectionOnFocusLoss; // 0x439
    bool RevertTextOnEscape; // 0x43a
    bool ClearKeyboardFocusOnCommit; // 0x43b
    bool AllowContextMenu; // 0x43c
    FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x43d
    EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x43e
    char pad_43f[0x31];
    static UMultiLineEditableText* StaticClass();
    void SetWidgetStyle(FTextBlockStyle& InWidgetStyle);
    void SetText();
    void SetIsReadOnly(bool bReadOnly);
    void SetHintText();
    void OnMultiLineEditableTextCommittedEvent__DelegateSignature();
    void OnMultiLineEditableTextChangedEvent__DelegateSignature();
    void GetText();
    void GetHintText();
}; // Size: 0x470
#pragma pack(pop)
