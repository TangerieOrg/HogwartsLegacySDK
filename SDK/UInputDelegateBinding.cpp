#include "UDynamicBlueprintBinding.hpp"
#include "UInputDelegateBinding.hpp"
UInputDelegateBinding* UInputDelegateBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InputDelegateBinding");
    return (UInputDelegateBinding*)res;
}
