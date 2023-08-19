#include "UFXAutoTriggerBoolLessThanOrEqualTo.hpp"
#include "UFXAutoTriggerBoolTwoScalarParams.hpp"
UFXAutoTriggerBoolLessThanOrEqualTo* UFXAutoTriggerBoolLessThanOrEqualTo::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolLessThanOrEqualTo");
    return (UFXAutoTriggerBoolLessThanOrEqualTo*)res;
}
