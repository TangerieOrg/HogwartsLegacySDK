#include "UEnvironmentalGlobalsCustomScalarModPlus.hpp"
#include "UEnvironmentalGlobalsCustomScalarModSingleValue.hpp"
UEnvironmentalGlobalsCustomScalarModPlus* UEnvironmentalGlobalsCustomScalarModPlus::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModPlus");
    return (UEnvironmentalGlobalsCustomScalarModPlus*)res;
}
