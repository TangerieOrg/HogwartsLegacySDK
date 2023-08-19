#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerScalarConstantFalse.hpp"
UFXAutoTriggerScalarConstantFalse* UFXAutoTriggerScalarConstantFalse::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarConstantFalse");
    return (UFXAutoTriggerScalarConstantFalse*)res;
}
