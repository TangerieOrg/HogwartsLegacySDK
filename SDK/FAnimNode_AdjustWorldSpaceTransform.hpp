#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAnimNode_AdjustWorldSpaceTransform : public FAnimNode_Base {
    FPoseLink BasePose; // 0x10
    FVector TranslationOffset; // 0x20
    FRotator RotationOffset; // 0x2c
    char pad_38[0x8];
}; // Size: 0x40
#pragma pack(pop)
