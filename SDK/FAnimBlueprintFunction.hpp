#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAnimBlueprintFunction {
    FName Name; // 0x0
    FName Group; // 0x8
    int32_t OutputPoseNodeIndex; // 0x10
    char pad_14[0x4];
    TArray<FName> InputPoseNames; // 0x18
    TArray<int32_t> InputPoseNodeIndices; // 0x28
    char pad_38[0x28];
    bool bImplemented; // 0x60
    char pad_61[0x7];
}; // Size: 0x68
#pragma pack(pop)
