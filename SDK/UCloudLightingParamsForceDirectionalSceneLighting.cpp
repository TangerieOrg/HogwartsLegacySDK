#include "UCloudLightingParams.hpp"
#include "UCloudLightingParamsForceDirectionalSceneLighting.hpp"
UCloudLightingParamsForceDirectionalSceneLighting* UCloudLightingParamsForceDirectionalSceneLighting::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.CloudLightingParamsForceDirectionalSceneLighting");
    return (UCloudLightingParamsForceDirectionalSceneLighting*)res;
}
