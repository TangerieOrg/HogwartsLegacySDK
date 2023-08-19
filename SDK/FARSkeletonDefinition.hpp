#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FARSkeletonDefinition {
    int32_t NumJoints; // 0x0
    char pad_4[0x4];
    TArray<FName> JointNames; // 0x8
    TArray<int32_t> ParentIndices; // 0x18
}; // Size: 0x28
#pragma pack(pop)
