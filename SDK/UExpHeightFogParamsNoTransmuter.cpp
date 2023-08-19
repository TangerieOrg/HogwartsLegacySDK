#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogParamsNoTransmuter.hpp"
UExpHeightFogParamsNoTransmuter* UExpHeightFogParamsNoTransmuter::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParamsNoTransmuter");
    return (UExpHeightFogParamsNoTransmuter*)res;
}
