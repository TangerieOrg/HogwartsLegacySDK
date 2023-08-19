#include "FBTCustomBlueprintActionDelegateBinding.hpp"
#include "UBTCustomActionDelegateBinding.hpp"
#include "UDynamicBlueprintBinding.hpp"
UBTCustomActionDelegateBinding* UBTCustomActionDelegateBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/BTCustomRuntime.BTCustomActionDelegateBinding");
    return (UBTCustomActionDelegateBinding*)res;
}
