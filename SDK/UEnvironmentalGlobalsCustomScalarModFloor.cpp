#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#include "UEnvironmentalGlobalsCustomScalarModFloor.hpp"
UEnvironmentalGlobalsCustomScalarModFloor* UEnvironmentalGlobalsCustomScalarModFloor::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModFloor");
    return (UEnvironmentalGlobalsCustomScalarModFloor*)res;
}
