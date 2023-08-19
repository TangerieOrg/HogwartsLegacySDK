#include "UEnvironmentalGlobalsCustomScalarModMinus.hpp"
#include "UEnvironmentalGlobalsCustomScalarModSingleValue.hpp"
UEnvironmentalGlobalsCustomScalarModMinus* UEnvironmentalGlobalsCustomScalarModMinus::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModMinus");
    return (UEnvironmentalGlobalsCustomScalarModMinus*)res;
}
