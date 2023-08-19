#include "FExpHeightFogBasicParameters.hpp"
#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogParamsBasic.hpp"
UExpHeightFogParamsBasic* UExpHeightFogParamsBasic::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParamsBasic");
    return (UExpHeightFogParamsBasic*)res;
}
