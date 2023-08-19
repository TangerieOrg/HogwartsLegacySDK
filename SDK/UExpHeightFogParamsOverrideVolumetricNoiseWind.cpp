#include "FVector.hpp"
#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogParamsOverrideVolumetricNoiseWind.hpp"
UExpHeightFogParamsOverrideVolumetricNoiseWind* UExpHeightFogParamsOverrideVolumetricNoiseWind::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParamsOverrideVolumetricNoiseWind");
    return (UExpHeightFogParamsOverrideVolumetricNoiseWind*)res;
}
