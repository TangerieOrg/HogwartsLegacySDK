#include "FExpHeightFogParametersRelative.hpp"
#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogParamsRelativeFull.hpp"
UExpHeightFogParamsRelativeFull* UExpHeightFogParamsRelativeFull::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParamsRelativeFull");
    return (UExpHeightFogParamsRelativeFull*)res;
}
