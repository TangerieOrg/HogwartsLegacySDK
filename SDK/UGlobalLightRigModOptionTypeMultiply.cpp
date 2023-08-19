#include "UGlobalLightRigModOption.hpp"
#include "UGlobalLightRigModOptionTypeMultiply.hpp"
UGlobalLightRigModOptionTypeMultiply* UGlobalLightRigModOptionTypeMultiply::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModOptionTypeMultiply");
    return (UGlobalLightRigModOptionTypeMultiply*)res;
}
