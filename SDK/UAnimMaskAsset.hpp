#pragma once
#include <cstdint>
#include "UObject.hpp"
class USkeleton;
#pragma pack(push, 1)
class UAnimMaskAsset : public UObject {
public:
    char pad_28[0x8];
    USkeleton* Skeleton; // 0x30
    UAnimMaskAsset* ParentMask; // 0x38
    char pad_40[0xa0];
    static UAnimMaskAsset* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
