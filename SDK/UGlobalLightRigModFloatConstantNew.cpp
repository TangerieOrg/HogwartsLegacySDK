#include "EGlobalLightRigModColorConversionType.hpp"
#include "EGlobalLightRigModParam.hpp"
#include "UGlobalLightRigModFloatBase.hpp"
#include "UGlobalLightRigModFloatConstantNew.hpp"
#include "UGlobalLightRigModOption.hpp"
UGlobalLightRigModFloatConstantNew* UGlobalLightRigModFloatConstantNew::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModFloatConstantNew");
    return (UGlobalLightRigModFloatConstantNew*)res;
}
