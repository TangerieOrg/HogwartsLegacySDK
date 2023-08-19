#include "UGlobalLightingCustomBlendablesValue.hpp"
#include "UObject.hpp"
UGlobalLightingCustomBlendablesValue* UGlobalLightingCustomBlendablesValue::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingCustomBlendablesValue");
    return (UGlobalLightingCustomBlendablesValue*)res;
}
