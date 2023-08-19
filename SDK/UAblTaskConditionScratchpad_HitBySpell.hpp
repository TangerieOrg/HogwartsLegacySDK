#pragma once
#include <cstdint>
#include "UAblTaskConditionScratchpad.hpp"
#pragma pack(push, 1)
class UAblTaskConditionScratchpad_HitBySpell : public UAblTaskConditionScratchpad {
public:
    char pad_30[0x18];
    static UAblTaskConditionScratchpad_HitBySpell* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
