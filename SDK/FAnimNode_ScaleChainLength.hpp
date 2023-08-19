#pragma once
#include <cstdint>
#include "EScaleChainInitialLength.hpp"
#include "FAnimNode_Base.hpp"
#include "FBoneReference.hpp"
#include "FInputScaleBias.hpp"
#include "FPoseLink.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAnimNode_ScaleChainLength : public FAnimNode_Base {
    FPoseLink InputPose; // 0x10
    float DefaultChainLength; // 0x20
    FBoneReference ChainStartBone; // 0x24
    FBoneReference ChainEndBone; // 0x34
    FVector TargetLocation; // 0x44
    float Alpha; // 0x50
    char pad_54[0x4];
    FInputScaleBias AlphaScaleBias; // 0x58
    EScaleChainInitialLength ChainInitialLength; // 0x60
    char pad_61[0x17];
}; // Size: 0x78
#pragma pack(pop)
