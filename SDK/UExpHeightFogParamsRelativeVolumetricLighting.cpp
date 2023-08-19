#include "FExpHeightFogVolumetricLightingParametersRelative.hpp"
#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogParamsRelativeVolumetricLighting.hpp"
UExpHeightFogParamsRelativeVolumetricLighting* UExpHeightFogParamsRelativeVolumetricLighting::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParamsRelativeVolumetricLighting");
    return (UExpHeightFogParamsRelativeVolumetricLighting*)res;
}
