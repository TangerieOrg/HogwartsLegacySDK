#include "UGlobalLightingBlendableBase.hpp"
#include "UGlobalLightingCustomBlendableFocusValue.hpp"
UGlobalLightingCustomBlendableFocusValue* UGlobalLightingCustomBlendableFocusValue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GlobalLightingCustomBlendableFocusValue");
    return (UGlobalLightingCustomBlendableFocusValue*)res;
}
