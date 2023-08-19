#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#include "UEnvironmentalGlobalsCustomScalarModSmoothStep.hpp"
UEnvironmentalGlobalsCustomScalarModSmoothStep* UEnvironmentalGlobalsCustomScalarModSmoothStep::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModSmoothStep");
    return (UEnvironmentalGlobalsCustomScalarModSmoothStep*)res;
}
