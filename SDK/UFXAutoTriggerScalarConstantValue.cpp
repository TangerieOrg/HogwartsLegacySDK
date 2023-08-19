#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarConstantValue.hpp"
UFXAutoTriggerScalarConstantValue* UFXAutoTriggerScalarConstantValue::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarConstantValue");
    return (UFXAutoTriggerScalarConstantValue*)res;
}
