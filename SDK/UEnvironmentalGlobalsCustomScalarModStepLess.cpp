#include "UEnvironmentalGlobalsCustomScalarModSingleValue.hpp"
#include "UEnvironmentalGlobalsCustomScalarModStepLess.hpp"
UEnvironmentalGlobalsCustomScalarModStepLess* UEnvironmentalGlobalsCustomScalarModStepLess::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModStepLess");
    return (UEnvironmentalGlobalsCustomScalarModStepLess*)res;
}
