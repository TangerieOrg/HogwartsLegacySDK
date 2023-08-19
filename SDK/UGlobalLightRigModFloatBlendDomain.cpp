#include "UGlobalLightRigModFloatBlendDomain.hpp"
#include "UGlobalLightRigModFloatExternal.hpp"
#include "URenderSettingsCustomBlendDomain.hpp"
UGlobalLightRigModFloatBlendDomain* UGlobalLightRigModFloatBlendDomain::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModFloatBlendDomain");
    return (UGlobalLightRigModFloatBlendDomain*)res;
}
