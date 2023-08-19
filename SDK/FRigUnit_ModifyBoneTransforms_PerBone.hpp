#pragma once
#include <cstdint>
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_ModifyBoneTransforms_PerBone {
    FName Bone; // 0x0
    char pad_8[0x8];
    FTransform Transform; // 0x10
}; // Size: 0x40
#pragma pack(pop)
