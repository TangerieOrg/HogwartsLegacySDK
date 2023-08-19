#pragma once
#include <cstdint>
#include "UAblTaskConditionScratchpad.hpp"
#pragma pack(push, 1)
class UAblBranchConditionReactionDataScratchpad : public UAblTaskConditionScratchpad {
public:
    char pad_30[0x8];
    static UAblBranchConditionReactionDataScratchpad* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
