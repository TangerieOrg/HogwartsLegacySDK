#include "UEnvironmentalGlobalsCustomScalarBase.hpp"
#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#include "UEnvironmentalGlobalsCustomScalarModSingleValue.hpp"
UEnvironmentalGlobalsCustomScalarModSingleValue* UEnvironmentalGlobalsCustomScalarModSingleValue::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModSingleValue");
    return (UEnvironmentalGlobalsCustomScalarModSingleValue*)res;
}
