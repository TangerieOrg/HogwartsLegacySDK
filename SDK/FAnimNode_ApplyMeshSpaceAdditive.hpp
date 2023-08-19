#pragma once
#include <cstdint>
#include "EAnimAlphaInputType.hpp"
#include "FAnimNode_Base.hpp"
#include "FInputAlphaBoolBlend.hpp"
#include "FInputScaleBias.hpp"
#include "FInputScaleBiasClamp.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_ApplyMeshSpaceAdditive : public FAnimNode_Base {
    FPoseLink Base; // 0x10
    FPoseLink Additive; // 0x20
    EAnimAlphaInputType AlphaInputType; // 0x30
    char pad_31[0x3];
    float Alpha; // 0x34
    uint8_t bAlphaBoolEnabled : 1; // 0x38
    uint8_t pad_bitfield_38_1 : 7;
    char pad_39[0x7];
    FInputAlphaBoolBlend AlphaBoolBlend; // 0x40
    FName AlphaCurveName; // 0x88
    FInputScaleBias AlphaScaleBias; // 0x90
    FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x98
    int32_t LODThreshold; // 0xc8
    char pad_cc[0x4];
}; // Size: 0xd0
#pragma pack(pop)
