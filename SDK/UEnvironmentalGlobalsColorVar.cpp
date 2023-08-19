#include "FEnvironmentalGlobalsColorRunMode.hpp"
#include "UEnvironmentalGlobalsColorVar.hpp"
#include "UEnvironmentalGlobalsVar.hpp"
UEnvironmentalGlobalsColorVar* UEnvironmentalGlobalsColorVar::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsColorVar");
    return (UEnvironmentalGlobalsColorVar*)res;
}
