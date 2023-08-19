#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#include "UEnvironmentalGlobalsCustomScalarModRaise.hpp"
UEnvironmentalGlobalsCustomScalarModRaise* UEnvironmentalGlobalsCustomScalarModRaise::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModRaise");
    return (UEnvironmentalGlobalsCustomScalarModRaise*)res;
}
