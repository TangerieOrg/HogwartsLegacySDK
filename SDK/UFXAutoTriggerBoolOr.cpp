#include "UFXAutoTriggerBoolOr.hpp"
#include "UFXAutoTriggerBoolTwoParams.hpp"
UFXAutoTriggerBoolOr* UFXAutoTriggerBoolOr::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolOr");
    return (UFXAutoTriggerBoolOr*)res;
}
