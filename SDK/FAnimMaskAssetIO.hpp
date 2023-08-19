#pragma once
#include <cstdint>
class USkeleton;
class UAnimMaskAsset;
#pragma pack(push, 1)
struct FAnimMaskAssetIO {
    USkeleton* Skeleton; // 0x0
    UAnimMaskAsset* ParentMask; // 0x8
    char pad_10[0xa0];
}; // Size: 0xb0
#pragma pack(pop)
