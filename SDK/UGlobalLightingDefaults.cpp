#include "FDataTableRowHandle.hpp"
#include "FDirectionalLightParameters.hpp"
#include "FExpHeightFogParameters.hpp"
#include "FProbeLightingParameters.hpp"
#include "FRotator.hpp"
#include "FSkyAtmosphereParameters.hpp"
#include "FSkyLightLightingParameters.hpp"
#include "FVolumetricCloudsLightingParameters.hpp"
#include "FVolumetricCloudsWindParameters.hpp"
#include "FZeroDirectionalLightSettings.hpp"
#include "UDataAsset.hpp"
#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingCustomBlendablesValueAllowDefaults.hpp"
#include "UGlobalLightingDefaults.hpp"
#include "UMaterialInterface.hpp"
UGlobalLightingDefaults* UGlobalLightingDefaults::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingDefaults");
    return (UGlobalLightingDefaults*)res;
}
