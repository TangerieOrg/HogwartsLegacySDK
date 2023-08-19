#include "URPGTriggerEffect_AdjustCooldown.hpp"
#include "URPGTriggerEffect_Base.hpp"
URPGTriggerEffect_AdjustCooldown* URPGTriggerEffect_AdjustCooldown::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_AdjustCooldown");
    return (URPGTriggerEffect_AdjustCooldown*)res;
}
