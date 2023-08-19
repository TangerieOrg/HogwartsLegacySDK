#include "EGlobalLightRigModLinearColorType.hpp"
#include "EGlobalLightRigModParam.hpp"
#include "EGlobalLightRigModType.hpp"
#include "EGlobalLightRigProbeMode.hpp"
#include "FLinearColor.hpp"
#include "UGlobalLightRigModColorBase.hpp"
#include "UGlobalLightRigModColorConstant.hpp"
UGlobalLightRigModColorConstant* UGlobalLightRigModColorConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModColorConstant");
    return (UGlobalLightRigModColorConstant*)res;
}
