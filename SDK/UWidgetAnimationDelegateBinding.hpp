#pragma once
#include <cstdint>
#include "FBlueprintWidgetAnimationDelegateBinding.hpp"
#include "UDynamicBlueprintBinding.hpp"
#pragma pack(push, 1)
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding {
public:
    TArray<FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28
    static UWidgetAnimationDelegateBinding* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
