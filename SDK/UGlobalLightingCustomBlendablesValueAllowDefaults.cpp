#include "UGlobalLightingCustomBlendablesValue.hpp"
#include "UGlobalLightingCustomBlendablesValueAllowDefaults.hpp"
UGlobalLightingCustomBlendablesValueAllowDefaults* UGlobalLightingCustomBlendablesValueAllowDefaults::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingCustomBlendablesValueAllowDefaults");
    return (UGlobalLightingCustomBlendablesValueAllowDefaults*)res;
}
