#include "FGlobalLightRigWorldModDriverName.hpp"
#include "FGlobalLightingCustomBlendableNameScalar.hpp"
#include "UCurveFloat.hpp"
#include "UGlobalLightingCustomBlendablesValue.hpp"
#include "UGlobalLightingCustomBlendablesValueScalarCurve.hpp"
UGlobalLightingCustomBlendablesValueScalarCurve* UGlobalLightingCustomBlendablesValueScalarCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingCustomBlendablesValueScalarCurve");
    return (UGlobalLightingCustomBlendablesValueScalarCurve*)res;
}
