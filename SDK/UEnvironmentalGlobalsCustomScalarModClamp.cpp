#include "UEnvironmentalGlobalsCustomScalarMod.hpp"
#include "UEnvironmentalGlobalsCustomScalarModClamp.hpp"
UEnvironmentalGlobalsCustomScalarModClamp* UEnvironmentalGlobalsCustomScalarModClamp::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarModClamp");
    return (UEnvironmentalGlobalsCustomScalarModClamp*)res;
}
