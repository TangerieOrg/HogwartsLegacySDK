#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#include "UEnvironmentalGlobalsCustomScalarModCos.hpp"
UEnvironmentalGlobalsCustomScalarModCos* UEnvironmentalGlobalsCustomScalarModCos::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModCos");
    return (UEnvironmentalGlobalsCustomScalarModCos*)res;
}
