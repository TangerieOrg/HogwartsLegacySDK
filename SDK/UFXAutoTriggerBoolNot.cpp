#include "UFXAutoTriggerBoolNot.hpp"
#include "UFXAutoTriggerBoolSingleParam.hpp"
UFXAutoTriggerBoolNot* UFXAutoTriggerBoolNot::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolNot");
    return (UFXAutoTriggerBoolNot*)res;
}
