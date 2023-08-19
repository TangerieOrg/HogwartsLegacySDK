#include "FEnvironmentalGlobalsScalarRunMode.hpp"
#include "UEnvironmentalGlobalsScalarVar.hpp"
#include "UEnvironmentalGlobalsVar.hpp"
UEnvironmentalGlobalsScalarVar* UEnvironmentalGlobalsScalarVar::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsScalarVar");
    return (UEnvironmentalGlobalsScalarVar*)res;
}
