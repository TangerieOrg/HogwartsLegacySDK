#include "FBlueprintInputKeyDelegateBinding.hpp"
#include "UInputDelegateBinding.hpp"
#include "UInputKeyDelegateBinding.hpp"
UInputKeyDelegateBinding* UInputKeyDelegateBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InputKeyDelegateBinding");
    return (UInputKeyDelegateBinding*)res;
}
