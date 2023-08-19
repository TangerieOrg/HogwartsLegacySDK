#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolTwoParams.hpp"
UFXAutoTriggerBoolTwoParams* UFXAutoTriggerBoolTwoParams::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolTwoParams");
    return (UFXAutoTriggerBoolTwoParams*)res;
}
