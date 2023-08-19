#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FBoneScaleEntry {
    FName SliderName; // 0x0
    TArray<FName> BoneNames; // 0x8
    float Default; // 0x18
    float Min; // 0x1c
    float Max; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
