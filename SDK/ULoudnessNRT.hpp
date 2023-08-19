#pragma once
#include <cstdint>
#include "UAudioSynesthesiaNRT.hpp"
class ULoudnessNRTSettings;
#pragma pack(push, 1)
class ULoudnessNRT : public UAudioSynesthesiaNRT {
public:
    ULoudnessNRTSettings* Settings; // 0x78
    static ULoudnessNRT* StaticClass();
    void GetNormalizedLoudnessAtTime(float InSeconds, float& OutLoudness);
    void GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness);
    void GetLoudnessAtTime(float InSeconds, float& OutLoudness);
    void GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness);
}; // Size: 0x80
#pragma pack(pop)
