#pragma once
#include <cstdint>
#include "FRigPoseElement.hpp"
#pragma pack(push, 1)
struct FRigPose {
    TArray<FRigPoseElement> Elements; // 0x0
}; // Size: 0x10
#pragma pack(pop)
