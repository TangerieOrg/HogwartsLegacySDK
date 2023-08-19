#include "FExpHeightFogBasicParametersOverride.hpp"
#include "FExpHeightFogDirectionalInscatteringParametersOverride.hpp"
#include "FExpHeightFogSecondParametersOverride.hpp"
#include "FExpHeightFogVolumetricLightingParametersOverride.hpp"
#include "FExpHeightFogVolumetricNoiseParametersOverride.hpp"
#include "FExpHeightFogVolumetricParametersOverride.hpp"
#include "UBlendableGlobalLightingVolumeFogDefaults.hpp"
#include "UBlendableGlobalLightingVolumeFogDefaultsBase.hpp"
UBlendableGlobalLightingVolumeFogDefaults* UBlendableGlobalLightingVolumeFogDefaults::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.BlendableGlobalLightingVolumeFogDefaults");
    return (UBlendableGlobalLightingVolumeFogDefaults*)res;
}
