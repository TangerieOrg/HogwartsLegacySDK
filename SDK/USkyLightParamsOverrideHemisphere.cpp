#include "FSkyLightHemisphereParametersOverride.hpp"
#include "USkyLightParams.hpp"
#include "USkyLightParamsOverrideHemisphere.hpp"
USkyLightParamsOverrideHemisphere* USkyLightParamsOverrideHemisphere::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.SkyLightParamsOverrideHemisphere");
    return (USkyLightParamsOverrideHemisphere*)res;
}
