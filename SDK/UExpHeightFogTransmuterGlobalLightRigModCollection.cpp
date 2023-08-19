#include "UExpHeightFogTransmuter.hpp"
#include "UExpHeightFogTransmuterGlobalLightRigModCollection.hpp"
#include "UGlobalLightRigModCollection.hpp"
UExpHeightFogTransmuterGlobalLightRigModCollection* UExpHeightFogTransmuterGlobalLightRigModCollection::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogTransmuterGlobalLightRigModCollection");
    return (UExpHeightFogTransmuterGlobalLightRigModCollection*)res;
}
