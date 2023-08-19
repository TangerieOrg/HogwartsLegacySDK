#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolSingleParam.hpp"
UFXAutoTriggerBoolSingleParam* UFXAutoTriggerBoolSingleParam::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolSingleParam");
    return (UFXAutoTriggerBoolSingleParam*)res;
}
