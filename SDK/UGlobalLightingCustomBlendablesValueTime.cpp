#include "FGlobalLightingCustomBlendableNameTime.hpp"
#include "UGlobalLightingCustomBlendablesValueAllowDefaults.hpp"
#include "UGlobalLightingCustomBlendablesValueTime.hpp"
UGlobalLightingCustomBlendablesValueTime* UGlobalLightingCustomBlendablesValueTime::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingCustomBlendablesValueTime");
    return (UGlobalLightingCustomBlendablesValueTime*)res;
}
