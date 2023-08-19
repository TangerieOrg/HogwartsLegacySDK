#include "UFXAutoTriggerBoolLessThanZero.hpp"
#include "UFXAutoTriggerBoolScalarParam.hpp"
UFXAutoTriggerBoolLessThanZero* UFXAutoTriggerBoolLessThanZero::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolLessThanZero");
    return (UFXAutoTriggerBoolLessThanZero*)res;
}
