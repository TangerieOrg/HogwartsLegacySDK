#include "UMaterialPermuterDynamicTriggerFall.hpp"
#include "UMaterialPermuterDynamicTriggerNamed.hpp"
UMaterialPermuterDynamicTriggerFall* UMaterialPermuterDynamicTriggerFall::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPermuterDynamicTriggerFall");
    return (UMaterialPermuterDynamicTriggerFall*)res;
}
