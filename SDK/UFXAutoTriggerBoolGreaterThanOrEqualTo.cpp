#include "UFXAutoTriggerBoolGreaterThanOrEqualTo.hpp"
#include "UFXAutoTriggerBoolTwoScalarParams.hpp"
UFXAutoTriggerBoolGreaterThanOrEqualTo* UFXAutoTriggerBoolGreaterThanOrEqualTo::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolGreaterThanOrEqualTo");
    return (UFXAutoTriggerBoolGreaterThanOrEqualTo*)res;
}
