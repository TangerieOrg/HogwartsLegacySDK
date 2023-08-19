#pragma once
#include <cstdint>
class UAnimationAsset;
#pragma pack(push, 1)
struct FAssetMapping {
    UAnimationAsset* SourceAsset; // 0x0
    UAnimationAsset* TargetAsset; // 0x8
}; // Size: 0x10
#pragma pack(pop)
