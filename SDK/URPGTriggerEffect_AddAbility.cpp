#include "ETimedAbilityUnit.hpp"
#include "URPGTriggerEffect_AddAbility.hpp"
#include "URPGTriggerEffect_Base.hpp"
URPGTriggerEffect_AddAbility* URPGTriggerEffect_AddAbility::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_AddAbility");
    return (URPGTriggerEffect_AddAbility*)res;
}
