#include "FBlueprintInputActionDelegateBinding.hpp"
#include "UInputActionDelegateBinding.hpp"
#include "UInputDelegateBinding.hpp"
UInputActionDelegateBinding* UInputActionDelegateBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InputActionDelegateBinding");
    return (UInputActionDelegateBinding*)res;
}
