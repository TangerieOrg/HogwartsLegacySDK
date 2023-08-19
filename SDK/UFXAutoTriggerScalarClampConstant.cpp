#include "UFXAutoTriggerScalarClampConstant.hpp"
#include "UFXAutoTriggerScalarSingleParam.hpp"
UFXAutoTriggerScalarClampConstant* UFXAutoTriggerScalarClampConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarClampConstant");
    return (UFXAutoTriggerScalarClampConstant*)res;
}
