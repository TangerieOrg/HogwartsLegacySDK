#include "FGlobalLightingCustomBlendableNameLinearColor.hpp"
#include "UGlobalLightingCustomBlendablesValue.hpp"
#include "UGlobalLightingCustomBlendablesValueLinearColorMultiply.hpp"
UGlobalLightingCustomBlendablesValueLinearColorMultiply* UGlobalLightingCustomBlendablesValueLinearColorMultiply::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingCustomBlendablesValueLinearColorMultiply");
    return (UGlobalLightingCustomBlendablesValueLinearColorMultiply*)res;
}
