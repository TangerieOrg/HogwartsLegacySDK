#include "URPGAbilityBase.hpp"
#include "URPGTriggerEffect_AffectedBySpell.hpp"
#include "URPGTriggerEffect_ManageMomentumTokens.hpp"
URPGTriggerEffect_ManageMomentumTokens* URPGTriggerEffect_ManageMomentumTokens::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_ManageMomentumTokens");
    return (URPGTriggerEffect_ManageMomentumTokens*)res;
}
