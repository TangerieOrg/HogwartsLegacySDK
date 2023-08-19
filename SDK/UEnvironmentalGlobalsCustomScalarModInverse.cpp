#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#include "UEnvironmentalGlobalsCustomScalarModInverse.hpp"
UEnvironmentalGlobalsCustomScalarModInverse* UEnvironmentalGlobalsCustomScalarModInverse::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModInverse");
    return (UEnvironmentalGlobalsCustomScalarModInverse*)res;
}
