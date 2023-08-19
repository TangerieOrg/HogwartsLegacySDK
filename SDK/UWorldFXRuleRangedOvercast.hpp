#pragma once
#include <cstdint>
#include "UWorldFXRuleOvercast.hpp"
#pragma pack(push, 1)
class UWorldFXRuleRangedOvercast : public UWorldFXRuleOvercast {
public:
    float minThreshold; // 0x28
    float maxThreshold; // 0x2c
    static UWorldFXRuleRangedOvercast* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
