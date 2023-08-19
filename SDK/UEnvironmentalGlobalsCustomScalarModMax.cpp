#include "UEnvironmentalGlobalsCustomScalarModMax.hpp"
#include "UEnvironmentalGlobalsCustomScalarModSingleValue.hpp"
UEnvironmentalGlobalsCustomScalarModMax* UEnvironmentalGlobalsCustomScalarModMax::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModMax");
    return (UEnvironmentalGlobalsCustomScalarModMax*)res;
}
