#include "FGlobalLightingCustomBlendableNameScalar.hpp"
#include "UGlobalLightingCustomBlendablesValueAllowDefaults.hpp"
#include "UGlobalLightingCustomBlendablesValueScalar.hpp"
UGlobalLightingCustomBlendablesValueScalar* UGlobalLightingCustomBlendablesValueScalar::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingCustomBlendablesValueScalar");
    return (UGlobalLightingCustomBlendablesValueScalar*)res;
}
