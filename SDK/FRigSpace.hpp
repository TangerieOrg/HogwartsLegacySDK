#pragma once
#include <cstdint>
#include "ERigSpaceType.hpp"
#include "FRigElement.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigSpace : public FRigElement {
    ERigSpaceType SpaceType; // 0x18
    char pad_19[0x3];
    FName ParentName; // 0x1c
    int32_t ParentIndex; // 0x24
    char pad_28[0x8];
    FTransform InitialTransform; // 0x30
    FTransform LocalTransform; // 0x60
}; // Size: 0x90
#pragma pack(pop)
