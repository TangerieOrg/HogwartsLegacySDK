#pragma once
#include <cstdint>
#include "FVector.hpp"
class UAnimSequence;
#pragma pack(push, 1)
struct FBlendSample {
    UAnimSequence* Animation; // 0x0
    FVector SampleValue; // 0x8
    float RateScale; // 0x14
}; // Size: 0x18
#pragma pack(pop)
