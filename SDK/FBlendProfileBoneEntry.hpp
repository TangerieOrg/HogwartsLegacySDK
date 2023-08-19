#pragma once
#include <cstdint>
#include "FBoneReference.hpp"
#pragma pack(push, 1)
struct FBlendProfileBoneEntry {
    FBoneReference BoneReference; // 0x0
    float BlendScale; // 0x10
}; // Size: 0x14
#pragma pack(pop)
