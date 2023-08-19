#include "FBlueprintInputTouchDelegateBinding.hpp"
#include "UInputDelegateBinding.hpp"
#include "UInputTouchDelegateBinding.hpp"
UInputTouchDelegateBinding* UInputTouchDelegateBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InputTouchDelegateBinding");
    return (UInputTouchDelegateBinding*)res;
}
