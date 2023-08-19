#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionFlightIsGliding : public UAblBranchCondition {
public:
    static UAblBranchConditionFlightIsGliding* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
