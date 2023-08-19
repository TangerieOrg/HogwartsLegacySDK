#include "ETextJustify\Type.hpp"
#include "EVirtualKeyboardDismissAction.hpp"
#include "EVirtualKeyboardTrigger.hpp"
#include "EVirtualKeyboardType\Type.hpp"
#include "FEditableTextStyle.hpp"
#include "FShapedTextOptions.hpp"
#include "FSlateColor.hpp"
#include "FSlateFontInfo.hpp"
#include "FVirtualKeyboardOptions.hpp"
#include "UEditableText.hpp"
#include "UFunction.hpp"
#include "USlateBrushAsset.hpp"
#include "USlateWidgetStyleAsset.hpp"
#include "UWidget.hpp"
UEditableText* UEditableText::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.EditableText");
    return (UEditableText*)res;
}
void UEditableText::SetHintText() {}
void UEditableText::SetText() {}
void UEditableText::SetJustification(ETextJustify::Type InJustification) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.EditableText.SetJustification"));
    struct Params_SetJustification {
        ETextJustify::Type InJustification; // 0x0
    }; // Size: 0x1
    Params_SetJustification params{};
    params.InJustification = (ETextJustify::Type)InJustification;
    ProcessEvent(func, &params);
}
void UEditableText::OnEditableTextCommittedEvent__DelegateSignature() {}
void UEditableText::SetIsReadOnly(bool InbIsReadyOnly) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.EditableText.SetIsReadOnly"));
    struct Params_SetIsReadOnly {
        bool InbIsReadyOnly; // 0x0
    }; // Size: 0x1
    Params_SetIsReadOnly params{};
    params.InbIsReadyOnly = (bool)InbIsReadyOnly;
    ProcessEvent(func, &params);
}
void UEditableText::SetIsPassword(bool InbIsPassword) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.EditableText.SetIsPassword"));
    struct Params_SetIsPassword {
        bool InbIsPassword; // 0x0
    }; // Size: 0x1
    Params_SetIsPassword params{};
    params.InbIsPassword = (bool)InbIsPassword;
    ProcessEvent(func, &params);
}
void UEditableText::OnEditableTextChangedEvent__DelegateSignature() {}
void UEditableText::GetText() {}
