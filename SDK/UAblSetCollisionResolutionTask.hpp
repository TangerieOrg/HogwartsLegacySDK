#pragma once
#include <cstdint>
#include "ECollisionResolutionTaskType.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblSetCollisionResolutionTask : public UAblAbilityTask {
public:
    ECollisionResolutionTaskType CollisionResolutionType; // 0x70
    char pad_71[0x7];
    static UAblSetCollisionResolutionTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
