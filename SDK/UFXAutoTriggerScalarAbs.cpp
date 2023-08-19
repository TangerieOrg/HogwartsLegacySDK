#include "UFXAutoTriggerScalarAbs.hpp"
#include "UFXAutoTriggerScalarSingleParam.hpp"
UFXAutoTriggerScalarAbs* UFXAutoTriggerScalarAbs::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarAbs");
    return (UFXAutoTriggerScalarAbs*)res;
}
