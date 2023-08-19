#include "UGlobalLightRigModOption.hpp"
#include "UGlobalLightRigModOptionTypeMaximum.hpp"
UGlobalLightRigModOptionTypeMaximum* UGlobalLightRigModOptionTypeMaximum::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModOptionTypeMaximum");
    return (UGlobalLightRigModOptionTypeMaximum*)res;
}
