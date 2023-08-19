#include "UCustomInputDelegateBinding.hpp"
#include "UInputDelegateBinding.hpp"
UCustomInputDelegateBinding* UCustomInputDelegateBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.CustomInputDelegateBinding");
    return (UCustomInputDelegateBinding*)res;
}
