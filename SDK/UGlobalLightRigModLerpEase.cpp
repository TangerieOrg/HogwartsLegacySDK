#include "EGlobalLightRigModLerpEasingType.hpp"
#include "UGlobalLightRigModLerpControl.hpp"
#include "UGlobalLightRigModLerpEase.hpp"
UGlobalLightRigModLerpEase* UGlobalLightRigModLerpEase::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModLerpEase");
    return (UGlobalLightRigModLerpEase*)res;
}
