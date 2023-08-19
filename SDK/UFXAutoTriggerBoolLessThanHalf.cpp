#include "UFXAutoTriggerBoolLessThanHalf.hpp"
#include "UFXAutoTriggerBoolScalarParam.hpp"
UFXAutoTriggerBoolLessThanHalf* UFXAutoTriggerBoolLessThanHalf::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolLessThanHalf");
    return (UFXAutoTriggerBoolLessThanHalf*)res;
}
