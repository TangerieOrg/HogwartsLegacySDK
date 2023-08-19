#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FUISpellState {
    FName SpellName; // 0x0
    bool AllowInUI; // 0x8
    char pad_9[0x3];
    FName LockName; // 0xc
}; // Size: 0x14
#pragma pack(pop)
