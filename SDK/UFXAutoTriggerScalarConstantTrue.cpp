#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerScalarConstantTrue.hpp"
UFXAutoTriggerScalarConstantTrue* UFXAutoTriggerScalarConstantTrue::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarConstantTrue");
    return (UFXAutoTriggerScalarConstantTrue*)res;
}
