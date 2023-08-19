#include "URPGTriggerEffect_ManageDeadlyTokens.hpp"
#include "URPGTriggerEffect_RecoverFromDamage.hpp"
URPGTriggerEffect_ManageDeadlyTokens* URPGTriggerEffect_ManageDeadlyTokens::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_ManageDeadlyTokens");
    return (URPGTriggerEffect_ManageDeadlyTokens*)res;
}
