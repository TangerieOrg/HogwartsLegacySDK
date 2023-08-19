#include "URPGTriggerEffect_ActorDamaged.hpp"
#include "URPGTriggerEffect_FocusGainOnCompanionDamage.hpp"
URPGTriggerEffect_FocusGainOnCompanionDamage* URPGTriggerEffect_FocusGainOnCompanionDamage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_FocusGainOnCompanionDamage");
    return (URPGTriggerEffect_FocusGainOnCompanionDamage*)res;
}
