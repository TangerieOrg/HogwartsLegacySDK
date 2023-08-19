#include "UDataAsset.hpp"
#include "UGlobalLightRigMod.hpp"
#include "UGlobalLightRigModCollection.hpp"
UGlobalLightRigModCollection* UGlobalLightRigModCollection::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModCollection");
    return (UGlobalLightRigModCollection*)res;
}
