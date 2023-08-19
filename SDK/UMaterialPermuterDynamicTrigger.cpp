#include "UMaterialPermuterDynamicTrigger.hpp"
#include "UObject.hpp"
UMaterialPermuterDynamicTrigger* UMaterialPermuterDynamicTrigger::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPermuterDynamicTrigger");
    return (UMaterialPermuterDynamicTrigger*)res;
}
