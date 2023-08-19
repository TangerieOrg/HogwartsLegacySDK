#pragma once
#include <cstdint>
class UAnimSequence;
#pragma pack(push, 1)
struct FRootMotionExtractionStep {
    UAnimSequence* AnimSequence; // 0x0
    float StartPosition; // 0x8
    float EndPosition; // 0xc
}; // Size: 0x10
#pragma pack(pop)
