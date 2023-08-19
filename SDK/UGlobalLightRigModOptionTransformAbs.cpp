#include "UGlobalLightRigModOption.hpp"
#include "UGlobalLightRigModOptionTransformAbs.hpp"
UGlobalLightRigModOptionTransformAbs* UGlobalLightRigModOptionTransformAbs::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModOptionTransformAbs");
    return (UGlobalLightRigModOptionTransformAbs*)res;
}
