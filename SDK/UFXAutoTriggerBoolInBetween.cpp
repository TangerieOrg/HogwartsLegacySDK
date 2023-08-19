#include "UFXAutoTriggerBoolInBetween.hpp"
#include "UFXAutoTriggerBoolThreeScalarParams.hpp"
UFXAutoTriggerBoolInBetween* UFXAutoTriggerBoolInBetween::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolInBetween");
    return (UFXAutoTriggerBoolInBetween*)res;
}
