#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigUnit.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_GetRelativeBoneTransform : public FRigUnit {
    FName Bone; // 0x8
    FName Space; // 0x10
    char pad_18[0x8];
    FTransform Transform; // 0x20
    FCachedRigElement CachedBone; // 0x50
    FCachedRigElement CachedSpace; // 0x64
    char pad_78[0x8];
}; // Size: 0x80
#pragma pack(pop)
