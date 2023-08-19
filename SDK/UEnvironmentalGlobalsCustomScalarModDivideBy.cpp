#include "UEnvironmentalGlobalsCustomScalarModDivideBy.hpp"
#include "UEnvironmentalGlobalsCustomScalarModSingleValue.hpp"
UEnvironmentalGlobalsCustomScalarModDivideBy* UEnvironmentalGlobalsCustomScalarModDivideBy::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModDivideBy");
    return (UEnvironmentalGlobalsCustomScalarModDivideBy*)res;
}
