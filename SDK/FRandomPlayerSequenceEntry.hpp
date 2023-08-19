#pragma once
#include <cstdint>
#include "FAlphaBlend.hpp"
class UAnimSequence;
#pragma pack(push, 1)
struct FRandomPlayerSequenceEntry {
    UAnimSequence* Sequence; // 0x0
    float ChanceToPlay; // 0x8
    int32_t MinLoopCount; // 0xc
    int32_t MaxLoopCount; // 0x10
    float MinPlayRate; // 0x14
    float MaxPlayRate; // 0x18
    char pad_1c[0x4];
    FAlphaBlend BlendIn; // 0x20
}; // Size: 0x50
#pragma pack(pop)
