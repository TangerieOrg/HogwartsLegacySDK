#include "FVolumetricCloudsSceneLightRotatorParametersOverride.hpp"
#include "UCloudLightingParams.hpp"
#include "UCloudLightingParamsOverrideSceneLighting.hpp"
UCloudLightingParamsOverrideSceneLighting* UCloudLightingParamsOverrideSceneLighting::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.CloudLightingParamsOverrideSceneLighting");
    return (UCloudLightingParamsOverrideSceneLighting*)res;
}
