#include "UGlobalLightRigModOption.hpp"
#include "UGlobalLightRigModOptionTransformOneMinus.hpp"
UGlobalLightRigModOptionTransformOneMinus* UGlobalLightRigModOptionTransformOneMinus::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModOptionTransformOneMinus");
    return (UGlobalLightRigModOptionTransformOneMinus*)res;
}
