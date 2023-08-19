#include "UEnvironmentalGlobalsCustomScalarBase.hpp"
#include "UEnvironmentalGlobalsCustomScalarConstant.hpp"
UEnvironmentalGlobalsCustomScalarConstant* UEnvironmentalGlobalsCustomScalarConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarConstant");
    return (UEnvironmentalGlobalsCustomScalarConstant*)res;
}
