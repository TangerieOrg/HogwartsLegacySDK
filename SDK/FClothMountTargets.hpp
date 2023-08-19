#pragma once
#include <cstdint>
class UTransformProvider;
#pragma pack(push, 1)
struct FClothMountTargets {
    UTransformProvider* RightClothTargetTransform; // 0x0
    UTransformProvider* HipsClothTargetTransform; // 0x8
    UTransformProvider* LeftClothTargetTransform; // 0x10
}; // Size: 0x18
#pragma pack(pop)
