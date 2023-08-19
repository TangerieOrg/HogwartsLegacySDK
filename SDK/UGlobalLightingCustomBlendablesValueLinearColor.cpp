#include "FGlobalLightingCustomBlendableNameLinearColor.hpp"
#include "FLinearColor.hpp"
#include "UGlobalLightingCustomBlendablesValueAllowDefaults.hpp"
#include "UGlobalLightingCustomBlendablesValueLinearColor.hpp"
UGlobalLightingCustomBlendablesValueLinearColor* UGlobalLightingCustomBlendablesValueLinearColor::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingCustomBlendablesValueLinearColor");
    return (UGlobalLightingCustomBlendablesValueLinearColor*)res;
}
