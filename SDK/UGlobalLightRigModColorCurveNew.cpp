#include "EGlobalLightRigModLinearColorType.hpp"
#include "EGlobalLightRigModParam.hpp"
#include "FGlobalLightRigWorldModDriverName.hpp"
#include "UCurveLinearColor.hpp"
#include "UGlobalLightRigModColorBase.hpp"
#include "UGlobalLightRigModColorCurveNew.hpp"
#include "UGlobalLightRigModOption.hpp"
UGlobalLightRigModColorCurveNew* UGlobalLightRigModColorCurveNew::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModColorCurveNew");
    return (UGlobalLightRigModColorCurveNew*)res;
}
