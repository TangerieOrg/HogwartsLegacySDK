#include "UDEPRECATED_CurveEdPresetCurve.hpp"
#include "UObject.hpp"
UDEPRECATED_CurveEdPresetCurve* UDEPRECATED_CurveEdPresetCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CurveEdPresetCurve");
    return (UDEPRECATED_CurveEdPresetCurve*)res;
}
