#include "EEnvironmentalGlobalsScalarConversion.hpp"
#include "EEnvironmentalGlobalsValue.hpp"
#include "FEnvironmentalGlobalsScalarClamp.hpp"
#include "UCurveFloat.hpp"
#include "UEnvironmentalGlobalsScalarCurveVar.hpp"
#include "UEnvironmentalGlobalsScalarVar.hpp"
UEnvironmentalGlobalsScalarCurveVar* UEnvironmentalGlobalsScalarCurveVar::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsScalarCurveVar");
    return (UEnvironmentalGlobalsScalarCurveVar*)res;
}
