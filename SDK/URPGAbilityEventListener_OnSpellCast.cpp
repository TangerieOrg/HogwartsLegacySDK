#include "ASpellTool.hpp"
#include "AWandTool.hpp"
#include "SocialSemanticIDs.hpp"
#include "UFunction.hpp"
#include "URPGAbilityEventListener.hpp"
#include "URPGAbilityEventListener_OnSpellCast.hpp"
URPGAbilityEventListener_OnSpellCast* URPGAbilityEventListener_OnSpellCast::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityEventListener_OnSpellCast");
    return (URPGAbilityEventListener_OnSpellCast*)res;
}
void URPGAbilityEventListener_OnSpellCast::OnSpellCast(ASpellTool* SpellTool) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGAbilityEventListener_OnSpellCast.OnSpellCast"));
    struct Params_OnSpellCast {
        ASpellTool* SpellTool; // 0x0
    }; // Size: 0x8
    Params_OnSpellCast params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    ProcessEvent(func, &params);
}
