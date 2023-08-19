#include "UEnvironmentalGlobalsVar.hpp"
#include "UObject.hpp"
UEnvironmentalGlobalsVar* UEnvironmentalGlobalsVar::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsVar");
    return (UEnvironmentalGlobalsVar*)res;
}
