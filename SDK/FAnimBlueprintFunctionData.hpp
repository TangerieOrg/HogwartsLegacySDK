#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAnimBlueprintFunctionData {
    char pad_0[0x20];
    TArray<void*> InputPoseNodeProperties; // 0x20
    TArray<void*> InputProperties; // 0x30
}; // Size: 0x40
#pragma pack(pop)
