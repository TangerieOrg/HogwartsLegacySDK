#pragma once
#include <cstdint>
#include "FAngularRangeLimit.hpp"
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase {
    TArray<FAngularRangeLimit> AngularRangeLimits; // 0xc8
    TArray<FVector> AngularOffsets; // 0xd8
}; // Size: 0xe8
#pragma pack(pop)
