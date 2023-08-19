#include "URPGAbilityBase.hpp"
#include "URPGTriggerEffect_ManageTacticianTokens.hpp"
#include "URPGTriggerEffect_ProtegoReflectAttack.hpp"
URPGTriggerEffect_ManageTacticianTokens* URPGTriggerEffect_ManageTacticianTokens::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_ManageTacticianTokens");
    return (URPGTriggerEffect_ManageTacticianTokens*)res;
}
