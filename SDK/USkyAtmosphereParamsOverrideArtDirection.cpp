#include "FSkyAtmosphereArtDirectionParametersOverride.hpp"
#include "USkyAtmosphereParams.hpp"
#include "USkyAtmosphereParamsOverrideArtDirection.hpp"
USkyAtmosphereParamsOverrideArtDirection* USkyAtmosphereParamsOverrideArtDirection::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.SkyAtmosphereParamsOverrideArtDirection");
    return (USkyAtmosphereParamsOverrideArtDirection*)res;
}
