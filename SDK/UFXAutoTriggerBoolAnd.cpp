#include "UFXAutoTriggerBoolAnd.hpp"
#include "UFXAutoTriggerBoolTwoParams.hpp"
UFXAutoTriggerBoolAnd* UFXAutoTriggerBoolAnd::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolAnd");
    return (UFXAutoTriggerBoolAnd*)res;
}
