#include "EGlobalLightRigModLinearColorType.hpp"
#include "EGlobalLightRigModParam.hpp"
#include "FLinearColor.hpp"
#include "UGlobalLightRigModColorBase.hpp"
#include "UGlobalLightRigModColorConstantNew.hpp"
#include "UGlobalLightRigModOption.hpp"
UGlobalLightRigModColorConstantNew* UGlobalLightRigModColorConstantNew::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModColorConstantNew");
    return (UGlobalLightRigModColorConstantNew*)res;
}
