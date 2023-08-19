#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolScalarParam.hpp"
#include "UFXAutoTriggerScalar.hpp"
UFXAutoTriggerBoolScalarParam* UFXAutoTriggerBoolScalarParam::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolScalarParam");
    return (UFXAutoTriggerBoolScalarParam*)res;
}
