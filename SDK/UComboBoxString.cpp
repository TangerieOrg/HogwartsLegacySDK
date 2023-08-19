#include "ESelectInfo\Type.hpp"
#include "FComboBoxStyle.hpp"
#include "FMargin.hpp"
#include "FSlateColor.hpp"
#include "FSlateFontInfo.hpp"
#include "FTableRowStyle.hpp"
#include "UComboBoxString.hpp"
#include "UFunction.hpp"
#include "UWidget.hpp"
void UComboBoxString::SetSelectedIndex(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ComboBoxString.SetSelectedIndex"));
    struct Params_SetSelectedIndex {
        int32_t Index; // 0x0
    }; // Size: 0x4
    Params_SetSelectedIndex params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
}
UComboBoxString* UComboBoxString::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.ComboBoxString");
    return (UComboBoxString*)res;
}
void UComboBoxString::SetSelectedOption(FString Option) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ComboBoxString.SetSelectedOption"));
    struct Params_SetSelectedOption {
        FString Option; // 0x0
    }; // Size: 0x10
    Params_SetSelectedOption params{};
    params.Option = (FString)Option;
    ProcessEvent(func, &params);
}
int32_t UComboBoxString::GetOptionCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ComboBoxString.GetOptionCount"));
    struct Params_GetOptionCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetOptionCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UComboBoxString::RemoveOption(FString Option) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ComboBoxString.RemoveOption"));
    struct Params_RemoveOption {
        FString Option; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_RemoveOption params{};
    params.Option = (FString)Option;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UComboBoxString::RefreshOptions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ComboBoxString.RefreshOptions"));
    struct Params_RefreshOptions {
    }; // Size: 0x0
    Params_RefreshOptions params{};
    ProcessEvent(func, &params);
}
bool UComboBoxString::IsOpen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ComboBoxString.IsOpen"));
    struct Params_IsOpen {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsOpen params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UComboBoxString::OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, ESelectInfo::Type SelectionType) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature"));
    struct Params_OnSelectionChangedEvent__DelegateSignature {
        FString SelectedItem; // 0x0
        ESelectInfo::Type SelectionType; // 0x10
    }; // Size: 0x11
    Params_OnSelectionChangedEvent__DelegateSignature params{};
    params.SelectedItem = (FString)SelectedItem;
    params.SelectionType = (ESelectInfo::Type)SelectionType;
    ProcessEvent(func, &params);
}
void UComboBoxString::OnOpeningEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.ComboBoxString.OnOpeningEvent__DelegateSignature"));
    struct Params_OnOpeningEvent__DelegateSignature {
    }; // Size: 0x0
    Params_OnOpeningEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
FString UComboBoxString::GetSelectedOption() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ComboBoxString.GetSelectedOption"));
    struct Params_GetSelectedOption {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetSelectedOption params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
int32_t UComboBoxString::GetSelectedIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ComboBoxString.GetSelectedIndex"));
    struct Params_GetSelectedIndex {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSelectedIndex params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FString UComboBoxString::GetOptionAtIndex(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ComboBoxString.GetOptionAtIndex"));
    struct Params_GetOptionAtIndex {
        int32_t Index; // 0x0
        char pad_4[0x4];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetOptionAtIndex params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
int32_t UComboBoxString::FindOptionIndex(FString Option) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ComboBoxString.FindOptionIndex"));
    struct Params_FindOptionIndex {
        FString Option; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_FindOptionIndex params{};
    params.Option = (FString)Option;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UComboBoxString::ClearSelection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ComboBoxString.ClearSelection"));
    struct Params_ClearSelection {
    }; // Size: 0x0
    Params_ClearSelection params{};
    ProcessEvent(func, &params);
}
void UComboBoxString::ClearOptions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ComboBoxString.ClearOptions"));
    struct Params_ClearOptions {
    }; // Size: 0x0
    Params_ClearOptions params{};
    ProcessEvent(func, &params);
}
void UComboBoxString::AddOption(FString Option) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ComboBoxString.AddOption"));
    struct Params_AddOption {
        FString Option; // 0x0
    }; // Size: 0x10
    Params_AddOption params{};
    params.Option = (FString)Option;
    ProcessEvent(func, &params);
}
