#pragma once
#include <cstdint>
#include "FCustomBlueprintInputDelegateBinding.hpp"
#include "UCustomInputDelegateBinding.hpp"
#pragma pack(push, 1)
class UCustomInputActionDelegateBinding : public UCustomInputDelegateBinding {
public:
    TArray<FCustomBlueprintInputDelegateBinding> InputActionDelegateBindings; // 0x28
    static UCustomInputActionDelegateBinding* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
