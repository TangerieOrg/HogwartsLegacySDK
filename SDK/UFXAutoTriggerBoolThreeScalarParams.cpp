#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolThreeScalarParams.hpp"
#include "UFXAutoTriggerScalar.hpp"
UFXAutoTriggerBoolThreeScalarParams* UFXAutoTriggerBoolThreeScalarParams::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolThreeScalarParams");
    return (UFXAutoTriggerBoolThreeScalarParams*)res;
}
