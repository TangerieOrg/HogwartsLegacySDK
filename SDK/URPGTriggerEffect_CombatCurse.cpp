#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_CombatCurse.hpp"
URPGTriggerEffect_CombatCurse* URPGTriggerEffect_CombatCurse::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_CombatCurse");
    return (URPGTriggerEffect_CombatCurse*)res;
}
