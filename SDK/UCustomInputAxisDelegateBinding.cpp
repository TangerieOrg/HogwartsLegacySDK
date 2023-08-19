#include "FBlueprintInputAxisDelegateBinding.hpp"
#include "UCustomInputAxisDelegateBinding.hpp"
#include "UCustomInputDelegateBinding.hpp"
UCustomInputAxisDelegateBinding* UCustomInputAxisDelegateBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.CustomInputAxisDelegateBinding");
    return (UCustomInputAxisDelegateBinding*)res;
}
