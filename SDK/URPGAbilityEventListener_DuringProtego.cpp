#include "ASpellTool.hpp"
#include "AWandTool.hpp"
#include "UFunction.hpp"
#include "URPGAbilityEventListener.hpp"
#include "URPGAbilityEventListener_DuringProtego.hpp"
URPGAbilityEventListener_DuringProtego* URPGAbilityEventListener_DuringProtego::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener_DuringProtego");
    return (URPGAbilityEventListener_DuringProtego*)res;
}
void URPGAbilityEventListener_DuringProtego::OnSpellStop(ASpellTool* SpellTool) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGAbilityEventListener_DuringProtego.OnSpellStop"));
    struct Params_OnSpellStop {
        ASpellTool* SpellTool; // 0x0
    }; // Size: 0x8
    Params_OnSpellStop params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    ProcessEvent(func, &params);
}
void URPGAbilityEventListener_DuringProtego::OnSpellCast(ASpellTool* SpellTool) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGAbilityEventListener_DuringProtego.OnSpellCast"));
    struct Params_OnSpellCast {
        ASpellTool* SpellTool; // 0x0
    }; // Size: 0x8
    Params_OnSpellCast params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    ProcessEvent(func, &params);
}
