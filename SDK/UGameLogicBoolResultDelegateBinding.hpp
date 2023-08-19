#pragma once
#include <cstdint>
#include "FGameLogicBlueprintActionDelegateBinding.hpp"
#include "UDynamicBlueprintBinding.hpp"
#pragma pack(push, 1)
class UGameLogicBoolResultDelegateBinding : public UDynamicBlueprintBinding {
public:
    TArray<FGameLogicBlueprintActionDelegateBinding> ActionDelegateBindings; // 0x28
    static UGameLogicBoolResultDelegateBinding* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
