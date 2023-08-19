#pragma once
#include <cstdint>
#include "FCustomBlueprintStickInputDelegateBinding.hpp"
#include "UCustomInputDelegateBinding.hpp"
#pragma pack(push, 1)
class UCustomStickInputActionDelegateBinding : public UCustomInputDelegateBinding {
public:
    TArray<FCustomBlueprintStickInputDelegateBinding> InputActionDelegateBindings; // 0x28
    static UCustomStickInputActionDelegateBinding* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
