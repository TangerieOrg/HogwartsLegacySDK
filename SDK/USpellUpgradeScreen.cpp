#include "UFunction.hpp"
#include "UIconButtonWidget.hpp"
#include "USpellUpgradeScreen.hpp"
#include "UTabPageWidget.hpp"
#include "UUniformGridPanel.hpp"
USpellUpgradeScreen* USpellUpgradeScreen::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpellUpgradeScreen");
    return (USpellUpgradeScreen*)res;
}
void USpellUpgradeScreen::OnSynchronizeProperties() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellUpgradeScreen.OnSynchronizeProperties"));
    struct Params_OnSynchronizeProperties {
    }; // Size: 0x0
    Params_OnSynchronizeProperties params{};
    ProcessEvent(func, &params);
}
void USpellUpgradeScreen::OnAttachWand() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellUpgradeScreen.OnAttachWand"));
    struct Params_OnAttachWand {
    }; // Size: 0x0
    Params_OnAttachWand params{};
    ProcessEvent(func, &params);
}
