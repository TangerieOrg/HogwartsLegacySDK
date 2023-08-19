#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblSetVsPhysicsCollisionResolutionEnabledTask : public UAblAbilityTask {
public:
    bool bEnabled; // 0x70
    char pad_71[0x7];
    static UAblSetVsPhysicsCollisionResolutionEnabledTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
