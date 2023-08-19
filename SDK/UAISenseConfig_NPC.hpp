#pragma once
#include <cstdint>
#include "UAISenseConfig.hpp"
#pragma pack(push, 1)
class UAISenseConfig_NPC : public UAISenseConfig {
public:
    bool bEnabled; // 0x48
    char pad_49[0x3];
    float UpdateInterval; // 0x4c
    float EvaluateRadius; // 0x50
    bool bStartActive; // 0x54
    char pad_55[0xb];
    static UAISenseConfig_NPC* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
