#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FUberExposureColorGradingValues {
    FString ColorSaturationValue; // 0x0
    FString ColorContrastValue; // 0x10
    FString ColorGammaValue; // 0x20
    FString ColorGainValue; // 0x30
    FString ColorOffsetValue; // 0x40
}; // Size: 0x50
#pragma pack(pop)
