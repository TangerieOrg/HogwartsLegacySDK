#include "UFXAutoTriggerScalarDivide.hpp"
#include "UFXAutoTriggerScalarTwoParams.hpp"
UFXAutoTriggerScalarDivide* UFXAutoTriggerScalarDivide::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarDivide");
    return (UFXAutoTriggerScalarDivide*)res;
}
