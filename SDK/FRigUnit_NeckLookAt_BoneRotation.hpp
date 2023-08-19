#pragma once
#include <cstdint>
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FRigUnit_NeckLookAt_BoneRotation {
    FName Bone; // 0x0
    FRotator BoneRotation; // 0x8
}; // Size: 0x14
#pragma pack(pop)
