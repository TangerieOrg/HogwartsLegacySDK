#pragma once
#include <cstdint>
#include "FBlueprintInputKeyDelegateBinding.hpp"
#include "UInputDelegateBinding.hpp"
#pragma pack(push, 1)
class UInputKeyDelegateBinding : public UInputDelegateBinding {
public:
    TArray<FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings; // 0x28
    static UInputKeyDelegateBinding* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
