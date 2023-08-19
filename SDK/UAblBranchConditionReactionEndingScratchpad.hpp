#pragma once
#include <cstdint>
#include "UAblTaskConditionScratchpad.hpp"
class UAblReactionComponent;
class UAblReactionData;
#pragma pack(push, 1)
class UAblBranchConditionReactionEndingScratchpad : public UAblTaskConditionScratchpad {
public:
    UAblReactionComponent* ReactionComp; // 0x30
    UAblReactionData* ReactionData; // 0x38
    static UAblBranchConditionReactionEndingScratchpad* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
