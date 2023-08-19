#include "UGlobalLightRigModOption.hpp"
#include "UGlobalLightRigModOptionTypeAdd.hpp"
UGlobalLightRigModOptionTypeAdd* UGlobalLightRigModOptionTypeAdd::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModOptionTypeAdd");
    return (UGlobalLightRigModOptionTypeAdd*)res;
}
