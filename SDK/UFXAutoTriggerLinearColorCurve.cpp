#include "UCurveLinearColor.hpp"
#include "UFXAutoTriggerLinearColor.hpp"
#include "UFXAutoTriggerLinearColorCurve.hpp"
#include "UFXAutoTriggerScalar.hpp"
UFXAutoTriggerLinearColorCurve* UFXAutoTriggerLinearColorCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerLinearColorCurve");
    return (UFXAutoTriggerLinearColorCurve*)res;
}
