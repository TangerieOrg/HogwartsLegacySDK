#include "UFXAutoTriggerBoolNotZero.hpp"
#include "UFXAutoTriggerBoolScalarParam.hpp"
UFXAutoTriggerBoolNotZero* UFXAutoTriggerBoolNotZero::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolNotZero");
    return (UFXAutoTriggerBoolNotZero*)res;
}
