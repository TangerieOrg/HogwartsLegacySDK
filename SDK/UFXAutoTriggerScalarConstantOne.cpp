#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarConstantOne.hpp"
UFXAutoTriggerScalarConstantOne* UFXAutoTriggerScalarConstantOne::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarConstantOne");
    return (UFXAutoTriggerScalarConstantOne*)res;
}
