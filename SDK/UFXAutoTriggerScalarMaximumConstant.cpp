#include "UFXAutoTriggerScalarMaximumConstant.hpp"
#include "UFXAutoTriggerScalarSingleParam.hpp"
UFXAutoTriggerScalarMaximumConstant* UFXAutoTriggerScalarMaximumConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarMaximumConstant");
    return (UFXAutoTriggerScalarMaximumConstant*)res;
}
