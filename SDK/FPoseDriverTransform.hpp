#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FPoseDriverTransform {
    FVector TargetTranslation; // 0x0
    FRotator TargetRotation; // 0xc
}; // Size: 0x18
#pragma pack(pop)
