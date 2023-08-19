#pragma once
#include <cstdint>
#include "UAudioSynesthesiaNRT.hpp"
class UConstantQNRTSettings;
#pragma pack(push, 1)
class UConstantQNRT : public UAudioSynesthesiaNRT {
public:
    UConstantQNRTSettings* Settings; // 0x78
    static UConstantQNRT* StaticClass();
    void GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>& OutConstantQ);
    void GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>& OutConstantQ);
}; // Size: 0x80
#pragma pack(pop)
