#include "ABlendableGlobalLightingVolumeFogBase.hpp"
#include "ABlendableGlobalLightingVolumeFogRelative.hpp"
#include "FExpHeightFogBasicParametersRelative.hpp"
#include "FExpHeightFogDirectionalInscatteringParametersRelative.hpp"
#include "FExpHeightFogSecondParametersRelative.hpp"
#include "FExpHeightFogVolumetricNoiseParametersRelative.hpp"
#include "FExpHeightFogVolumetricParametersRelative.hpp"
#include "UBlendableGlobalLightingVolumeFogRelativeDefaults.hpp"
#include "UFunction.hpp"
void ABlendableGlobalLightingVolumeFogRelative::ReloadDefaults() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.BlendableGlobalLightingVolumeFogRelative.ReloadDefaults"));
    struct Params_ReloadDefaults {
    }; // Size: 0x0
    Params_ReloadDefaults params{};
    ProcessEvent(func, &params);
}
ABlendableGlobalLightingVolumeFogRelative* ABlendableGlobalLightingVolumeFogRelative::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.BlendableGlobalLightingVolumeFogRelative");
    return (ABlendableGlobalLightingVolumeFogRelative*)res;
}
