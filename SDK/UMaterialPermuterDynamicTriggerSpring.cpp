#include "UMaterialPermuterDynamicTriggerNamed.hpp"
#include "UMaterialPermuterDynamicTriggerSpring.hpp"
UMaterialPermuterDynamicTriggerSpring* UMaterialPermuterDynamicTriggerSpring::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPermuterDynamicTriggerSpring");
    return (UMaterialPermuterDynamicTriggerSpring*)res;
}
