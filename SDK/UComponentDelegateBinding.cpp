#include "FBlueprintComponentDelegateBinding.hpp"
#include "UComponentDelegateBinding.hpp"
#include "UDynamicBlueprintBinding.hpp"
UComponentDelegateBinding* UComponentDelegateBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ComponentDelegateBinding");
    return (UComponentDelegateBinding*)res;
}
