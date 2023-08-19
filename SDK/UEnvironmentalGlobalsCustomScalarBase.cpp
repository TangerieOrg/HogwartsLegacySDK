#include "UEnvironmentalGlobalsCustomScalarBase.hpp"
#include "UObject.hpp"
UEnvironmentalGlobalsCustomScalarBase* UEnvironmentalGlobalsCustomScalarBase::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarBase");
    return (UEnvironmentalGlobalsCustomScalarBase*)res;
}
