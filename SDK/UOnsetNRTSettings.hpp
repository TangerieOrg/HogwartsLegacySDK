#pragma once
#include <cstdint>
#include "UAudioSynesthesiaNRTSettings.hpp"
#pragma pack(push, 1)
class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings {
public:
    bool bDownmixToMono; // 0x28
    char pad_29[0x3];
    float GranularityInSeconds; // 0x2c
    float Sensitivity; // 0x30
    float MinimumFrequency; // 0x34
    float MaximumFrequency; // 0x38
    char pad_3c[0x4];
    static UOnsetNRTSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
