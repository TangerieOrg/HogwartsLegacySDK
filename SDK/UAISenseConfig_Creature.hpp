#pragma once
#include <cstdint>
#include "UAISenseConfig.hpp"
class UClass;
#pragma pack(push, 1)
class UAISenseConfig_Creature : public UAISenseConfig {
public:
    UClass* Implementation; // 0x48
    float LowerRadius; // 0x50
    float UpperRadius; // 0x54
    float AwarenessMultiplier; // 0x58
    char pad_5c[0x4];
    static UAISenseConfig_Creature* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
