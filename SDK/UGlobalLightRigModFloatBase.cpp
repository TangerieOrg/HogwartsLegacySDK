#include "UGlobalLightRigMod.hpp"
#include "UGlobalLightRigModFloatBase.hpp"
UGlobalLightRigModFloatBase* UGlobalLightRigModFloatBase::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModFloatBase");
    return (UGlobalLightRigModFloatBase*)res;
}
