#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCreatureActivityThreshold {
    FName ActivityName; // 0x0
    float HappinessPercentageThreshold; // 0x8
    bool bUnlocked; // 0xc
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)
