#pragma once
#include <cstdint>
#include "ECreatureStoppingMode.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchCreatureStoppingModeCondition : public UAblBranchCondition {
public:
    ECreatureStoppingMode StoppingMode; // 0x30
    char pad_31[0x7];
    static UAblBranchCreatureStoppingModeCondition* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
