#pragma once
#include <cstdint>
#include "EMobilityActionState\Type.hpp"
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionMobilityType : public UAblBranchCondition {
public:
    EMobilityActionState::Type MobilityActionState; // 0x30
    char pad_31[0x7];
    static UAblBranchConditionMobilityType* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
