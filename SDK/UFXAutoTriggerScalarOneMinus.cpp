#include "UFXAutoTriggerScalarOneMinus.hpp"
#include "UFXAutoTriggerScalarSingleParam.hpp"
UFXAutoTriggerScalarOneMinus* UFXAutoTriggerScalarOneMinus::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarOneMinus");
    return (UFXAutoTriggerScalarOneMinus*)res;
}
