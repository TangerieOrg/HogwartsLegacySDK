#include "UFXAutoTriggerScalarPower.hpp"
#include "UFXAutoTriggerScalarSingleParam.hpp"
UFXAutoTriggerScalarPower* UFXAutoTriggerScalarPower::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarPower");
    return (UFXAutoTriggerScalarPower*)res;
}
