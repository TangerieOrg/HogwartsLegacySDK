#include "FSkyLightLightingParametersOverride.hpp"
#include "USkyLightParams.hpp"
#include "USkyLightParamsOverrideFull.hpp"
USkyLightParamsOverrideFull* USkyLightParamsOverrideFull::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.SkyLightParamsOverrideFull");
    return (USkyLightParamsOverrideFull*)res;
}
