#include "EGlobalLightRigModColorConversionType.hpp"
#include "EGlobalLightRigModParam.hpp"
#include "UGlobalLightRigModFloatBase.hpp"
#include "UGlobalLightRigModFloatExternal.hpp"
#include "UGlobalLightRigModOption.hpp"
UGlobalLightRigModFloatExternal* UGlobalLightRigModFloatExternal::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModFloatExternal");
    return (UGlobalLightRigModFloatExternal*)res;
}
