#include "FLinearColor.hpp"
#include "UCloudLightingParams.hpp"
#include "UCloudLightingParamsSceneLightingSun.hpp"
UCloudLightingParamsSceneLightingSun* UCloudLightingParamsSceneLightingSun::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.CloudLightingParamsSceneLightingSun");
    return (UCloudLightingParamsSceneLightingSun*)res;
}
