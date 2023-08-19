#include "UFXAutoTriggerBoolGreaterThanZero.hpp"
#include "UFXAutoTriggerBoolScalarParam.hpp"
UFXAutoTriggerBoolGreaterThanZero* UFXAutoTriggerBoolGreaterThanZero::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolGreaterThanZero");
    return (UFXAutoTriggerBoolGreaterThanZero*)res;
}
