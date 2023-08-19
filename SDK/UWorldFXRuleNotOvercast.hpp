#pragma once
#include <cstdint>
#include "UWorldFXRuleOvercast.hpp"
#pragma pack(push, 1)
class UWorldFXRuleNotOvercast : public UWorldFXRuleOvercast {
public:
    float Threshold; // 0x28
    char pad_2c[0x4];
    static UWorldFXRuleNotOvercast* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
