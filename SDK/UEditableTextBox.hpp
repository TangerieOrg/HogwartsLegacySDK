#pragma once
#include <cstdint>
#include "ETextJustify\Type.hpp"
#include "EVirtualKeyboardDismissAction.hpp"
#include "EVirtualKeyboardTrigger.hpp"
#include "EVirtualKeyboardType\Type.hpp"
#include "FEditableTextBoxStyle.hpp"
#include "FLinearColor.hpp"
#include "FMargin.hpp"
#include "FShapedTextOptions.hpp"
#include "FSlateFontInfo.hpp"
#include "FVirtualKeyboardOptions.hpp"
#include "UWidget.hpp"
class USlateWidgetStyleAsset;
#pragma pack(push, 1)
class UEditableTextBox : public UWidget {
public:
    char pad_108[0x28];
    FEditableTextBoxStyle WidgetStyle; // 0x130
    USlateWidgetStyleAsset* Style; // 0x928
    char pad_930[0x28];
    FSlateFontInfo Font; // 0x958
    FLinearColor ForegroundColor; // 0x9b0
    FLinearColor BackgroundColor; // 0x9c0
    FLinearColor ReadOnlyForegroundColor; // 0x9d0
    bool IsReadOnly; // 0x9e0
    bool IsPassword; // 0x9e1
    char pad_9e2[0x2];
    float MinimumDesiredWidth; // 0x9e4
    FMargin Padding; // 0x9e8
    bool IsCaretMovedWhenGainFocus; // 0x9f8
    bool SelectAllTextWhenFocused; // 0x9f9
    bool RevertTextOnEscape; // 0x9fa
    bool ClearKeyboardFocusOnCommit; // 0x9fb
    bool SelectAllTextOnCommit; // 0x9fc
    bool AllowContextMenu; // 0x9fd
    EVirtualKeyboardType::Type KeyboardType; // 0x9fe
    FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x9ff
    EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0xa00
    EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xa01
    ETextJustify::Type Justification; // 0xa02
    FShapedTextOptions ShapedTextOptions; // 0xa03
    char pad_a06[0x32];
    static UEditableTextBox* StaticClass();
    void SetText();
    void SetJustification(ETextJustify::Type InJustification);
    void SetIsReadOnly(bool bReadOnly);
    void SetIsPassword(bool bIsPassword);
    void SetHintText();
    void SetError();
    void OnEditableTextBoxCommittedEvent__DelegateSignature();
    void OnEditableTextBoxChangedEvent__DelegateSignature();
    bool HasError();
    void GetText();
    void ClearError();
}; // Size: 0xa38
#pragma pack(pop)
