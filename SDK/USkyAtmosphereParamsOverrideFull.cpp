#include "FSkyAtmosphereParametersOverride.hpp"
#include "USkyAtmosphereParams.hpp"
#include "USkyAtmosphereParamsOverrideFull.hpp"
USkyAtmosphereParamsOverrideFull* USkyAtmosphereParamsOverrideFull::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.SkyAtmosphereParamsOverrideFull");
    return (USkyAtmosphereParamsOverrideFull*)res;
}
