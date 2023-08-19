#pragma once
#include <cstdint>
#include "FAnimLegIKDefinition.hpp"
#include "FAnimNode_SkeletalControlBase.hpp"
#pragma pack(push, 1)
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase {
    float ReachPrecision; // 0xc8
    int32_t MaxIterations; // 0xcc
    TArray<FAnimLegIKDefinition> LegsDefinition; // 0xd0
    char pad_e0[0x18];
}; // Size: 0xf8
#pragma pack(pop)
