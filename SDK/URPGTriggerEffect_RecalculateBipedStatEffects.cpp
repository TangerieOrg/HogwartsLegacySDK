#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_RecalculateBipedStatEffects.hpp"
URPGTriggerEffect_RecalculateBipedStatEffects* URPGTriggerEffect_RecalculateBipedStatEffects::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_RecalculateBipedStatEffects");
    return (URPGTriggerEffect_RecalculateBipedStatEffects*)res;
}
