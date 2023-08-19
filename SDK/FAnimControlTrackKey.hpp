#pragma once
#include <cstdint>
class UAnimSequence;
#pragma pack(push, 1)
struct FAnimControlTrackKey {
    float StartTime; // 0x0
    char pad_4[0x4];
    UAnimSequence* AnimSeq; // 0x8
    float AnimStartOffset; // 0x10
    float AnimEndOffset; // 0x14
    float AnimPlayRate; // 0x18
    uint8_t bLooping : 1; // 0x1c
    uint8_t bReverse : 1; // 0x1c
    uint8_t pad_bitfield_1c_2 : 6;
    char pad_1d[0x3];
}; // Size: 0x20
#pragma pack(pop)
