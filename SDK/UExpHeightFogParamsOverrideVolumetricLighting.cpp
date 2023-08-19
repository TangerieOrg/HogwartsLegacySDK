#include "FExpHeightFogVolumetricLightingParametersOverride.hpp"
#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogParamsOverrideVolumetricLighting.hpp"
UExpHeightFogParamsOverrideVolumetricLighting* UExpHeightFogParamsOverrideVolumetricLighting::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParamsOverrideVolumetricLighting");
    return (UExpHeightFogParamsOverrideVolumetricLighting*)res;
}
