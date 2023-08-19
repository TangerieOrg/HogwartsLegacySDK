#pragma once
#include <cstdint>
#include "FFloatMultiChannelNoiseChannel.hpp"
#include "UFloatProvider.hpp"
#pragma pack(push, 1)
class UFloat_MultiChannelNoise : public UFloatProvider {
public:
    TArray<FFloatMultiChannelNoiseChannel> Channels; // 0x28
    bool Enabled; // 0x38
    char pad_39[0x7];
    static UFloat_MultiChannelNoise* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
