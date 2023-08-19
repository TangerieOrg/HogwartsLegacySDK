#include "EGlobalLightRigModLinearColorType.hpp"
#include "EGlobalLightRigModParam.hpp"
#include "EGlobalLightRigModType.hpp"
#include "EGlobalLightRigProbeMode.hpp"
#include "FGlobalLightRigWorldModDriverName.hpp"
#include "UCurveLinearColor.hpp"
#include "UGlobalLightRigModColorBase.hpp"
#include "UGlobalLightRigModColorCurve.hpp"
UGlobalLightRigModColorCurve* UGlobalLightRigModColorCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModColorCurve");
    return (UGlobalLightRigModColorCurve*)res;
}
