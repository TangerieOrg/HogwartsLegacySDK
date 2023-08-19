#include "UFXAutoTriggerScalarMinConstant.hpp"
#include "UFXAutoTriggerScalarSingleParam.hpp"
UFXAutoTriggerScalarMinConstant* UFXAutoTriggerScalarMinConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarMinConstant");
    return (UFXAutoTriggerScalarMinConstant*)res;
}
