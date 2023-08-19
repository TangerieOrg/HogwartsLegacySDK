#pragma once
#include <cstdint>
#include "EGlobalLightingBlendableInputType.hpp"
#include "UGlobalLightingBlendable.hpp"
class UGlobalLightingCustomBlendablesValue;
#pragma pack(push, 1)
class UGlobalLightingBlendableCustomBlendables : public UGlobalLightingBlendable {
public:
    TArray<UGlobalLightingCustomBlendablesValue*> CustomBlendables; // 0x28
    EGlobalLightingBlendableInputType OverrideSource; // 0x38
    char pad_39[0x7];
    static UGlobalLightingBlendableCustomBlendables* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
