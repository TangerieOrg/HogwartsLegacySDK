#include "FExpHeightFogVolumetricAdvancedParametersOverride.hpp"
#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogParamsOverrideVolumetricAdvanced.hpp"
UExpHeightFogParamsOverrideVolumetricAdvanced* UExpHeightFogParamsOverrideVolumetricAdvanced::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParamsOverrideVolumetricAdvanced");
    return (UExpHeightFogParamsOverrideVolumetricAdvanced*)res;
}
