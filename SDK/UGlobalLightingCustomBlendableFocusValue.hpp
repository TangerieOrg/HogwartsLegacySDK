#pragma once
#include <cstdint>
#include "UGlobalLightingBlendableBase.hpp"
#pragma pack(push, 1)
class UGlobalLightingCustomBlendableFocusValue : public UGlobalLightingBlendableBase {
public:
    float Focus; // 0x28
    char pad_2c[0xc];
    static UGlobalLightingCustomBlendableFocusValue* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
