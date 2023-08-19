#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogParamsTransmute.hpp"
UExpHeightFogParamsTransmute* UExpHeightFogParamsTransmute::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParamsTransmute");
    return (UExpHeightFogParamsTransmute*)res;
}
