#include "URPGTriggerEffect_CauseDisturbanceOnSpellImpact.hpp"
#include "URPGTriggerEffect_OnHitBySpell.hpp"
URPGTriggerEffect_CauseDisturbanceOnSpellImpact* URPGTriggerEffect_CauseDisturbanceOnSpellImpact::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_CauseDisturbanceOnSpellImpact");
    return (URPGTriggerEffect_CauseDisturbanceOnSpellImpact*)res;
}
