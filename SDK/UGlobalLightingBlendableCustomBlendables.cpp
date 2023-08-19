#include "EGlobalLightingBlendableInputType.hpp"
#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingBlendableCustomBlendables.hpp"
#include "UGlobalLightingCustomBlendablesValue.hpp"
UGlobalLightingBlendableCustomBlendables* UGlobalLightingBlendableCustomBlendables::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableCustomBlendables");
    return (UGlobalLightingBlendableCustomBlendables*)res;
}
