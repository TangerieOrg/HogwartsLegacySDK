#include "UEnvironmentalGlobalsCustomScalarModDivide.hpp"
#include "UEnvironmentalGlobalsCustomScalarModSingleValue.hpp"
UEnvironmentalGlobalsCustomScalarModDivide* UEnvironmentalGlobalsCustomScalarModDivide::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModDivide");
    return (UEnvironmentalGlobalsCustomScalarModDivide*)res;
}
