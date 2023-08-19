#include "UCurveFloat.hpp"
#include "UFXAutoTriggerScalarCurve.hpp"
#include "UFXAutoTriggerScalarSingleParam.hpp"
UFXAutoTriggerScalarCurve* UFXAutoTriggerScalarCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarCurve");
    return (UFXAutoTriggerScalarCurve*)res;
}
