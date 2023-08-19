#include "UFXAutoTriggerBoolIsZero.hpp"
#include "UFXAutoTriggerBoolScalarParam.hpp"
UFXAutoTriggerBoolIsZero* UFXAutoTriggerBoolIsZero::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolIsZero");
    return (UFXAutoTriggerBoolIsZero*)res;
}
