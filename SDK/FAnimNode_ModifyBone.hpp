#pragma once
#include <cstdint>
#include "EBoneControlSpace.hpp"
#include "EBoneModificationMode.hpp"
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase {
    FBoneReference BoneToModify; // 0xc8
    FVector Translation; // 0xd8
    FRotator Rotation; // 0xe4
    FVector Scale; // 0xf0
    EBoneModificationMode TranslationMode; // 0xfc
    EBoneModificationMode RotationMode; // 0xfd
    EBoneModificationMode ScaleMode; // 0xfe
    EBoneControlSpace TranslationSpace; // 0xff
    EBoneControlSpace RotationSpace; // 0x100
    EBoneControlSpace ScaleSpace; // 0x101
    char pad_102[0x6];
}; // Size: 0x108
#pragma pack(pop)
