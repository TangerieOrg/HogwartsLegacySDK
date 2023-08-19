#include "FVector2D.hpp"
#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#include "UEnvironmentalGlobalsCustomScalarModRemap.hpp"
UEnvironmentalGlobalsCustomScalarModRemap* UEnvironmentalGlobalsCustomScalarModRemap::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModRemap");
    return (UEnvironmentalGlobalsCustomScalarModRemap*)res;
}
