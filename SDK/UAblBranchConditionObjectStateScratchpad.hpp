#pragma once
#include <cstdint>
#include "UAblTaskConditionScratchpad.hpp"
class UObjectStateInfo;
#pragma pack(push, 1)
class UAblBranchConditionObjectStateScratchpad : public UAblTaskConditionScratchpad {
public:
    UObjectStateInfo* ObjectStateInfo; // 0x30
    static UAblBranchConditionObjectStateScratchpad* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
