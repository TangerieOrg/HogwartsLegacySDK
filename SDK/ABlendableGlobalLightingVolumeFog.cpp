#include "ABlendableGlobalLightingVolumeFog.hpp"
#include "ABlendableGlobalLightingVolumeFogBase.hpp"
#include "FExpHeightFogBasicParametersOverride.hpp"
#include "FExpHeightFogDirectionalInscatteringParametersOverride.hpp"
#include "FExpHeightFogSecondParametersOverride.hpp"
#include "FExpHeightFogVolumetricAdvancedParametersOverride.hpp"
#include "FExpHeightFogVolumetricLightingParametersOverride.hpp"
#include "FExpHeightFogVolumetricNoiseParametersOverride.hpp"
#include "FExpHeightFogVolumetricParametersOverride.hpp"
#include "UBlendableGlobalLightingVolumeFogDefaults.hpp"
#include "UFunction.hpp"
ABlendableGlobalLightingVolumeFog* ABlendableGlobalLightingVolumeFog::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.BlendableGlobalLightingVolumeFog");
    return (ABlendableGlobalLightingVolumeFog*)res;
}
void ABlendableGlobalLightingVolumeFog::ReloadDefaults() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.BlendableGlobalLightingVolumeFog.ReloadDefaults"));
    struct Params_ReloadDefaults {
    }; // Size: 0x0
    Params_ReloadDefaults params{};
    ProcessEvent(func, &params);
}
