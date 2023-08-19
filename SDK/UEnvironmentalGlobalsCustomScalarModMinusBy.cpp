#include "UEnvironmentalGlobalsCustomScalarModMinusBy.hpp"
#include "UEnvironmentalGlobalsCustomScalarModSingleValue.hpp"
UEnvironmentalGlobalsCustomScalarModMinusBy* UEnvironmentalGlobalsCustomScalarModMinusBy::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModMinusBy");
    return (UEnvironmentalGlobalsCustomScalarModMinusBy*)res;
}
