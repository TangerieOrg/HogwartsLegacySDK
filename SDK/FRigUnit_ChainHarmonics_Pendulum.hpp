#pragma once
#include <cstdint>
#include "EControlRigAnimEasingType.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_ChainHarmonics_Pendulum {
    bool bEnabled; // 0x0
    char pad_1[0x3];
    float PendulumStiffness; // 0x4
    FVector PendulumGravity; // 0x8
    float PendulumBlend; // 0x14
    float PendulumDrag; // 0x18
    float PendulumMinimum; // 0x1c
    float PendulumMaximum; // 0x20
    EControlRigAnimEasingType PendulumEase; // 0x24
    char pad_25[0x3];
    FVector UnwindAxis; // 0x28
    float UnwindMinimum; // 0x34
    float UnwindMaximum; // 0x38
}; // Size: 0x3c
#pragma pack(pop)
