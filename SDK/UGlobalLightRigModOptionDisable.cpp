#include "UGlobalLightRigModOption.hpp"
#include "UGlobalLightRigModOptionDisable.hpp"
UGlobalLightRigModOptionDisable* UGlobalLightRigModOptionDisable::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModOptionDisable");
    return (UGlobalLightRigModOptionDisable*)res;
}
