#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAnimNode_TransformRootBone : public FAnimNode_Base {
    FPoseLink BasePose; // 0x10
    FVector Translate; // 0x20
    FRotator Rotate; // 0x2c
    char pad_38[0x38];
}; // Size: 0x70
#pragma pack(pop)
