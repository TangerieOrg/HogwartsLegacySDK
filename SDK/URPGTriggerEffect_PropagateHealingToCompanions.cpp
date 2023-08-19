#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_PropagateHealingToCompanions.hpp"
URPGTriggerEffect_PropagateHealingToCompanions* URPGTriggerEffect_PropagateHealingToCompanions::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_PropagateHealingToCompanions");
    return (URPGTriggerEffect_PropagateHealingToCompanions*)res;
}
