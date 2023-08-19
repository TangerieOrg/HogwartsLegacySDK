#include "UFXAutoTriggerBoolAndList.hpp"
#include "UFXAutoTriggerBoolParamList.hpp"
UFXAutoTriggerBoolAndList* UFXAutoTriggerBoolAndList::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolAndList");
    return (UFXAutoTriggerBoolAndList*)res;
}
