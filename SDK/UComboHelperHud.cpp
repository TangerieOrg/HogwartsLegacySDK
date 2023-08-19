#include "UComboHelperHud.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
UComboHelperHud* UComboHelperHud::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ComboHelperHud");
    return (UComboHelperHud*)res;
}
void UComboHelperHud::SpellFailure() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ComboHelperHud.SpellFailure"));
    struct Params_SpellFailure {
    }; // Size: 0x0
    Params_SpellFailure params{};
    ProcessEvent(func, &params);
}
void UComboHelperHud::OnComboCompleted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ComboHelperHud.OnComboCompleted"));
    struct Params_OnComboCompleted {
    }; // Size: 0x0
    Params_OnComboCompleted params{};
    ProcessEvent(func, &params);
}
void UComboHelperHud::SpellSuccess() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ComboHelperHud.SpellSuccess"));
    struct Params_SpellSuccess {
    }; // Size: 0x0
    Params_SpellSuccess params{};
    ProcessEvent(func, &params);
}
void UComboHelperHud::OnSpellSucceeded(int32_t NumSucceeded) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ComboHelperHud.OnSpellSucceeded"));
    struct Params_OnSpellSucceeded {
        int32_t NumSucceeded; // 0x0
    }; // Size: 0x4
    Params_OnSpellSucceeded params{};
    params.NumSucceeded = (int32_t)NumSucceeded;
    ProcessEvent(func, &params);
}
void UComboHelperHud::ShowComboHelper(bool bShow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ComboHelperHud.ShowComboHelper"));
    struct Params_ShowComboHelper {
        bool bShow; // 0x0
    }; // Size: 0x1
    Params_ShowComboHelper params{};
    params.bShow = (bool)bShow;
    ProcessEvent(func, &params);
}
void UComboHelperHud::SetRequiredSpells(TArray<FString>& SpellNames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ComboHelperHud.SetRequiredSpells"));
    struct Params_SetRequiredSpells {
        TArray<FString> SpellNames; // 0x0
    }; // Size: 0x10
    Params_SetRequiredSpells params{};
    params.SpellNames = (TArray<FString>)SpellNames;
    ProcessEvent(func, &params);
    SpellNames = params.SpellNames;
}
void UComboHelperHud::ResetCombo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ComboHelperHud.ResetCombo"));
    struct Params_ResetCombo {
    }; // Size: 0x0
    Params_ResetCombo params{};
    ProcessEvent(func, &params);
}
void UComboHelperHud::OnSpellFailed(int32_t NumSucceeded) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ComboHelperHud.OnSpellFailed"));
    struct Params_OnSpellFailed {
        int32_t NumSucceeded; // 0x0
    }; // Size: 0x4
    Params_OnSpellFailed params{};
    params.NumSucceeded = (int32_t)NumSucceeded;
    ProcessEvent(func, &params);
}
void UComboHelperHud::OnShowComboHelperChanged(bool bShow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ComboHelperHud.OnShowComboHelperChanged"));
    struct Params_OnShowComboHelperChanged {
        bool bShow; // 0x0
    }; // Size: 0x1
    Params_OnShowComboHelperChanged params{};
    params.bShow = (bool)bShow;
    ProcessEvent(func, &params);
}
void UComboHelperHud::OnRequiredSpellsChanged(TArray<FString>& SpellNames, int32_t NumSpells) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ComboHelperHud.OnRequiredSpellsChanged"));
    struct Params_OnRequiredSpellsChanged {
        TArray<FString> SpellNames; // 0x0
        int32_t NumSpells; // 0x10
    }; // Size: 0x14
    Params_OnRequiredSpellsChanged params{};
    params.SpellNames = (TArray<FString>)SpellNames;
    params.NumSpells = (int32_t)NumSpells;
    ProcessEvent(func, &params);
    SpellNames = params.SpellNames;
}
void UComboHelperHud::OnComboReset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ComboHelperHud.OnComboReset"));
    struct Params_OnComboReset {
    }; // Size: 0x0
    Params_OnComboReset params{};
    ProcessEvent(func, &params);
}
