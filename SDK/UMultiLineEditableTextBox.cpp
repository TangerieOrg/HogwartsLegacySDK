#include "EVirtualKeyboardDismissAction.hpp"
#include "FEditableTextBoxStyle.hpp"
#include "FLinearColor.hpp"
#include "FSlateFontInfo.hpp"
#include "FTextBlockStyle.hpp"
#include "FVirtualKeyboardOptions.hpp"
#include "UFunction.hpp"
#include "UMultiLineEditableTextBox.hpp"
#include "USlateWidgetStyleAsset.hpp"
#include "UTextLayoutWidget.hpp"
void UMultiLineEditableTextBox::SetText() {}
UMultiLineEditableTextBox* UMultiLineEditableTextBox::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.MultiLineEditableTextBox");
    return (UMultiLineEditableTextBox*)res;
}
void UMultiLineEditableTextBox::SetTextStyle(FTextBlockStyle& InTextStyle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.MultiLineEditableTextBox.SetTextStyle"));
    struct Params_SetTextStyle {
        FTextBlockStyle InTextStyle; // 0x0
    }; // Size: 0x270
    Params_SetTextStyle params{};
    params.InTextStyle = (FTextBlockStyle)InTextStyle;
    ProcessEvent(func, &params);
    InTextStyle = params.InTextStyle;
}
void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature() {}
void UMultiLineEditableTextBox::SetError() {}
void UMultiLineEditableTextBox::SetIsReadOnly(bool bReadOnly) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.MultiLineEditableTextBox.SetIsReadOnly"));
    struct Params_SetIsReadOnly {
        bool bReadOnly; // 0x0
    }; // Size: 0x1
    Params_SetIsReadOnly params{};
    params.bReadOnly = (bool)bReadOnly;
    ProcessEvent(func, &params);
}
void UMultiLineEditableTextBox::SetHintText() {}
void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature() {}
void UMultiLineEditableTextBox::GetText() {}
void UMultiLineEditableTextBox::GetHintText() {}
