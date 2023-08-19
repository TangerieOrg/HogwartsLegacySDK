#include "UEnvironmentalGlobalsCustomScalarBlendDomain.hpp"
#include "UEnvironmentalGlobalsCustomScalarModsBase.hpp"
#include "URenderSettingsCustomBlendDomain.hpp"
UEnvironmentalGlobalsCustomScalarBlendDomain* UEnvironmentalGlobalsCustomScalarBlendDomain::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.EnvironmentalGlobalsCustomScalarBlendDomain");
    return (UEnvironmentalGlobalsCustomScalarBlendDomain*)res;
}
