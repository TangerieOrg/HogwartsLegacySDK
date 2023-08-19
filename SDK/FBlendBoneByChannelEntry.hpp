#pragma once
#include <cstdint>
#include "FBoneReference.hpp"
#pragma pack(push, 1)
struct FBlendBoneByChannelEntry {
    FBoneReference SourceBone; // 0x0
    FBoneReference TargetBone; // 0x10
    bool bBlendTranslation; // 0x20
    bool bBlendRotation; // 0x21
    bool bBlendScale; // 0x22
    char pad_23[0x1];
}; // Size: 0x24
#pragma pack(pop)
