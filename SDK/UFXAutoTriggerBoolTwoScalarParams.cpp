#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolTwoScalarParams.hpp"
#include "UFXAutoTriggerScalar.hpp"
UFXAutoTriggerBoolTwoScalarParams* UFXAutoTriggerBoolTwoScalarParams::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolTwoScalarParams");
    return (UFXAutoTriggerBoolTwoScalarParams*)res;
}
