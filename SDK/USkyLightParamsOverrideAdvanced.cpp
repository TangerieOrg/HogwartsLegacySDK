#include "FSkyLightAdvancedParametersOverride.hpp"
#include "USkyLightParams.hpp"
#include "USkyLightParamsOverrideAdvanced.hpp"
USkyLightParamsOverrideAdvanced* USkyLightParamsOverrideAdvanced::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.SkyLightParamsOverrideAdvanced");
    return (USkyLightParamsOverrideAdvanced*)res;
}
