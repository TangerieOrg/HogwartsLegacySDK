#include "UGlobalLightRigModLerpBinary.hpp"
#include "UGlobalLightRigModLerpIfNotZero.hpp"
UGlobalLightRigModLerpIfNotZero* UGlobalLightRigModLerpIfNotZero::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModLerpIfNotZero");
    return (UGlobalLightRigModLerpIfNotZero*)res;
}
