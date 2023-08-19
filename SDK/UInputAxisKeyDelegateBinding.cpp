#include "FBlueprintInputAxisKeyDelegateBinding.hpp"
#include "UInputAxisKeyDelegateBinding.hpp"
#include "UInputDelegateBinding.hpp"
UInputAxisKeyDelegateBinding* UInputAxisKeyDelegateBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InputAxisKeyDelegateBinding");
    return (UInputAxisKeyDelegateBinding*)res;
}
