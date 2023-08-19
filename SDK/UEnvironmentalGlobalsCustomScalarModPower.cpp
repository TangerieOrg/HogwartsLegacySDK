#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#include "UEnvironmentalGlobalsCustomScalarModPower.hpp"
UEnvironmentalGlobalsCustomScalarModPower* UEnvironmentalGlobalsCustomScalarModPower::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModPower");
    return (UEnvironmentalGlobalsCustomScalarModPower*)res;
}
