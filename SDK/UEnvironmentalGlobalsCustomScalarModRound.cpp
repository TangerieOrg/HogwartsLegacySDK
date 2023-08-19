#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#include "UEnvironmentalGlobalsCustomScalarModRound.hpp"
UEnvironmentalGlobalsCustomScalarModRound* UEnvironmentalGlobalsCustomScalarModRound::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModRound");
    return (UEnvironmentalGlobalsCustomScalarModRound*)res;
}
