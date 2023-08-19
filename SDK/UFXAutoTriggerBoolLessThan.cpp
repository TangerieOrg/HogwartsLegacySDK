#include "UFXAutoTriggerBoolLessThan.hpp"
#include "UFXAutoTriggerBoolTwoScalarParams.hpp"
UFXAutoTriggerBoolLessThan* UFXAutoTriggerBoolLessThan::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolLessThan");
    return (UFXAutoTriggerBoolLessThan*)res;
}
