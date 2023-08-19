#include "EGlobalLightingBlendableInputType.hpp"
#include "FCustomBlendableGTAO.hpp"
#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingBlendableGTAOCustomBlendables.hpp"
UGlobalLightingBlendableGTAOCustomBlendables* UGlobalLightingBlendableGTAOCustomBlendables::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableGTAOCustomBlendables");
    return (UGlobalLightingBlendableGTAOCustomBlendables*)res;
}
