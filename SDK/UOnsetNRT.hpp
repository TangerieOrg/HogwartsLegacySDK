#pragma once
#include <cstdint>
#include "UAudioSynesthesiaNRT.hpp"
class UOnsetNRTSettings;
#pragma pack(push, 1)
class UOnsetNRT : public UAudioSynesthesiaNRT {
public:
    UOnsetNRTSettings* Settings; // 0x78
    static UOnsetNRT* StaticClass();
    void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths);
    void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths);
}; // Size: 0x80
#pragma pack(pop)
