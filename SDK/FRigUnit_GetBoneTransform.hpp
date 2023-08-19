#pragma once
#include <cstdint>
#include "EBoneGetterSetterMode.hpp"
#include "FCachedRigElement.hpp"
#include "FRigUnit.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_GetBoneTransform : public FRigUnit {
    FName Bone; // 0x8
    EBoneGetterSetterMode Space; // 0x10
    char pad_11[0xf];
    FTransform Transform; // 0x20
    FCachedRigElement CachedBone; // 0x50
    char pad_64[0xc];
}; // Size: 0x70
#pragma pack(pop)
