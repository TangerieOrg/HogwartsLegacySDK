#pragma once
#include <cstdint>
#include "UAudioAnalyzerAsset.hpp"
class USoundWave;
#pragma pack(push, 1)
class UAudioAnalyzerNRT : public UAudioAnalyzerAsset {
public:
    USoundWave* Sound; // 0x28
    float DurationInSeconds; // 0x30
    char pad_34[0x44];
    static UAudioAnalyzerNRT* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
