#pragma once
#include <cstdint>
#include "FRigUnitMutable.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_TwoBoneIKFK : public FRigUnitMutable {
    FName StartJoint; // 0x68
    FName EndJoint; // 0x70
    FVector PoleTarget; // 0x78
    float Spin; // 0x84
    char pad_88[0x8];
    FTransform EndEffector; // 0x90
    float IKBlend; // 0xc0
    char pad_c4[0xc];
    FTransform StartJointFKTransform; // 0xd0
    FTransform MidJointFKTransform; // 0x100
    FTransform EndJointFKTransform; // 0x130
    float PreviousFKIKBlend; // 0x160
    char pad_164[0xc];
    FTransform StartJointIKTransform; // 0x170
    FTransform MidJointIKTransform; // 0x1a0
    FTransform EndJointIKTransform; // 0x1d0
    int32_t StartJointIndex; // 0x200
    int32_t MidJointIndex; // 0x204
    int32_t EndJointIndex; // 0x208
    float UpperLimbLength; // 0x20c
    float LowerLimbLength; // 0x210
    char pad_214[0xc];
}; // Size: 0x220
#pragma pack(pop)
