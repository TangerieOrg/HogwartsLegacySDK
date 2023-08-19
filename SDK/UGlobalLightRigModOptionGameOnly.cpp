#include "UGlobalLightRigModOption.hpp"
#include "UGlobalLightRigModOptionGameOnly.hpp"
UGlobalLightRigModOptionGameOnly* UGlobalLightRigModOptionGameOnly::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModOptionGameOnly");
    return (UGlobalLightRigModOptionGameOnly*)res;
}
