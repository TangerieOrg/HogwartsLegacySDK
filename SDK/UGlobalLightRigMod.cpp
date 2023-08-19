#include "UGlobalLightRigMod.hpp"
#include "UObject.hpp"
UGlobalLightRigMod* UGlobalLightRigMod::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigMod");
    return (UGlobalLightRigMod*)res;
}
