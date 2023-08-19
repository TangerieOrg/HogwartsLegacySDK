#include "EGlobalLightRigModParam.hpp"
#include "UGlobalLightRigModLerpControl.hpp"
#include "UObject.hpp"
UGlobalLightRigModLerpControl* UGlobalLightRigModLerpControl::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModLerpControl");
    return (UGlobalLightRigModLerpControl*)res;
}
