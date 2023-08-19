#include "EGlobalLightingBlendableInputType.hpp"
#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingBlendableUseDefaults.hpp"
#include "UGlobalLightingDefaults.hpp"
UGlobalLightingBlendableUseDefaults* UGlobalLightingBlendableUseDefaults::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableUseDefaults");
    return (UGlobalLightingBlendableUseDefaults*)res;
}
