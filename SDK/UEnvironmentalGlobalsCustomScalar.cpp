#include "UEnvironmentalGlobalsCustomScalar.hpp"
#include "UEnvironmentalGlobalsCustomScalarBase.hpp"
#include "UEnvironmentalGlobalsScalarVar.hpp"
UEnvironmentalGlobalsCustomScalar* UEnvironmentalGlobalsCustomScalar::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalar");
    return (UEnvironmentalGlobalsCustomScalar*)res;
}
