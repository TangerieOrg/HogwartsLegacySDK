#include "FCustomBlueprintInputDelegateBinding.hpp"
#include "UCustomInputActionDelegateBinding.hpp"
#include "UCustomInputDelegateBinding.hpp"
UCustomInputActionDelegateBinding* UCustomInputActionDelegateBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.CustomInputActionDelegateBinding");
    return (UCustomInputActionDelegateBinding*)res;
}
