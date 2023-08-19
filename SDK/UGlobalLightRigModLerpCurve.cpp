#include "UCurveFloat.hpp"
#include "UGlobalLightRigModLerpControl.hpp"
#include "UGlobalLightRigModLerpCurve.hpp"
UGlobalLightRigModLerpCurve* UGlobalLightRigModLerpCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModLerpCurve");
    return (UGlobalLightRigModLerpCurve*)res;
}
