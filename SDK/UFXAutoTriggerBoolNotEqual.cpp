#include "UFXAutoTriggerBoolNotEqual.hpp"
#include "UFXAutoTriggerBoolTwoScalarParams.hpp"
UFXAutoTriggerBoolNotEqual* UFXAutoTriggerBoolNotEqual::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolNotEqual");
    return (UFXAutoTriggerBoolNotEqual*)res;
}
