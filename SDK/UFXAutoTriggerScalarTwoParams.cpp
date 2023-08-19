#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarTwoParams.hpp"
UFXAutoTriggerScalarTwoParams* UFXAutoTriggerScalarTwoParams::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarTwoParams");
    return (UFXAutoTriggerScalarTwoParams*)res;
}
