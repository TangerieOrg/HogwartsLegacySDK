#include "FExpHeightFogBasicParametersOverride.hpp"
#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogParamsOverrideBasic.hpp"
UExpHeightFogParamsOverrideBasic* UExpHeightFogParamsOverrideBasic::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParamsOverrideBasic");
    return (UExpHeightFogParamsOverrideBasic*)res;
}
