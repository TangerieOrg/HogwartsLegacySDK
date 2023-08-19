#pragma once
#include <cstdint>
#include "FGuid.hpp"
class UAnimationAsset;
#pragma pack(push, 1)
struct FAnimParentNodeAssetOverride {
    UAnimationAsset* NewAsset; // 0x0
    FGuid ParentNodeGuid; // 0x8
}; // Size: 0x18
#pragma pack(pop)
