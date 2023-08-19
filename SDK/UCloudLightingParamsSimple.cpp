#include "FVolumetricCloudsBasicParameters.hpp"
#include "FVolumetricCloudsSkyLightParameters.hpp"
#include "UCloudLightingParams.hpp"
#include "UCloudLightingParamsSimple.hpp"
UCloudLightingParamsSimple* UCloudLightingParamsSimple::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.CloudLightingParamsSimple");
    return (UCloudLightingParamsSimple*)res;
}
