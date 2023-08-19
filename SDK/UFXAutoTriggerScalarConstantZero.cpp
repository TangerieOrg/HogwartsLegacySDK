#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarConstantZero.hpp"
UFXAutoTriggerScalarConstantZero* UFXAutoTriggerScalarConstantZero::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarConstantZero");
    return (UFXAutoTriggerScalarConstantZero*)res;
}
