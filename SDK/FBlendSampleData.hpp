#pragma once
#include <cstdint>
class UAnimSequence;
#pragma pack(push, 1)
struct FBlendSampleData {
    int32_t SampleDataIndex; // 0x0
    char pad_4[0x4];
    UAnimSequence* Animation; // 0x8
    float TotalWeight; // 0x10
    float Time; // 0x14
    float PreviousTime; // 0x18
    float SamplePlayRate; // 0x1c
    char pad_20[0x20];
}; // Size: 0x40
#pragma pack(pop)
