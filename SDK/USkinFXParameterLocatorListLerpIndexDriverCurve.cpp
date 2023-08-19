#include "UCurveFloat.hpp"
#include "USkinFXParameterLocatorListLerpIndexDriver.hpp"
#include "USkinFXParameterLocatorListLerpIndexDriverCurve.hpp"
USkinFXParameterLocatorListLerpIndexDriverCurve* USkinFXParameterLocatorListLerpIndexDriverCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.SkinFXParameterLocatorListLerpIndexDriverCurve");
    return (USkinFXParameterLocatorListLerpIndexDriverCurve*)res;
}
