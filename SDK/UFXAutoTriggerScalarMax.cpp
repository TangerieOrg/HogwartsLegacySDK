#include "UFXAutoTriggerScalarMax.hpp"
#include "UFXAutoTriggerScalarTwoParams.hpp"
UFXAutoTriggerScalarMax* UFXAutoTriggerScalarMax::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarMax");
    return (UFXAutoTriggerScalarMax*)res;
}
