#include "UGlobalLightRigModOption.hpp"
#include "UGlobalLightRigModOptionTypeMinimum.hpp"
UGlobalLightRigModOptionTypeMinimum* UGlobalLightRigModOptionTypeMinimum::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModOptionTypeMinimum");
    return (UGlobalLightRigModOptionTypeMinimum*)res;
}
