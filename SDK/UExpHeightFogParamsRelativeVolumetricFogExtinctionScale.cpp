#include "FAdjustedValueFloat.hpp"
#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogParamsRelativeVolumetricFogExtinctionScale.hpp"
UExpHeightFogParamsRelativeVolumetricFogExtinctionScale* UExpHeightFogParamsRelativeVolumetricFogExtinctionScale::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParamsRelativeVolumetricFogExtinctionScale");
    return (UExpHeightFogParamsRelativeVolumetricFogExtinctionScale*)res;
}
