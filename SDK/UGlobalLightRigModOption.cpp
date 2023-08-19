#include "UGlobalLightRigModOption.hpp"
#include "UObject.hpp"
UGlobalLightRigModOption* UGlobalLightRigModOption::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModOption");
    return (UGlobalLightRigModOption*)res;
}
