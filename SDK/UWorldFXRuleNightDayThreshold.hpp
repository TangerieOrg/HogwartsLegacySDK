#pragma once
#include <cstdint>
#include "UWorldFXRuleNightDay.hpp"
#pragma pack(push, 1)
class UWorldFXRuleNightDayThreshold : public UWorldFXRuleNightDay {
public:
    float minThreshold; // 0x28
    float maxThreshold; // 0x2c
    static UWorldFXRuleNightDayThreshold* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
