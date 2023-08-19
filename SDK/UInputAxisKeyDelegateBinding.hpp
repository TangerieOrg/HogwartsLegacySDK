#pragma once
#include <cstdint>
#include "FBlueprintInputAxisKeyDelegateBinding.hpp"
#include "UInputDelegateBinding.hpp"
#pragma pack(push, 1)
class UInputAxisKeyDelegateBinding : public UInputDelegateBinding {
public:
    TArray<FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings; // 0x28
    static UInputAxisKeyDelegateBinding* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
