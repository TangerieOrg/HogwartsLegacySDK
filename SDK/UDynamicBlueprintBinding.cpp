#include "UDynamicBlueprintBinding.hpp"
#include "UObject.hpp"
UDynamicBlueprintBinding* UDynamicBlueprintBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DynamicBlueprintBinding");
    return (UDynamicBlueprintBinding*)res;
}
