#include "ESlateVisibility.hpp"
#include "FButtonStyle.hpp"
#include "FInputChord.hpp"
#include "FKey.hpp"
#include "FLinearColor.hpp"
#include "FMargin.hpp"
#include "FSlateFontInfo.hpp"
#include "FTextBlockStyle.hpp"
#include "UFunction.hpp"
#include "UInputKeySelector.hpp"
#include "UWidget.hpp"
void UInputKeySelector::SetEscapeKeys(TArray<FKey>& InKeys) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.InputKeySelector.SetEscapeKeys"));
    struct Params_SetEscapeKeys {
        TArray<FKey> InKeys; // 0x0
    }; // Size: 0x10
    Params_SetEscapeKeys params{};
    params.InKeys = (TArray<FKey>)InKeys;
    ProcessEvent(func, &params);
    InKeys = params.InKeys;
}
void UInputKeySelector::SetTextBlockVisibility(ESlateVisibility InVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.InputKeySelector.SetTextBlockVisibility"));
    struct Params_SetTextBlockVisibility {
        ESlateVisibility InVisibility; // 0x0
    }; // Size: 0x1
    Params_SetTextBlockVisibility params{};
    params.InVisibility = (ESlateVisibility)InVisibility;
    ProcessEvent(func, &params);
}
UInputKeySelector* UInputKeySelector::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.InputKeySelector");
    return (UInputKeySelector*)res;
}
void UInputKeySelector::SetSelectedKey(FInputChord& InSelectedKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.InputKeySelector.SetSelectedKey"));
    struct Params_SetSelectedKey {
        FInputChord InSelectedKey; // 0x0
    }; // Size: 0x20
    Params_SetSelectedKey params{};
    params.InSelectedKey = (FInputChord)InSelectedKey;
    ProcessEvent(func, &params);
    InSelectedKey = params.InSelectedKey;
}
void UInputKeySelector::SetNoKeySpecifiedText() {}
void UInputKeySelector::SetKeySelectionText() {}
void UInputKeySelector::SetAllowModifierKeys(bool bInAllowModifierKeys) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.InputKeySelector.SetAllowModifierKeys"));
    struct Params_SetAllowModifierKeys {
        bool bInAllowModifierKeys; // 0x0
    }; // Size: 0x1
    Params_SetAllowModifierKeys params{};
    params.bInAllowModifierKeys = (bool)bInAllowModifierKeys;
    ProcessEvent(func, &params);
}
void UInputKeySelector::SetAllowGamepadKeys(bool bInAllowGamepadKeys) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.InputKeySelector.SetAllowGamepadKeys"));
    struct Params_SetAllowGamepadKeys {
        bool bInAllowGamepadKeys; // 0x0
    }; // Size: 0x1
    Params_SetAllowGamepadKeys params{};
    params.bInAllowGamepadKeys = (bool)bInAllowGamepadKeys;
    ProcessEvent(func, &params);
}
void UInputKeySelector::OnKeySelected__DelegateSignature(FInputChord SelectedKey) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.InputKeySelector.OnKeySelected__DelegateSignature"));
    struct Params_OnKeySelected__DelegateSignature {
        FInputChord SelectedKey; // 0x0
    }; // Size: 0x20
    Params_OnKeySelected__DelegateSignature params{};
    params.SelectedKey = (FInputChord)SelectedKey;
    ProcessEvent(func, &params);
}
void UInputKeySelector::OnIsSelectingKeyChanged__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature"));
    struct Params_OnIsSelectingKeyChanged__DelegateSignature {
    }; // Size: 0x0
    Params_OnIsSelectingKeyChanged__DelegateSignature params{};
    ProcessEvent(func, &params);
}
bool UInputKeySelector::GetIsSelectingKey() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.InputKeySelector.GetIsSelectingKey"));
    struct Params_GetIsSelectingKey {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsSelectingKey params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
