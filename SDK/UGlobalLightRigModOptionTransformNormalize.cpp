#include "UGlobalLightRigModOption.hpp"
#include "UGlobalLightRigModOptionTransformNormalize.hpp"
UGlobalLightRigModOptionTransformNormalize* UGlobalLightRigModOptionTransformNormalize::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModOptionTransformNormalize");
    return (UGlobalLightRigModOptionTransformNormalize*)res;
}
