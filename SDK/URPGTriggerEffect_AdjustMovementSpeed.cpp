#include "URPGTriggerEffect_AdjustMovementSpeed.hpp"
#include "URPGTriggerEffect_Base.hpp"
URPGTriggerEffect_AdjustMovementSpeed* URPGTriggerEffect_AdjustMovementSpeed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_AdjustMovementSpeed");
    return (URPGTriggerEffect_AdjustMovementSpeed*)res;
}
