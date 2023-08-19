#include "FExposureExpressions.hpp"
#include "UDataAsset.hpp"
#include "UEnvironmentalGlobalsVar.hpp"
#include "UEnvironmentalGlobalsVars.hpp"
UEnvironmentalGlobalsVars* UEnvironmentalGlobalsVars::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsVars");
    return (UEnvironmentalGlobalsVars*)res;
}
