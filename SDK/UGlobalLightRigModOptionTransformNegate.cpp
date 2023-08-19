#include "UGlobalLightRigModOption.hpp"
#include "UGlobalLightRigModOptionTransformNegate.hpp"
UGlobalLightRigModOptionTransformNegate* UGlobalLightRigModOptionTransformNegate::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModOptionTransformNegate");
    return (UGlobalLightRigModOptionTransformNegate*)res;
}
