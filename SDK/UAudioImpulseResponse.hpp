#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UAudioImpulseResponse : public UObject {
public:
    TArray<float> ImpulseResponse; // 0x28
    int32_t NumChannels; // 0x38
    int32_t SampleRate; // 0x3c
    float NormalizationVolumeDb; // 0x40
    bool bTrueStereo; // 0x44
    char pad_45[0x3];
    TArray<float> IRData; // 0x48
    static UAudioImpulseResponse* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
