#pragma once
#include <cstdint>
#include "EDayNightInheritSunMode.hpp"
#include "UGlobalLightingBlendableDayNightBase.hpp"
#pragma pack(push, 1)
class UGlobalLightingBlendableDayNightInheritSun : public UGlobalLightingBlendableDayNightBase {
public:
    EDayNightInheritSunMode Mode; // 0x30
    char pad_31[0x7];
    static UGlobalLightingBlendableDayNightInheritSun* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
