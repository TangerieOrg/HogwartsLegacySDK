#include "URPGTriggerEffect_ProtegoReflectAttack.hpp"
#include "URPGTriggerEffect_ProtegoReflectRewards.hpp"
URPGTriggerEffect_ProtegoReflectRewards* URPGTriggerEffect_ProtegoReflectRewards::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_ProtegoReflectRewards");
    return (URPGTriggerEffect_ProtegoReflectRewards*)res;
}
