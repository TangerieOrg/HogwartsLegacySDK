#include "FRuntimeFloatCurve.hpp"
#include "UDataAsset.hpp"
#include "UFlowRippleSystemSettings.hpp"
UFlowRippleSystemSettings* UFlowRippleSystemSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Flow.FlowRippleSystemSettings");
    return (UFlowRippleSystemSettings*)res;
}
