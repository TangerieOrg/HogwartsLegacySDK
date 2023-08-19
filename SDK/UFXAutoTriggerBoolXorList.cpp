#include "UFXAutoTriggerBoolParamList.hpp"
#include "UFXAutoTriggerBoolXorList.hpp"
UFXAutoTriggerBoolXorList* UFXAutoTriggerBoolXorList::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolXorList");
    return (UFXAutoTriggerBoolXorList*)res;
}
