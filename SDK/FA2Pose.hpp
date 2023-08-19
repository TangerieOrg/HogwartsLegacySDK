#pragma once
#include <cstdint>
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FA2Pose {
    TArray<FTransform> Bones; // 0x0
}; // Size: 0x10
#pragma pack(pop)
