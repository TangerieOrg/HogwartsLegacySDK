#include "FSkyAtmosphereOzoneParametersOverride.hpp"
#include "USkyAtmosphereParams.hpp"
#include "USkyAtmosphereParamsOverrideOzone.hpp"
USkyAtmosphereParamsOverrideOzone* USkyAtmosphereParamsOverrideOzone::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.SkyAtmosphereParamsOverrideOzone");
    return (USkyAtmosphereParamsOverrideOzone*)res;
}
