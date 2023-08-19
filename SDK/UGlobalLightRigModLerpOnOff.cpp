#include "UGlobalLightRigModLerpBinary.hpp"
#include "UGlobalLightRigModLerpOnOff.hpp"
UGlobalLightRigModLerpOnOff* UGlobalLightRigModLerpOnOff::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModLerpOnOff");
    return (UGlobalLightRigModLerpOnOff*)res;
}
