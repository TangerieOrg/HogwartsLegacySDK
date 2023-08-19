#include "FBlueprintInputAxisDelegateBinding.hpp"
#include "UInputAxisDelegateBinding.hpp"
#include "UInputDelegateBinding.hpp"
UInputAxisDelegateBinding* UInputAxisDelegateBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InputAxisDelegateBinding");
    return (UInputAxisDelegateBinding*)res;
}
