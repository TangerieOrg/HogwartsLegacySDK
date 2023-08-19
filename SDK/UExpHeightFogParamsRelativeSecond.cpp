#include "FExpHeightFogSecondParametersRelative.hpp"
#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogParamsRelativeSecond.hpp"
UExpHeightFogParamsRelativeSecond* UExpHeightFogParamsRelativeSecond::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParamsRelativeSecond");
    return (UExpHeightFogParamsRelativeSecond*)res;
}
