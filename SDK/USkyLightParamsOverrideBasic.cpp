#include "FSkyLightBasicParametersOverride.hpp"
#include "USkyLightParams.hpp"
#include "USkyLightParamsOverrideBasic.hpp"
USkyLightParamsOverrideBasic* USkyLightParamsOverrideBasic::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.SkyLightParamsOverrideBasic");
    return (USkyLightParamsOverrideBasic*)res;
}
