#include "UGlobalLightRigMod.hpp"
#include "UGlobalLightRigModColorBase.hpp"
UGlobalLightRigModColorBase* UGlobalLightRigModColorBase::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModColorBase");
    return (UGlobalLightRigModColorBase*)res;
}
