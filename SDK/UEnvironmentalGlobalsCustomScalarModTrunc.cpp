#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#include "UEnvironmentalGlobalsCustomScalarModTrunc.hpp"
UEnvironmentalGlobalsCustomScalarModTrunc* UEnvironmentalGlobalsCustomScalarModTrunc::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModTrunc");
    return (UEnvironmentalGlobalsCustomScalarModTrunc*)res;
}
