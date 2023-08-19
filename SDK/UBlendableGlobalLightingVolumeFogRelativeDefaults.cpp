#include "FExpHeightFogBasicParametersRelative.hpp"
#include "FExpHeightFogDirectionalInscatteringParametersRelative.hpp"
#include "FExpHeightFogSecondParametersRelative.hpp"
#include "FExpHeightFogVolumetricNoiseParametersRelative.hpp"
#include "FExpHeightFogVolumetricParametersRelative.hpp"
#include "UBlendableGlobalLightingVolumeFogDefaultsBase.hpp"
#include "UBlendableGlobalLightingVolumeFogRelativeDefaults.hpp"
UBlendableGlobalLightingVolumeFogRelativeDefaults* UBlendableGlobalLightingVolumeFogRelativeDefaults::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.BlendableGlobalLightingVolumeFogRelativeDefaults");
    return (UBlendableGlobalLightingVolumeFogRelativeDefaults*)res;
}
