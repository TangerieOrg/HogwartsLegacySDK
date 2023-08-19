#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblCapsulePhysicsTask : public UAblAbilityTask {
public:
    bool bEnablePhysicsAtStart; // 0x70
    bool bEnableGravityAtStart; // 0x71
    bool bEnablePhysicsAtEnd; // 0x72
    bool bEnableGravityAtEnd; // 0x73
    bool bLockXRotation; // 0x74
    bool bLockYRotation; // 0x75
    bool bLockZRotation; // 0x76
    char pad_77[0x1];
    float LinearDampening; // 0x78
    char pad_7c[0x4];
    static UAblCapsulePhysicsTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
