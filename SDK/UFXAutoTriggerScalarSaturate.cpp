#include "UFXAutoTriggerScalarSaturate.hpp"
#include "UFXAutoTriggerScalarSingleParam.hpp"
UFXAutoTriggerScalarSaturate* UFXAutoTriggerScalarSaturate::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarSaturate");
    return (UFXAutoTriggerScalarSaturate*)res;
}
