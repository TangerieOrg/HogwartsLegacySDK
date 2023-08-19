#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
class UAnimMaskAsset;
#pragma pack(push, 1)
struct FAnimMaskAssetRow : public FTableRowBase {
    UAnimMaskAsset* AnimMaskAsset; // 0x8
}; // Size: 0x10
#pragma pack(pop)
