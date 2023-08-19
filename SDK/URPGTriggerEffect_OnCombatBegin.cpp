#include "URPGAbilityBase.hpp"
#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_OnCombatBegin.hpp"
URPGTriggerEffect_OnCombatBegin* URPGTriggerEffect_OnCombatBegin::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_OnCombatBegin");
    return (URPGTriggerEffect_OnCombatBegin*)res;
}
