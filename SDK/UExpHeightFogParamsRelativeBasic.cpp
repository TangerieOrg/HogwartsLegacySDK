#include "FExpHeightFogBasicParametersRelative.hpp"
#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogParamsRelativeBasic.hpp"
UExpHeightFogParamsRelativeBasic* UExpHeightFogParamsRelativeBasic::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParamsRelativeBasic");
    return (UExpHeightFogParamsRelativeBasic*)res;
}
