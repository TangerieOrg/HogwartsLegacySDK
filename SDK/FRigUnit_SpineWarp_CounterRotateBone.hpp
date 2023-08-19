#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRigUnit_SpineWarp_CounterRotateBone {
    FName BoneToCounterRotate; // 0x0
    float MinAngle; // 0x8
    float MaxAngle; // 0xc
    char pad_10[0x4];
}; // Size: 0x14
#pragma pack(pop)
