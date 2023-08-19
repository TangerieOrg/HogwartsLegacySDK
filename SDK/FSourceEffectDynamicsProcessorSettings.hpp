#pragma once
#include <cstdint>
#include "ESourceEffectDynamicsPeakMode.hpp"
#include "ESourceEffectDynamicsProcessorType.hpp"
#pragma pack(push, 1)
struct FSourceEffectDynamicsProcessorSettings {
    ESourceEffectDynamicsProcessorType DynamicsProcessorType; // 0x0
    ESourceEffectDynamicsPeakMode PeakMode; // 0x1
    char pad_2[0x2];
    float LookAheadMsec; // 0x4
    float AttackTimeMsec; // 0x8
    float ReleaseTimeMsec; // 0xc
    float ThresholdDb; // 0x10
    float Ratio; // 0x14
    float KneeBandwidthDb; // 0x18
    float InputGainDb; // 0x1c
    float OutputGainDb; // 0x20
    uint8_t bStereoLinked : 1; // 0x24
    uint8_t bAnalogMode : 1; // 0x24
    uint8_t pad_bitfield_24_2 : 6;
    char pad_25[0x3];
}; // Size: 0x28
#pragma pack(pop)
