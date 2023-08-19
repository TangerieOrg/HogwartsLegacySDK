#include "FSkyAtmosphereScatteringParametersOverride.hpp"
#include "USkyAtmosphereParams.hpp"
#include "USkyAtmosphereParamsOverrideScattering.hpp"
USkyAtmosphereParamsOverrideScattering* USkyAtmosphereParamsOverrideScattering::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.SkyAtmosphereParamsOverrideScattering");
    return (USkyAtmosphereParamsOverrideScattering*)res;
}
