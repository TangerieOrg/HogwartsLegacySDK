#include "UMaterialPermuterDynamicTriggerNamed.hpp"
#include "UMaterialPermuterDynamicTriggerSummer.hpp"
UMaterialPermuterDynamicTriggerSummer* UMaterialPermuterDynamicTriggerSummer::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPermuterDynamicTriggerSummer");
    return (UMaterialPermuterDynamicTriggerSummer*)res;
}
