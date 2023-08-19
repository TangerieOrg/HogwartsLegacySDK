#pragma once
#include <cstdint>
#include "EBoneControlSpace.hpp"
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#pragma pack(push, 1)
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase {
    FBoneReference SourceBone; // 0xc8
    FBoneReference TargetBone; // 0xd8
    bool bCopyTranslation; // 0xe8
    bool bCopyRotation; // 0xe9
    bool bCopyScale; // 0xea
    EBoneControlSpace ControlSpace; // 0xeb
    char pad_ec[0x4];
}; // Size: 0xf0
#pragma pack(pop)
