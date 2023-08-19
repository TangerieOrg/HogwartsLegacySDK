#include "UGlobalLightRigModOption.hpp"
#include "UGlobalLightRigModOptionTransformSquare.hpp"
UGlobalLightRigModOptionTransformSquare* UGlobalLightRigModOptionTransformSquare::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModOptionTransformSquare");
    return (UGlobalLightRigModOptionTransformSquare*)res;
}
