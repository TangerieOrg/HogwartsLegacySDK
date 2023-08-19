#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolParamList.hpp"
UFXAutoTriggerBoolParamList* UFXAutoTriggerBoolParamList::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolParamList");
    return (UFXAutoTriggerBoolParamList*)res;
}
