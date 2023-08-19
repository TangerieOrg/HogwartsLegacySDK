#pragma once
#include <cstdint>
#include "FCustomAttribute.hpp"
#pragma pack(push, 1)
struct FCustomAttributePerBoneData {
    int32_t BoneTreeIndex; // 0x0
    char pad_4[0x4];
    TArray<FCustomAttribute> Attributes; // 0x8
}; // Size: 0x18
#pragma pack(pop)
