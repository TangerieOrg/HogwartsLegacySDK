#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLastRenderedExposureUnreal {
    float AutoExposure; // 0x0
    float AverageViewLuminance; // 0x4
    float AverageLuminance; // 0x8
    float AverageBrightness; // 0xc
}; // Size: 0x10
#pragma pack(pop)
