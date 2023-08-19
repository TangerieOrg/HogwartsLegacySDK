#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDynamicsBandSettings {
    float CrossoverTopFrequency; // 0x0
    float AttackTimeMsec; // 0x4
    float ReleaseTimeMsec; // 0x8
    float ThresholdDb; // 0xc
    float Ratio; // 0x10
    float KneeBandwidthDb; // 0x14
    float InputGainDb; // 0x18
    float OutputGainDb; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
