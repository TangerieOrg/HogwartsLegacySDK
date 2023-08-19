#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolEffectActive.hpp"
UFXAutoTriggerBoolEffectActive* UFXAutoTriggerBoolEffectActive::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolEffectActive");
    return (UFXAutoTriggerBoolEffectActive*)res;
}
