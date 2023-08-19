#include "FExpHeightFogVolumetricParametersRelative.hpp"
#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogParamsRelativeVolumetricFog.hpp"
UExpHeightFogParamsRelativeVolumetricFog* UExpHeightFogParamsRelativeVolumetricFog::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParamsRelativeVolumetricFog");
    return (UExpHeightFogParamsRelativeVolumetricFog*)res;
}
