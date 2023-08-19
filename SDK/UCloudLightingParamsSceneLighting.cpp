#include "FVolumetricCloudsSceneLightRotatorParameters.hpp"
#include "UCloudLightingParams.hpp"
#include "UCloudLightingParamsSceneLighting.hpp"
UCloudLightingParamsSceneLighting* UCloudLightingParamsSceneLighting::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.CloudLightingParamsSceneLighting");
    return (UCloudLightingParamsSceneLighting*)res;
}
