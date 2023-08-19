#pragma once
#include <cstdint>
#include "EAxis\Type.hpp"
#pragma pack(push, 1)
struct FBoneMirrorInfo {
    int32_t SourceIndex; // 0x0
    EAxis::Type BoneFlipAxis; // 0x4
    char pad_5[0x3];
}; // Size: 0x8
#pragma pack(pop)
