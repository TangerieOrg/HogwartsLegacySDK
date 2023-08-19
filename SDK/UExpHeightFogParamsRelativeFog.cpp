#include "FExpHeightFogBasicParametersRelative.hpp"
#include "FExpHeightFogDirectionalInscatteringParametersRelative.hpp"
#include "FExpHeightFogSecondParametersRelative.hpp"
#include "FExpHeightFogVolumetricNoiseParametersRelative.hpp"
#include "FExpHeightFogVolumetricParametersRelative.hpp"
#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogParamsRelativeFog.hpp"
UExpHeightFogParamsRelativeFog* UExpHeightFogParamsRelativeFog::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParamsRelativeFog");
    return (UExpHeightFogParamsRelativeFog*)res;
}
