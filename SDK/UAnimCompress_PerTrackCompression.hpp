#pragma once
#include <cstdint>
#include "AnimationCompressionFormat.hpp"
#include "UAnimCompress_RemoveLinearKeys.hpp"
#pragma pack(push, 1)
class UAnimCompress_PerTrackCompression : public UAnimCompress_RemoveLinearKeys {
public:
    float MaxZeroingThreshold; // 0x60
    float MaxPosDiffBitwise; // 0x64
    float MaxAngleDiffBitwise; // 0x68
    float MaxScaleDiffBitwise; // 0x6c
    TArray<AnimationCompressionFormat> AllowedRotationFormats; // 0x70
    TArray<AnimationCompressionFormat> AllowedTranslationFormats; // 0x80
    TArray<AnimationCompressionFormat> AllowedScaleFormats; // 0x90
    uint8_t bResampleAnimation : 1; // 0xa0
    uint8_t pad_bitfield_a0_1 : 7;
    char pad_a1[0x3];
    float ResampledFramerate; // 0xa4
    int32_t MinKeysForResampling; // 0xa8
    uint8_t bUseAdaptiveError : 1; // 0xac
    uint8_t bUseOverrideForEndEffectors : 1; // 0xac
    uint8_t pad_bitfield_ac_2 : 6;
    char pad_ad[0x3];
    int32_t TrackHeightBias; // 0xb0
    float ParentingDivisor; // 0xb4
    float ParentingDivisorExponent; // 0xb8
    uint8_t bUseAdaptiveError2 : 1; // 0xbc
    uint8_t pad_bitfield_bc_1 : 7;
    char pad_bd[0x3];
    float RotationErrorSourceRatio; // 0xc0
    float TranslationErrorSourceRatio; // 0xc4
    float ScaleErrorSourceRatio; // 0xc8
    float MaxErrorPerTrackRatio; // 0xcc
    float PerturbationProbeSize; // 0xd0
    char pad_d4[0x4];
    static UAnimCompress_PerTrackCompression* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
