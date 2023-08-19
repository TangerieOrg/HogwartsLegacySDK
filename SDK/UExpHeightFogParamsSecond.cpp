#include "FExpHeightFogSecondParameters.hpp"
#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogParamsSecond.hpp"
UExpHeightFogParamsSecond* UExpHeightFogParamsSecond::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParamsSecond");
    return (UExpHeightFogParamsSecond*)res;
}
