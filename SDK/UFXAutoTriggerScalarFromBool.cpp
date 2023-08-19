#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarFromBool.hpp"
UFXAutoTriggerScalarFromBool* UFXAutoTriggerScalarFromBool::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarFromBool");
    return (UFXAutoTriggerScalarFromBool*)res;
}
