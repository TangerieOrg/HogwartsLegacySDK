#pragma once
#include <cstdint>
#include "UAblAbilityBaseScratchPad.hpp"
class UAblReactionData;
#pragma pack(push, 1)
class UAblReactionAbilityScratchPad : public UAblAbilityBaseScratchPad {
public:
    UAblReactionData* ReactionData; // 0x28
    char pad_30[0x40];
    static UAblReactionAbilityScratchPad* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
