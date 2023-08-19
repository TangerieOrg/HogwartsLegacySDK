#include "EEnvironmentalGlobalsValue.hpp"
#include "UEnvironmentalGlobalsCustomScalarEnvGlobal.hpp"
#include "UEnvironmentalGlobalsCustomScalarModsBase.hpp"
UEnvironmentalGlobalsCustomScalarEnvGlobal* UEnvironmentalGlobalsCustomScalarEnvGlobal::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarEnvGlobal");
    return (UEnvironmentalGlobalsCustomScalarEnvGlobal*)res;
}
