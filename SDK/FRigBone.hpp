#pragma once
#include <cstdint>
#include "ERigBoneType.hpp"
#include "FRigElement.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigBone : public FRigElement {
    FName ParentName; // 0x18
    int32_t ParentIndex; // 0x20
    char pad_24[0xc];
    FTransform InitialTransform; // 0x30
    FTransform GlobalTransform; // 0x60
    FTransform LocalTransform; // 0x90
    TArray<int32_t> Dependents; // 0xc0
    ERigBoneType Type; // 0xd0
    char pad_d1[0xf];
}; // Size: 0xe0
#pragma pack(pop)
