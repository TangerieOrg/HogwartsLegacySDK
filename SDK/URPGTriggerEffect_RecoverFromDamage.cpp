#include "URPGAbilityBase.hpp"
#include "URPGTriggerEffect_ActorDamaged.hpp"
#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_RecoverFromDamage.hpp"
URPGTriggerEffect_RecoverFromDamage* URPGTriggerEffect_RecoverFromDamage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_RecoverFromDamage");
    return (URPGTriggerEffect_RecoverFromDamage*)res;
}
