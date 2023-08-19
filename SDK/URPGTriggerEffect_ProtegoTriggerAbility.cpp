#include "URPGTriggerEffect_ProtegoReflectAttack.hpp"
#include "URPGTriggerEffect_ProtegoTriggerAbility.hpp"
URPGTriggerEffect_ProtegoTriggerAbility* URPGTriggerEffect_ProtegoTriggerAbility::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_ProtegoTriggerAbility");
    return (URPGTriggerEffect_ProtegoTriggerAbility*)res;
}
