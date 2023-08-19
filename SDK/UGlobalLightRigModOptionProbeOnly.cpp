#include "UGlobalLightRigModOption.hpp"
#include "UGlobalLightRigModOptionProbeOnly.hpp"
UGlobalLightRigModOptionProbeOnly* UGlobalLightRigModOptionProbeOnly::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModOptionProbeOnly");
    return (UGlobalLightRigModOptionProbeOnly*)res;
}
