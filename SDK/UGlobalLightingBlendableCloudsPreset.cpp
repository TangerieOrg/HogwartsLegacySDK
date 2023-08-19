#include "EGlobalLightingBlendableInputType.hpp"
#include "UCloudsPresetParams.hpp"
#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingBlendableCloudsPreset.hpp"
UGlobalLightingBlendableCloudsPreset* UGlobalLightingBlendableCloudsPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableCloudsPreset");
    return (UGlobalLightingBlendableCloudsPreset*)res;
}
