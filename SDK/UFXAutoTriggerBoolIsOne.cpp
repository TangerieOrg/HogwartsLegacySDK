#include "UFXAutoTriggerBoolIsOne.hpp"
#include "UFXAutoTriggerBoolScalarParam.hpp"
UFXAutoTriggerBoolIsOne* UFXAutoTriggerBoolIsOne::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolIsOne");
    return (UFXAutoTriggerBoolIsOne*)res;
}
