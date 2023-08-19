#pragma once
#include <cstdint>
#include "EBoneControlSpace.hpp"
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase {
    FBoneReference BoneToObserve; // 0xc8
    EBoneControlSpace DisplaySpace; // 0xd8
    bool bRelativeToRefPose; // 0xd9
    char pad_da[0x2];
    FVector Translation; // 0xdc
    FRotator Rotation; // 0xe8
    FVector Scale; // 0xf4
}; // Size: 0x100
#pragma pack(pop)
