#include "UFXAutoTriggerBoolNotOne.hpp"
#include "UFXAutoTriggerBoolScalarParam.hpp"
UFXAutoTriggerBoolNotOne* UFXAutoTriggerBoolNotOne::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolNotOne");
    return (UFXAutoTriggerBoolNotOne*)res;
}
