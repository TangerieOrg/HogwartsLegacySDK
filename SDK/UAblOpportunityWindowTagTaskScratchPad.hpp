#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblOpportunityWindowTagTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x40];
    static UAblOpportunityWindowTagTaskScratchPad* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
