#include "UFXAutoTriggerBoolEqual.hpp"
#include "UFXAutoTriggerBoolTwoScalarParams.hpp"
UFXAutoTriggerBoolEqual* UFXAutoTriggerBoolEqual::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolEqual");
    return (UFXAutoTriggerBoolEqual*)res;
}
