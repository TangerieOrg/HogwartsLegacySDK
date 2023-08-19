#pragma once
#include <cstdint>
class UAnimSequenceBase;
#pragma pack(push, 1)
struct FAnimSegment {
    UAnimSequenceBase* AnimReference; // 0x0
    float StartPos; // 0x8
    float AnimStartTime; // 0xc
    float AnimEndTime; // 0x10
    float AnimPlayRate; // 0x14
    int32_t LoopingCount; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
