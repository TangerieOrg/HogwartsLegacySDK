#pragma once
#include <cstdint>
#include "EBoneControlSpace.hpp"
#include "FAnimNode_Base.hpp"
#include "FBlendBoneByChannelEntry.hpp"
#include "FInputScaleBias.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base {
    FPoseLink A; // 0x10
    FPoseLink B; // 0x20
    TArray<FBlendBoneByChannelEntry> BoneDefinitions; // 0x30
    char pad_40[0x10];
    float Alpha; // 0x50
    char pad_54[0x4];
    FInputScaleBias AlphaScaleBias; // 0x58
    EBoneControlSpace TransformsSpace; // 0x60
    char pad_61[0x7];
}; // Size: 0x68
#pragma pack(pop)
