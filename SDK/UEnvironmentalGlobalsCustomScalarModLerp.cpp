#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#include "UEnvironmentalGlobalsCustomScalarModLerp.hpp"
UEnvironmentalGlobalsCustomScalarModLerp* UEnvironmentalGlobalsCustomScalarModLerp::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModLerp");
    return (UEnvironmentalGlobalsCustomScalarModLerp*)res;
}
