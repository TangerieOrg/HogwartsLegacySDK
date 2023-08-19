#include "FMaterialPermuterLoadTriggerProperty.hpp"
#include "UMaterialPermuterDynamicTrigger.hpp"
#include "UMaterialPermuterDynamicTriggerNamed.hpp"
UMaterialPermuterDynamicTriggerNamed* UMaterialPermuterDynamicTriggerNamed::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPermuterDynamicTriggerNamed");
    return (UMaterialPermuterDynamicTriggerNamed*)res;
}
