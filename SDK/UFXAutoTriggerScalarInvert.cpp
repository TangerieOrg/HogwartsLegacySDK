#include "UFXAutoTriggerScalarInvert.hpp"
#include "UFXAutoTriggerScalarSingleParam.hpp"
UFXAutoTriggerScalarInvert* UFXAutoTriggerScalarInvert::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarInvert");
    return (UFXAutoTriggerScalarInvert*)res;
}
