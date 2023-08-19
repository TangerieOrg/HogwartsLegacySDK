#pragma once
#include <cstdint>
#include "FAlphaBlend.hpp"
#include "FAnimNotifyEvent.hpp"
class UAnimMontage;
#pragma pack(push, 1)
struct FAnimMontageInstance {
    UAnimMontage* Montage; // 0x0
    char pad_8[0x20];
    bool bPlaying; // 0x28
    char pad_29[0x3];
    float DefaultBlendTimeMultiplier; // 0x2c
    char pad_30[0xb8];
    TArray<int32_t> NextSections; // 0xe8
    TArray<int32_t> PrevSections; // 0xf8
    char pad_108[0x10];
    TArray<FAnimNotifyEvent> ActiveStateBranchingPoints; // 0x118
    float Position; // 0x128
    float PlayRate; // 0x12c
    FAlphaBlend Blend; // 0x130
    char pad_160[0x2c];
    int32_t DisableRootMotionCount; // 0x18c
    char pad_190[0x20];
}; // Size: 0x1b0
#pragma pack(pop)
