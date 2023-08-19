#include "UFXAutoTriggerBoolGreaterThan.hpp"
#include "UFXAutoTriggerBoolTwoScalarParams.hpp"
UFXAutoTriggerBoolGreaterThan* UFXAutoTriggerBoolGreaterThan::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolGreaterThan");
    return (UFXAutoTriggerBoolGreaterThan*)res;
}
