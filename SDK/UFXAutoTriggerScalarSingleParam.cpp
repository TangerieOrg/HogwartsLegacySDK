#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarSingleParam.hpp"
UFXAutoTriggerScalarSingleParam* UFXAutoTriggerScalarSingleParam::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarSingleParam");
    return (UFXAutoTriggerScalarSingleParam*)res;
}
