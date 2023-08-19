#pragma once
#include <cstdint>
class UAnimSequenceBase;
#pragma pack(push, 1)
struct FStationStoryAnimationContent {
    TArray<UAnimSequenceBase*> Animation; // 0x0
    float weight; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
