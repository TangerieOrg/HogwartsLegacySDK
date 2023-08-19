#include "UEnvironmentalGlobalsCustomScalarModMultiply.hpp"
#include "UEnvironmentalGlobalsCustomScalarModSingleValue.hpp"
UEnvironmentalGlobalsCustomScalarModMultiply* UEnvironmentalGlobalsCustomScalarModMultiply::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModMultiply");
    return (UEnvironmentalGlobalsCustomScalarModMultiply*)res;
}
