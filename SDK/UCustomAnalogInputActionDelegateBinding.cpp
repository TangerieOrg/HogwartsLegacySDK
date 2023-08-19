#include "FCustomBlueprintAnalogInputDelegateBinding.hpp"
#include "UCustomAnalogInputActionDelegateBinding.hpp"
#include "UCustomInputDelegateBinding.hpp"
UCustomAnalogInputActionDelegateBinding* UCustomAnalogInputActionDelegateBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.CustomAnalogInputActionDelegateBinding");
    return (UCustomAnalogInputActionDelegateBinding*)res;
}
