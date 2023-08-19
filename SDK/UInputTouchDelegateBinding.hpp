#pragma once
#include <cstdint>
#include "FBlueprintInputTouchDelegateBinding.hpp"
#include "UInputDelegateBinding.hpp"
#pragma pack(push, 1)
class UInputTouchDelegateBinding : public UInputDelegateBinding {
public:
    TArray<FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings; // 0x28
    static UInputTouchDelegateBinding* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
