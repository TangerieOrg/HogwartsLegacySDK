#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSoundSubmixSpectralAnalysisBandSettings {
    float BandFrequency; // 0x0
    int32_t AttackTimeMsec; // 0x4
    int32_t ReleaseTimeMsec; // 0x8
    float QFactor; // 0xc
}; // Size: 0x10
#pragma pack(pop)
