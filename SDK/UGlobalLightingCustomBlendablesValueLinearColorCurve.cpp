#include "FGlobalLightRigWorldModDriverName.hpp"
#include "FGlobalLightingCustomBlendableNameLinearColor.hpp"
#include "UCurveLinearColor.hpp"
#include "UGlobalLightingCustomBlendablesValue.hpp"
#include "UGlobalLightingCustomBlendablesValueLinearColorCurve.hpp"
UGlobalLightingCustomBlendablesValueLinearColorCurve* UGlobalLightingCustomBlendablesValueLinearColorCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingCustomBlendablesValueLinearColorCurve");
    return (UGlobalLightingCustomBlendablesValueLinearColorCurve*)res;
}
