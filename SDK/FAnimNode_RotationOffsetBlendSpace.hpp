#pragma once
#include <cstdint>
#include "EAnimAlphaInputType.hpp"
#include "FAnimNode_BlendSpacePlayer.hpp"
#include "FInputAlphaBoolBlend.hpp"
#include "FInputScaleBias.hpp"
#include "FInputScaleBiasClamp.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer {
    FPoseLink BasePose; // 0xe8
    int32_t LODThreshold; // 0xf8
    float Alpha; // 0xfc
    FInputScaleBias AlphaScaleBias; // 0x100
    FInputAlphaBoolBlend AlphaBoolBlend; // 0x108
    FName AlphaCurveName; // 0x150
    FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x158
    char pad_188[0x4];
    EAnimAlphaInputType AlphaInputType; // 0x18c
    bool bAlphaBoolEnabled; // 0x18d
    char pad_18e[0x2];
}; // Size: 0x190
#pragma pack(pop)
