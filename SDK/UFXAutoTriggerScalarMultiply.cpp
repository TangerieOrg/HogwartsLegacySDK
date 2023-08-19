#include "UFXAutoTriggerScalarMultiply.hpp"
#include "UFXAutoTriggerScalarTwoParams.hpp"
UFXAutoTriggerScalarMultiply* UFXAutoTriggerScalarMultiply::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarMultiply");
    return (UFXAutoTriggerScalarMultiply*)res;
}
