#pragma once
#include <cstdint>
#include "FBTCustomBlueprintActionDelegateBinding.hpp"
#include "UDynamicBlueprintBinding.hpp"
#pragma pack(push, 1)
class UBTCustomActionDelegateBinding : public UDynamicBlueprintBinding {
public:
    TArray<FBTCustomBlueprintActionDelegateBinding> ActionDelegateBindings; // 0x28
    static UBTCustomActionDelegateBinding* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
