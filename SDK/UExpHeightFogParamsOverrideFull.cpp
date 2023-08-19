#include "FExpHeightFogParametersOverride.hpp"
#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogParamsOverrideFull.hpp"
UExpHeightFogParamsOverrideFull* UExpHeightFogParamsOverrideFull::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParamsOverrideFull");
    return (UExpHeightFogParamsOverrideFull*)res;
}
