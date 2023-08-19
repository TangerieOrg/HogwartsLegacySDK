#include "UExpHeightFogTransmuter.hpp"
#include "UObject.hpp"
UExpHeightFogTransmuter* UExpHeightFogTransmuter::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogTransmuter");
    return (UExpHeightFogTransmuter*)res;
}
