#include "FExpHeightFogVolumetricParametersOverride.hpp"
#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogParamsOverrideVolumetricFog.hpp"
UExpHeightFogParamsOverrideVolumetricFog* UExpHeightFogParamsOverrideVolumetricFog::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParamsOverrideVolumetricFog");
    return (UExpHeightFogParamsOverrideVolumetricFog*)res;
}
