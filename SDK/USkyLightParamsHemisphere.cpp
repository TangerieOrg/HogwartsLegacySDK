#include "FSkyLightHemisphereParameters.hpp"
#include "USkyLightParams.hpp"
#include "USkyLightParamsHemisphere.hpp"
USkyLightParamsHemisphere* USkyLightParamsHemisphere::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.SkyLightParamsHemisphere");
    return (USkyLightParamsHemisphere*)res;
}
