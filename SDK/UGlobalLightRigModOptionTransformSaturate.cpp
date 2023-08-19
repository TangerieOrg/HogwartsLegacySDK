#include "UGlobalLightRigModOption.hpp"
#include "UGlobalLightRigModOptionTransformSaturate.hpp"
UGlobalLightRigModOptionTransformSaturate* UGlobalLightRigModOptionTransformSaturate::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModOptionTransformSaturate");
    return (UGlobalLightRigModOptionTransformSaturate*)res;
}
