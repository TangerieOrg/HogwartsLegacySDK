#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#include "UEnvironmentalGlobalsCustomScalarModOneMinus.hpp"
UEnvironmentalGlobalsCustomScalarModOneMinus* UEnvironmentalGlobalsCustomScalarModOneMinus::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModOneMinus");
    return (UEnvironmentalGlobalsCustomScalarModOneMinus*)res;
}
