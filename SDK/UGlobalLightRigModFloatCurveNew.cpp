#include "EGlobalLightRigModColorConversionType.hpp"
#include "EGlobalLightRigModParam.hpp"
#include "FGlobalLightRigWorldModDriverName.hpp"
#include "UCurveFloat.hpp"
#include "UGlobalLightRigModFloatBase.hpp"
#include "UGlobalLightRigModFloatCurveNew.hpp"
#include "UGlobalLightRigModOption.hpp"
UGlobalLightRigModFloatCurveNew* UGlobalLightRigModFloatCurveNew::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModFloatCurveNew");
    return (UGlobalLightRigModFloatCurveNew*)res;
}
