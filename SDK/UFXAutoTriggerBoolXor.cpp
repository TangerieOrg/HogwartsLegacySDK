#include "UFXAutoTriggerBoolTwoParams.hpp"
#include "UFXAutoTriggerBoolXor.hpp"
UFXAutoTriggerBoolXor* UFXAutoTriggerBoolXor::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolXor");
    return (UFXAutoTriggerBoolXor*)res;
}
