#include "AActor.hpp"
#include "ASpellTool.hpp"
#include "UFunction.hpp"
#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_PolyJuice.hpp"
URPGTriggerEffect_PolyJuice* URPGTriggerEffect_PolyJuice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_PolyJuice");
    return (URPGTriggerEffect_PolyJuice*)res;
}
void URPGTriggerEffect_PolyJuice::OnSpellCast(ASpellTool* SpellTool) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGTriggerEffect_PolyJuice.OnSpellCast"));
    struct Params_OnSpellCast {
        ASpellTool* SpellTool; // 0x0
    }; // Size: 0x8
    Params_OnSpellCast params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    ProcessEvent(func, &params);
}
