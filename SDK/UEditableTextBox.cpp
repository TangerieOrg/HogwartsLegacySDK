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
#include "UEditableTextBox.hpp"
#include "UFunction.hpp"
#include "USlateWidgetStyleAsset.hpp"
#include "UWidget.hpp"
UEditableTextBox* UEditableTextBox::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.EditableTextBox");
    return (UEditableTextBox*)res;
}
void UEditableTextBox::SetError() {}
void UEditableTextBox::SetText() {}
void UEditableTextBox::SetIsReadOnly(bool bReadOnly) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.EditableTextBox.SetIsReadOnly"));
    struct Params_SetIsReadOnly {
        bool bReadOnly; // 0x0
    }; // Size: 0x1
    Params_SetIsReadOnly params{};
    params.bReadOnly = (bool)bReadOnly;
    ProcessEvent(func, &params);
}
void UEditableTextBox::SetJustification(ETextJustify::Type InJustification) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.EditableTextBox.SetJustification"));
    struct Params_SetJustification {
        ETextJustify::Type InJustification; // 0x0
    }; // Size: 0x1
    Params_SetJustification params{};
    params.InJustification = (ETextJustify::Type)InJustification;
    ProcessEvent(func, &params);
}
void UEditableTextBox::SetHintText() {}
void UEditableTextBox::SetIsPassword(bool bIsPassword) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.EditableTextBox.SetIsPassword"));
    struct Params_SetIsPassword {
        bool bIsPassword; // 0x0
    }; // Size: 0x1
    Params_SetIsPassword params{};
    params.bIsPassword = (bool)bIsPassword;
    ProcessEvent(func, &params);
}
void UEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature() {}
void UEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature() {}
bool UEditableTextBox::HasError() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.EditableTextBox.HasError"));
    struct Params_HasError {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasError params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEditableTextBox::GetText() {}
void UEditableTextBox::ClearError() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.EditableTextBox.ClearError"));
    struct Params_ClearError {
    }; // Size: 0x0
    Params_ClearError params{};
    ProcessEvent(func, &params);
}
