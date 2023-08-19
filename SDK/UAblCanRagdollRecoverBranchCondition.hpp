#pragma once
#include <cstdint>
#include "UAblTaskCondition.hpp"
#pragma pack(push, 1)
class UAblCanRagdollRecoverBranchCondition : public UAblTaskCondition {
public:
    bool bCheckForRecoverOnGround; // 0x28
    bool bCheckForRecoverInWater; // 0x29
    bool bCheckForRecoverInAir; // 0x2a
    char pad_2b[0x5];
    static UAblCanRagdollRecoverBranchCondition* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
