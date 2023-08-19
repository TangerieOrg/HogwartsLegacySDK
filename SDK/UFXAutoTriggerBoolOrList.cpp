#include "UFXAutoTriggerBoolOrList.hpp"
#include "UFXAutoTriggerBoolParamList.hpp"
UFXAutoTriggerBoolOrList* UFXAutoTriggerBoolOrList::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolOrList");
    return (UFXAutoTriggerBoolOrList*)res;
}
