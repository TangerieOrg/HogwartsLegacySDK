#include "UGlobalLightRigModLerpBinary.hpp"
#include "UGlobalLightRigModLerpControl.hpp"
UGlobalLightRigModLerpBinary* UGlobalLightRigModLerpBinary::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModLerpBinary");
    return (UGlobalLightRigModLerpBinary*)res;
}
