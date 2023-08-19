#include "UGlobalLightRigModLerpBinary.hpp"
#include "UGlobalLightRigModLerpIfOne.hpp"
UGlobalLightRigModLerpIfOne* UGlobalLightRigModLerpIfOne::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModLerpIfOne");
    return (UGlobalLightRigModLerpIfOne*)res;
}
