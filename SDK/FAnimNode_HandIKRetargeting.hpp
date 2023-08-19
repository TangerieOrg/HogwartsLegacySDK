#pragma once
#include <cstdint>
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#pragma pack(push, 1)
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase {
    FBoneReference RightHandFK; // 0xc8
    FBoneReference LeftHandFK; // 0xd8
    FBoneReference RightHandIK; // 0xe8
    FBoneReference LeftHandIK; // 0xf8
    TArray<FBoneReference> IKBonesToMove; // 0x108
    float HandFKWeight; // 0x118
    char pad_11c[0x4];
}; // Size: 0x120
#pragma pack(pop)
