#include "FExpHeightFogVolumetricAdvancedParametersRelative.hpp"
#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogParamsRelativeVolumetricAdvanced.hpp"
UExpHeightFogParamsRelativeVolumetricAdvanced* UExpHeightFogParamsRelativeVolumetricAdvanced::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParamsRelativeVolumetricAdvanced");
    return (UExpHeightFogParamsRelativeVolumetricAdvanced*)res;
}
