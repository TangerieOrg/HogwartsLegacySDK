#pragma once
#include <cstdint>
class UAnimationAsset;
#pragma pack(push, 1)
struct FAnimTickRecord {
    UAnimationAsset* SourceAsset; // 0x0
    char pad_8[0x48];
}; // Size: 0x50
#pragma pack(pop)
