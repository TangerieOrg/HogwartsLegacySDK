#include "URPGTriggerEffect_AdjustHealth.hpp"
#include "URPGTriggerEffect_Base.hpp"
URPGTriggerEffect_AdjustHealth* URPGTriggerEffect_AdjustHealth::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_AdjustHealth");
    return (URPGTriggerEffect_AdjustHealth*)res;
}
