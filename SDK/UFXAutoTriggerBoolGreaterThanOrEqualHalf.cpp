#include "UFXAutoTriggerBoolGreaterThanOrEqualHalf.hpp"
#include "UFXAutoTriggerBoolScalarParam.hpp"
UFXAutoTriggerBoolGreaterThanOrEqualHalf* UFXAutoTriggerBoolGreaterThanOrEqualHalf::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolGreaterThanOrEqualHalf");
    return (UFXAutoTriggerBoolGreaterThanOrEqualHalf*)res;
}
