#pragma once
#include <cstdint>
#include "FBlueprintComponentDelegateBinding.hpp"
#include "UDynamicBlueprintBinding.hpp"
#pragma pack(push, 1)
class UComponentDelegateBinding : public UDynamicBlueprintBinding {
public:
    TArray<FBlueprintComponentDelegateBinding> ComponentDelegateBindings; // 0x28
    static UComponentDelegateBinding* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
