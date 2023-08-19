#include "UFXAutoTriggerScalarNegate.hpp"
#include "UFXAutoTriggerScalarSingleParam.hpp"
UFXAutoTriggerScalarNegate* UFXAutoTriggerScalarNegate::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarNegate");
    return (UFXAutoTriggerScalarNegate*)res;
}
