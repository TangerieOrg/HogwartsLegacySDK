#pragma once
#include <cstdint>
#include "FBoneReference.hpp"
#pragma pack(push, 1)
struct FPerBoneInterpolation {
    FBoneReference BoneReference; // 0x0
    float InterpolationSpeedPerSec; // 0x10
}; // Size: 0x14
#pragma pack(pop)
