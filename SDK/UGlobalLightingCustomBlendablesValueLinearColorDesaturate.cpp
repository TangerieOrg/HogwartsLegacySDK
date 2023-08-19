#include "FGlobalLightingCustomBlendableNameLinearColor.hpp"
#include "UGlobalLightingCustomBlendablesValue.hpp"
#include "UGlobalLightingCustomBlendablesValueLinearColorDesaturate.hpp"
UGlobalLightingCustomBlendablesValueLinearColorDesaturate* UGlobalLightingCustomBlendablesValueLinearColorDesaturate::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingCustomBlendablesValueLinearColorDesaturate");
    return (UGlobalLightingCustomBlendablesValueLinearColorDesaturate*)res;
}
