#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#include "UEnvironmentalGlobalsCustomScalarModSaturate.hpp"
UEnvironmentalGlobalsCustomScalarModSaturate* UEnvironmentalGlobalsCustomScalarModSaturate::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModSaturate");
    return (UEnvironmentalGlobalsCustomScalarModSaturate*)res;
}
