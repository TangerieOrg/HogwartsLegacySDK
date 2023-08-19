#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogTransmuter.hpp"
#include "UObject.hpp"
UExpHeightFogParams* UExpHeightFogParams::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParams");
    return (UExpHeightFogParams*)res;
}
