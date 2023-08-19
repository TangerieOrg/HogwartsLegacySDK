#pragma once
#include <cstdint>
#include "EAnimAlphaInputType.hpp"
#include "FAnimNode_Base.hpp"
#include "FComponentSpacePoseLink.hpp"
#include "FInputAlphaBoolBlend.hpp"
#include "FInputScaleBias.hpp"
#include "FInputScaleBiasClamp.hpp"
#pragma pack(push, 1)
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base {
    FComponentSpacePoseLink ComponentPose; // 0x10
    int32_t LODThreshold; // 0x20
    float ActualAlpha; // 0x24
    EAnimAlphaInputType AlphaInputType; // 0x28
    bool bAlphaBoolEnabled; // 0x29
    char pad_2a[0x2];
    float Alpha; // 0x2c
    FInputScaleBias AlphaScaleBias; // 0x30
    FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
    FName AlphaCurveName; // 0x80
    FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x88
    char pad_b8[0x10];
}; // Size: 0xc8
#pragma pack(pop)
