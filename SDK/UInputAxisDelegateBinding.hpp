#pragma once
#include <cstdint>
#include "FBlueprintInputAxisDelegateBinding.hpp"
#include "UInputDelegateBinding.hpp"
#pragma pack(push, 1)
class UInputAxisDelegateBinding : public UInputDelegateBinding {
public:
    TArray<FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings; // 0x28
    static UInputAxisDelegateBinding* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
