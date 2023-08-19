#pragma once
#include <cstdint>
#include "FBlueprintInputAxisDelegateBinding.hpp"
#include "UCustomInputDelegateBinding.hpp"
#pragma pack(push, 1)
class UCustomInputAxisDelegateBinding : public UCustomInputDelegateBinding {
public:
    TArray<FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings; // 0x28
    static UCustomInputAxisDelegateBinding* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
