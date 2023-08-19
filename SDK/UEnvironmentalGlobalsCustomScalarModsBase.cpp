#include "UEnvironmentalGlobalsCustomScalarBase.hpp"
#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#include "UEnvironmentalGlobalsCustomScalarModsBase.hpp"
UEnvironmentalGlobalsCustomScalarModsBase* UEnvironmentalGlobalsCustomScalarModsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModsBase");
    return (UEnvironmentalGlobalsCustomScalarModsBase*)res;
}
