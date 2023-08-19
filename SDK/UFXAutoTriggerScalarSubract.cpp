#include "UFXAutoTriggerScalarSubract.hpp"
#include "UFXAutoTriggerScalarTwoParams.hpp"
UFXAutoTriggerScalarSubract* UFXAutoTriggerScalarSubract::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarSubract");
    return (UFXAutoTriggerScalarSubract*)res;
}
