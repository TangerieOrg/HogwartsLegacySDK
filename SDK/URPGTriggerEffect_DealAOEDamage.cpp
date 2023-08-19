#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_DealAOEDamage.hpp"
URPGTriggerEffect_DealAOEDamage* URPGTriggerEffect_DealAOEDamage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_DealAOEDamage");
    return (URPGTriggerEffect_DealAOEDamage*)res;
}
