#include "UFXAutoTriggerScalarAdd.hpp"
#include "UFXAutoTriggerScalarTwoParams.hpp"
UFXAutoTriggerScalarAdd* UFXAutoTriggerScalarAdd::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarAdd");
    return (UFXAutoTriggerScalarAdd*)res;
}
