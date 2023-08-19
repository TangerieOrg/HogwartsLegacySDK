#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRigUnit_AddOffsetToControl_BoneOffset {
    FName Bone; // 0x0
    FName Control; // 0x8
    char pad_10[0x8];
}; // Size: 0x18
#pragma pack(pop)
