#include "UGlobalLightRigModCollection.hpp"
#include "UGlobalLightingBlendableModCollection.hpp"
#include "UGlobalLightingBlendableModsBase.hpp"
UGlobalLightingBlendableModCollection* UGlobalLightingBlendableModCollection::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableModCollection");
    return (UGlobalLightingBlendableModCollection*)res;
}
