#pragma once
#include <cstdint>
#include "UAblBranchCondition.hpp"
#pragma pack(push, 1)
class UAblBranchActorTagCondition : public UAblBranchCondition {
public:
    FName TagName; // 0x30
    static UAblBranchActorTagCondition* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
