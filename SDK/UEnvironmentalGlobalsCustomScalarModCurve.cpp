#include "UCurveFloat.hpp"
#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#include "UEnvironmentalGlobalsCustomScalarModCurve.hpp"
UEnvironmentalGlobalsCustomScalarModCurve* UEnvironmentalGlobalsCustomScalarModCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModCurve");
    return (UEnvironmentalGlobalsCustomScalarModCurve*)res;
}
