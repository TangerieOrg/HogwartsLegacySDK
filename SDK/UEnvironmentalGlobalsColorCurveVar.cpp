#include "EEnvironmentalGlobalsColorCurveVarMode.hpp"
#include "EEnvironmentalGlobalsColorVarConversion.hpp"
#include "EEnvironmentalGlobalsValue.hpp"
#include "UCurveLinearColor.hpp"
#include "UEnvironmentalGlobalsColorCurveVar.hpp"
#include "UEnvironmentalGlobalsColorVar.hpp"
UEnvironmentalGlobalsColorCurveVar* UEnvironmentalGlobalsColorCurveVar::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsColorCurveVar");
    return (UEnvironmentalGlobalsColorCurveVar*)res;
}
