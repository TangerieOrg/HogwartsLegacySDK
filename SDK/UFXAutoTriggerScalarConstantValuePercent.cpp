#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarConstantValuePercent.hpp"
UFXAutoTriggerScalarConstantValuePercent* UFXAutoTriggerScalarConstantValuePercent::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarConstantValuePercent");
    return (UFXAutoTriggerScalarConstantValuePercent*)res;
}
