#include "FExpHeightFogVolumetricNoiseParametersOverride.hpp"
#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogParamsOverrideVolumetricNoise.hpp"
UExpHeightFogParamsOverrideVolumetricNoise* UExpHeightFogParamsOverrideVolumetricNoise::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParamsOverrideVolumetricNoise");
    return (UExpHeightFogParamsOverrideVolumetricNoise*)res;
}
