#include "EGlobalLightRigModColorConversionType.hpp"
#include "EGlobalLightRigModParam.hpp"
#include "EGlobalLightRigModType.hpp"
#include "EGlobalLightRigProbeMode.hpp"
#include "FGlobalLightRigWorldModDriverName.hpp"
#include "UCurveFloat.hpp"
#include "UGlobalLightRigModFloatBase.hpp"
#include "UGlobalLightRigModFloatCurve.hpp"
UGlobalLightRigModFloatCurve* UGlobalLightRigModFloatCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModFloatCurve");
    return (UGlobalLightRigModFloatCurve*)res;
}
