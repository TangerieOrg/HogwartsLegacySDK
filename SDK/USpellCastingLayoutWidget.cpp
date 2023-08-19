#include "UFunction.hpp"
#include "USpellCastingLayoutWidget.hpp"
#include "UUserWidget.hpp"
void USpellCastingLayoutWidget::OnDeactivateLayout() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellCastingLayoutWidget.OnDeactivateLayout"));
    struct Params_OnDeactivateLayout {
    }; // Size: 0x0
    Params_OnDeactivateLayout params{};
    ProcessEvent(func, &params);
}
USpellCastingLayoutWidget* USpellCastingLayoutWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpellCastingLayoutWidget");
    return (USpellCastingLayoutWidget*)res;
}
void USpellCastingLayoutWidget::SpellSelected() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellCastingLayoutWidget.SpellSelected"));
    struct Params_SpellSelected {
    }; // Size: 0x0
    Params_SpellSelected params{};
    ProcessEvent(func, &params);
}
void USpellCastingLayoutWidget::OnActivateLayout() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellCastingLayoutWidget.OnActivateLayout"));
    struct Params_OnActivateLayout {
    }; // Size: 0x0
    Params_OnActivateLayout params{};
    ProcessEvent(func, &params);
}
void USpellCastingLayoutWidget::InitSpells() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellCastingLayoutWidget.InitSpells"));
    struct Params_InitSpells {
    }; // Size: 0x0
    Params_InitSpells params{};
    ProcessEvent(func, &params);
}
void USpellCastingLayoutWidget::EnterSpellMode(bool InSpellMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellCastingLayoutWidget.EnterSpellMode"));
    struct Params_EnterSpellMode {
        bool InSpellMode; // 0x0
    }; // Size: 0x1
    Params_EnterSpellMode params{};
    params.InSpellMode = (bool)InSpellMode;
    ProcessEvent(func, &params);
}
