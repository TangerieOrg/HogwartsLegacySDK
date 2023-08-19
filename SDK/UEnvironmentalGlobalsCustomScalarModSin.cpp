#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#include "UEnvironmentalGlobalsCustomScalarModSin.hpp"
UEnvironmentalGlobalsCustomScalarModSin* UEnvironmentalGlobalsCustomScalarModSin::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModSin");
    return (UEnvironmentalGlobalsCustomScalarModSin*)res;
}
