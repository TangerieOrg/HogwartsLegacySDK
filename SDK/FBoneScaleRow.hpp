#pragma once
#include <cstdint>
#include "FBoneScaleEntry.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FBoneScaleRow : public FTableRowBase {
    char pad_8[0x28];
    TArray<FBoneScaleEntry> BoneScaleEntries; // 0x30
}; // Size: 0x40
#pragma pack(pop)
