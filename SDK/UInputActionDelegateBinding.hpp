#pragma once
#include <cstdint>
#include "FBlueprintInputActionDelegateBinding.hpp"
#include "UInputDelegateBinding.hpp"
#pragma pack(push, 1)
class UInputActionDelegateBinding : public UInputDelegateBinding {
public:
    TArray<FBlueprintInputActionDelegateBinding> InputActionDelegateBindings; // 0x28
    static UInputActionDelegateBinding* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
