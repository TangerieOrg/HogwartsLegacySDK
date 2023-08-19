#include "UCurveFloat.hpp"
#include "ULightDirectionLerpControl.hpp"
#include "ULightDirectionLerpCurve.hpp"
ULightDirectionLerpCurve* ULightDirectionLerpCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.LightDirectionLerpCurve");
    return (ULightDirectionLerpCurve*)res;
}
