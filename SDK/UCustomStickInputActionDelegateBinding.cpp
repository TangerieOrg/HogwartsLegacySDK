#include "FCustomBlueprintStickInputDelegateBinding.hpp"
#include "UCustomInputDelegateBinding.hpp"
#include "UCustomStickInputActionDelegateBinding.hpp"
UCustomStickInputActionDelegateBinding* UCustomStickInputActionDelegateBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.CustomStickInputActionDelegateBinding");
    return (UCustomStickInputActionDelegateBinding*)res;
}
