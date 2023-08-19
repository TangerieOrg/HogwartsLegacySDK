#pragma once
#include <cstdint>
#include "UAblOpportunityWindowTagTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblOpportunityWindowTask_ModifyAOECastScratchPad : public UAblOpportunityWindowTagTaskScratchPad {
public:
    char pad_68[0x8];
    static UAblOpportunityWindowTask_ModifyAOECastScratchPad* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
