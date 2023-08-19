#pragma once
#include <cstdint>
#include "UAblConditionalBranchScratchpad.hpp"
#pragma pack(push, 1)
class UAblNpcAbilityBranchScratchpad : public UAblConditionalBranchScratchpad {
public:
    char pad_40[0x8];
    static UAblNpcAbilityBranchScratchpad* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
