#include "UEnvironmentalGlobalsCustomScalarModSingleValue.hpp"
#include "UEnvironmentalGlobalsCustomScalarModStepGreater.hpp"
UEnvironmentalGlobalsCustomScalarModStepGreater* UEnvironmentalGlobalsCustomScalarModStepGreater::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModStepGreater");
    return (UEnvironmentalGlobalsCustomScalarModStepGreater*)res;
}
