#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#include "UEnvironmentalGlobalsCustomScalarModCeil.hpp"
UEnvironmentalGlobalsCustomScalarModCeil* UEnvironmentalGlobalsCustomScalarModCeil::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModCeil");
    return (UEnvironmentalGlobalsCustomScalarModCeil*)res;
}
