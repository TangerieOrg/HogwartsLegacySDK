#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarFromBoolSelect.hpp"
UFXAutoTriggerScalarFromBoolSelect* UFXAutoTriggerScalarFromBoolSelect::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarFromBoolSelect");
    return (UFXAutoTriggerScalarFromBoolSelect*)res;
}
