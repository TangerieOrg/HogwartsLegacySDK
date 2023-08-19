#pragma once
#include <cstdint>
#include "UGlobalLightingBlendable.hpp"
#pragma pack(push, 1)
class UGlobalLightingBlendableDayNightBase : public UGlobalLightingBlendable {
public:
    bool bDisable; // 0x28
    char pad_29[0x7];
    static UGlobalLightingBlendableDayNightBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
