#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblPhysicalReactionConstraintContextTask : public UAblAbilityTask {
public:
    FName ConstraintContext; // 0x70
    static UAblPhysicalReactionConstraintContextTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
