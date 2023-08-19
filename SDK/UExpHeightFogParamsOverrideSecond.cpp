#include "FExpHeightFogSecondParametersOverride.hpp"
#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogParamsOverrideSecond.hpp"
UExpHeightFogParamsOverrideSecond* UExpHeightFogParamsOverrideSecond::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParamsOverrideSecond");
    return (UExpHeightFogParamsOverrideSecond*)res;
}
