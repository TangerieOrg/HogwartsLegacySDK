#include "EVirtualKeyboardDismissAction.hpp"
#include "FSlateFontInfo.hpp"
#include "FTextBlockStyle.hpp"
#include "FVirtualKeyboardOptions.hpp"
#include "UFunction.hpp"
#include "UMultiLineEditableText.hpp"
#include "UTextLayoutWidget.hpp"
void UMultiLineEditableText::GetText() {}
void UMultiLineEditableText::SetWidgetStyle(FTextBlockStyle& InWidgetStyle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.MultiLineEditableText.SetWidgetStyle"));
    struct Params_SetWidgetStyle {
        FTextBlockStyle InWidgetStyle; // 0x0
    }; // Size: 0x270
    Params_SetWidgetStyle params{};
    params.InWidgetStyle = (FTextBlockStyle)InWidgetStyle;
    ProcessEvent(func, &params);
    InWidgetStyle = params.InWidgetStyle;
}
UMultiLineEditableText* UMultiLineEditableText::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.MultiLineEditableText");
    return (UMultiLineEditableText*)res;
}
void UMultiLineEditableText::SetHintText() {}
void UMultiLineEditableText::SetText() {}
void UMultiLineEditableText::SetIsReadOnly(bool bReadOnly) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.MultiLineEditableText.SetIsReadOnly"));
    struct Params_SetIsReadOnly {
        bool bReadOnly; // 0x0
    }; // Size: 0x1
    Params_SetIsReadOnly params{};
    params.bReadOnly = (bool)bReadOnly;
    ProcessEvent(func, &params);
}
void UMultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature() {}
void UMultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature() {}
void UMultiLineEditableText::GetHintText() {}
