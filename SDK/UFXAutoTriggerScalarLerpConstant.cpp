#include "UFXAutoTriggerScalarLerpConstant.hpp"
#include "UFXAutoTriggerScalarSingleParam.hpp"
UFXAutoTriggerScalarLerpConstant* UFXAutoTriggerScalarLerpConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarLerpConstant");
    return (UFXAutoTriggerScalarLerpConstant*)res;
}
