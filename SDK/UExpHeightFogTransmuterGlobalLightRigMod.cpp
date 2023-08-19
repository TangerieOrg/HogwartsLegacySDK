#include "UExpHeightFogTransmuter.hpp"
#include "UExpHeightFogTransmuterGlobalLightRigMod.hpp"
#include "UGlobalLightRigMod.hpp"
UExpHeightFogTransmuterGlobalLightRigMod* UExpHeightFogTransmuterGlobalLightRigMod::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogTransmuterGlobalLightRigMod");
    return (UExpHeightFogTransmuterGlobalLightRigMod*)res;
}
