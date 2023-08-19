#pragma once
#include <cstdint>
#include "FCustomBlueprintAnalogInputDelegateBinding.hpp"
#include "UCustomInputDelegateBinding.hpp"
#pragma pack(push, 1)
class UCustomAnalogInputActionDelegateBinding : public UCustomInputDelegateBinding {
public:
    TArray<FCustomBlueprintAnalogInputDelegateBinding> InputActionDelegateBindings; // 0x28
    static UCustomAnalogInputActionDelegateBinding* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
