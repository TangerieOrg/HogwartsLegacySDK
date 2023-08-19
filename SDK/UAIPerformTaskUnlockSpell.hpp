#pragma once
#include <cstdint>
#include "UAIPerformTaskBase.hpp"
#pragma pack(push, 1)
class UAIPerformTaskUnlockSpell : public UAIPerformTaskBase {
public:
    int32_t SpellSlot; // 0xe0
    char pad_e4[0xc];
    static UAIPerformTaskUnlockSpell* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
