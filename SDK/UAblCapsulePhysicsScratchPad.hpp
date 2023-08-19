#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblCapsulePhysicsScratchPad : public UAblAbilityTaskScratchPad {
public:
    bool bInitLockXRotation; // 0x28
    bool bInitLockYRotation; // 0x29
    bool bInitLockZRotation; // 0x2a
    char pad_2b[0x1];
    float LinearDampening; // 0x2c
    static UAblCapsulePhysicsScratchPad* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
