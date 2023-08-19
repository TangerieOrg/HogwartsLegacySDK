#include "FVolumetricCloudsBasicParametersOverride.hpp"
#include "FVolumetricCloudsSkyLightParametersOverride.hpp"
#include "UCloudLightingParams.hpp"
#include "UCloudLightingParamsOverrideBasic.hpp"
UCloudLightingParamsOverrideBasic* UCloudLightingParamsOverrideBasic::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.CloudLightingParamsOverrideBasic");
    return (UCloudLightingParamsOverrideBasic*)res;
}
