#include "FVolumetricCloudsLightingParameters.hpp"
#include "UCloudLightingParams.hpp"
#include "UCloudLightingParamsFull.hpp"
UCloudLightingParamsFull* UCloudLightingParamsFull::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.CloudLightingParamsFull");
    return (UCloudLightingParamsFull*)res;
}
