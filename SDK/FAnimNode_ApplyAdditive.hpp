#pragma once
#include <cstdint>
#include "EAnimAlphaInputType.hpp"
#include "FAnimNode_Base.hpp"
#include "FInputAlphaBoolBlend.hpp"
#include "FInputScaleBias.hpp"
#include "FInputScaleBiasClamp.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_ApplyAdditive : public FAnimNode_Base {
    FPoseLink Base; // 0x10
    FPoseLink Additive; // 0x20
    float Alpha; // 0x30
    FInputScaleBias AlphaScaleBias; // 0x34
    int32_t LODThreshold; // 0x3c
    FInputAlphaBoolBlend AlphaBoolBlend; // 0x40
    FName AlphaCurveName; // 0x88
    FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90
    char pad_c0[0x4];
    EAnimAlphaInputType AlphaInputType; // 0xc4
    bool bAlphaBoolEnabled; // 0xc5
    char pad_c6[0x2];
}; // Size: 0xc8
#pragma pack(pop)
