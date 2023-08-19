#pragma once
#include <cstdint>
#include "EAxis\Type.hpp"
#pragma pack(push, 1)
struct FBoneMirrorExport {
    FName BoneName; // 0x0
    FName SourceBoneName; // 0x8
    EAxis::Type BoneFlipAxis; // 0x10
    char pad_11[0x3];
}; // Size: 0x14
#pragma pack(pop)
