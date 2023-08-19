#include "UFXAutoTriggerBoolInBetweenEqual.hpp"
#include "UFXAutoTriggerBoolThreeScalarParams.hpp"
UFXAutoTriggerBoolInBetweenEqual* UFXAutoTriggerBoolInBetweenEqual::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolInBetweenEqual");
    return (UFXAutoTriggerBoolInBetweenEqual*)res;
}
