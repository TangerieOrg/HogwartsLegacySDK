#pragma once
#include <cstdint>
#include "ETextJustify\Type.hpp"
#include "EVirtualKeyboardDismissAction.hpp"
#include "EVirtualKeyboardTrigger.hpp"
#include "EVirtualKeyboardType\Type.hpp"
#include "FEditableTextStyle.hpp"
#include "FShapedTextOptions.hpp"
#include "FSlateColor.hpp"
#include "FSlateFontInfo.hpp"
#include "FVirtualKeyboardOptions.hpp"
#include "UWidget.hpp"
class USlateWidgetStyleAsset;
class USlateBrushAsset;
#pragma pack(push, 1)
class UEditableText : public UWidget {
public:
    char pad_108[0x50];
    FEditableTextStyle WidgetStyle; // 0x158
    USlateWidgetStyleAsset* Style; // 0x378
    USlateBrushAsset* BackgroundImageSelected; // 0x380
    USlateBrushAsset* BackgroundImageComposing; // 0x388
    USlateBrushAsset* CaretImage; // 0x390
    FSlateFontInfo Font; // 0x398
    FSlateColor ColorAndOpacity; // 0x3f0
    bool IsReadOnly; // 0x418
    bool IsPassword; // 0x419
    char pad_41a[0x2];
    float MinimumDesiredWidth; // 0x41c
    bool IsCaretMovedWhenGainFocus; // 0x420
    bool SelectAllTextWhenFocused; // 0x421
    bool RevertTextOnEscape; // 0x422
    bool ClearKeyboardFocusOnCommit; // 0x423
    bool SelectAllTextOnCommit; // 0x424
    bool AllowContextMenu; // 0x425
    EVirtualKeyboardType::Type KeyboardType; // 0x426
    FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x427
    EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x428
    EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x429
    ETextJustify::Type Justification; // 0x42a
    FShapedTextOptions ShapedTextOptions; // 0x42b
    char pad_42e[0x32];
    static UEditableText* StaticClass();
    void SetText();
    void SetJustification(ETextJustify::Type InJustification);
    void SetIsReadOnly(bool InbIsReadyOnly);
    void SetIsPassword(bool InbIsPassword);
    void SetHintText();
    void OnEditableTextCommittedEvent__DelegateSignature();
    void OnEditableTextChangedEvent__DelegateSignature();
    void GetText();
}; // Size: 0x460
#pragma pack(pop)
