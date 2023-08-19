#include "FExpHeightFogVolumetricNoiseParametersRelative.hpp"
#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogParamsRelativeVolumetricNoise.hpp"
UExpHeightFogParamsRelativeVolumetricNoise* UExpHeightFogParamsRelativeVolumetricNoise::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParamsRelativeVolumetricNoise");
    return (UExpHeightFogParamsRelativeVolumetricNoise*)res;
}
