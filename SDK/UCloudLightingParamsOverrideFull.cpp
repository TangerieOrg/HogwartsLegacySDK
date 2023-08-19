#include "FVolumetricCloudsLightingParametersOverride.hpp"
#include "UCloudLightingParams.hpp"
#include "UCloudLightingParamsOverrideFull.hpp"
UCloudLightingParamsOverrideFull* UCloudLightingParamsOverrideFull::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.CloudLightingParamsOverrideFull");
    return (UCloudLightingParamsOverrideFull*)res;
}
