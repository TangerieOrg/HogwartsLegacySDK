#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLastRenderedExposure {
    float AutoExposureEV100; // 0x0
    float AverageViewLuminanceEV100; // 0x4
    float AverageLuminanceEV100; // 0x8
    char pad_c[0x4];
    int64_t FrameNumber; // 0x10
    bool bValid; // 0x18
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
