#include "UMaterialPermuterDynamicTriggerNamed.hpp"
#include "UMaterialPermuterDynamicTriggerWinter.hpp"
UMaterialPermuterDynamicTriggerWinter* UMaterialPermuterDynamicTriggerWinter::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPermuterDynamicTriggerWinter");
    return (UMaterialPermuterDynamicTriggerWinter*)res;
}
