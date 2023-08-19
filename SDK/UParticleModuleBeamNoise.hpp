#pragma once
#include <cstdint>
#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleBeamBase.hpp"
#pragma pack(push, 1)
class UParticleModuleBeamNoise : public UParticleModuleBeamBase {
public:
    uint8_t bLowFreq_Enabled : 1; // 0x30
    uint8_t pad_bitfield_30_1 : 7;
    char pad_31[0x3];
    int32_t Frequency; // 0x34
    int32_t Frequency_LowRange; // 0x38
    char pad_3c[0x4];
    FRawDistributionVector NoiseRange; // 0x40
    FRawDistributionFloat NoiseRangeScale; // 0x88
    uint8_t bNRScaleEmitterTime : 1; // 0xb8
    uint8_t pad_bitfield_b8_1 : 7;
    char pad_b9[0x7];
    FRawDistributionVector NoiseSpeed; // 0xc0
    uint8_t bSmooth : 1; // 0x108
    uint8_t pad_bitfield_108_1 : 7;
    char pad_109[0x3];
    float NoiseLockRadius; // 0x10c
    uint8_t bNoiseLock : 1; // 0x110
    uint8_t bOscillate : 1; // 0x110
    uint8_t pad_bitfield_110_2 : 6;
    char pad_111[0x3];
    float NoiseLockTime; // 0x114
    float NoiseTension; // 0x118
    uint8_t bUseNoiseTangents : 1; // 0x11c
    uint8_t pad_bitfield_11c_1 : 7;
    char pad_11d[0x3];
    FRawDistributionFloat NoiseTangentStrength; // 0x120
    int32_t NoiseTessellation; // 0x150
    uint8_t bTargetNoise : 1; // 0x154
    uint8_t pad_bitfield_154_1 : 7;
    char pad_155[0x3];
    float FrequencyDistance; // 0x158
    uint8_t bApplyNoiseScale : 1; // 0x15c
    uint8_t pad_bitfield_15c_1 : 7;
    char pad_15d[0x3];
    FRawDistributionFloat NoiseScale; // 0x160
    static UParticleModuleBeamNoise* StaticClass();
}; // Size: 0x190
#pragma pack(pop)
