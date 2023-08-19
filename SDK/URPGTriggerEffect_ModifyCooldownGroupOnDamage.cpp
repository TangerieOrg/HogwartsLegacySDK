#include "URPGTriggerEffect_ActorDamaged.hpp"
#include "URPGTriggerEffect_ModifyCooldownGroupOnDamage.hpp"
URPGTriggerEffect_ModifyCooldownGroupOnDamage* URPGTriggerEffect_ModifyCooldownGroupOnDamage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_ModifyCooldownGroupOnDamage");
    return (URPGTriggerEffect_ModifyCooldownGroupOnDamage*)res;
}
