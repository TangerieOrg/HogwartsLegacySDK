#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#include "UObject.hpp"
UEnvironmentalGlobalsCustomScalarMod* UEnvironmentalGlobalsCustomScalarMod::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarMod");
    return (UEnvironmentalGlobalsCustomScalarMod*)res;
}
