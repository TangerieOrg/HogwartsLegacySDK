#pragma once
#include <cstdint>
#include "EAnimAlphaInputType.hpp"
#include "FAnimNode_Base.hpp"
#include "FInputAlphaBoolBlend.hpp"
#include "FInputScaleBias.hpp"
#include "FInputScaleBiasClamp.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_TwoWayBlend : public FAnimNode_Base {
    FPoseLink A; // 0x10
    FPoseLink B; // 0x20
    EAnimAlphaInputType AlphaInputType; // 0x30
    uint8_t bAlphaBoolEnabled : 1; // 0x31
    uint8_t pad_bitfield_31_1 : 2;
    uint8_t bResetChildOnActivation : 1; // 0x31
    uint8_t pad_bitfield_31_4 : 4;
    char pad_32[0x2];
    float Alpha; // 0x34
    FInputScaleBias AlphaScaleBias; // 0x38
    FInputAlphaBoolBlend AlphaBoolBlend; // 0x40
    FName AlphaCurveName; // 0x88
    FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90
    char pad_c0[0x8];
}; // Size: 0xc8
#pragma pack(pop)
